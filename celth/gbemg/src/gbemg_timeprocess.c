#include "celth_stddef.h"

#include "celth_rtos.h"

#include "celth_mutex.h"

#include "celth_debug.h"



#include "gbemg_stddef.h"

#include "gbemg_gendef.h"

#include "gbemg_type.h"
#include "gbemg_index.h"
#include "gbemg_content.h"


#include "gbemg_emglist.h"

#include "gbemg_control.h"

#include "gbemg_timer.h"





CELTHOSL_TaskId_t  onetimetaskid;

CELTHOSL_TaskId_t  twotimetaskid;

static CELTHOSL_SemId_t  gbemg_playsem;







static bool onetimeprocessexit=true;

static bool twotimeprocessexit=true;


static GBEMG_PlayCaseRec_t   playrec[5];



static insert2playreclist(GBEMG_PlayCaseRec_t play)
{

	CELTH_SemWait( gbemg_playsem, CELTHOSL_WaitForEver );


	CELTHOSL_Memcpy(&playrec[play.emglevel],&play,sizeof(GBEMG_PlayCaseRec_t));

	
	CELTH_SemPost(gbemg_playsem);

}

void ResetPlayRecList()
{

	CELTH_SemWait( gbemg_playsem, CELTHOSL_WaitForEver );


	CELTHOSL_Memset(&playrec,0xFF,sizeof(GBEMG_PlayCaseRec_t)*5);


	CELTH_SemPost(gbemg_playsem);

  
}





void*  gbemg_onetimeprocess_fn(void* context)
{

	GBEMG_Time_t timer, issuetimer;

	
	GBEMG_Msg_t  msg;

	U8 i;

	U32 dursec;

	GBEMG_ProcParam_t ProcParam;

	GBEMG_CaseIndex_t indx;
	GBEMG_CaseContent_t cont;

	GBEMG_PlayCaseRec_t play;



	ProcParam.pcasecontent=&cont;
	ProcParam.pcaseindex =&indx;

	do{
		timer=GetCurrentTime();

		if(!GetHeadCaseRunTime(&issuetimer))
		{
			if(CELTHOSL_Memcmp(&timer,&issuetimer,sizeof(GBEMG_Time_t)))
				{

					GetHeadCaseInfo(&ProcParam);
				
					msg.msg_type=GBEMG_MSG_eActArrial;

					msg.msg_packet_length=sizeof(ProcParam);
					msg.msg_packet       =(void*) &ProcParam;
					SendPlayMsg2PlayHander(msg);

					play.emgid=ProcParam.pcaseindex->emg_case_id;
					play.invalid = true;
					play.emglevel=ProcParam.pcaseindex->emg_case_urgent_level;
					play.durationsec=ProcParam.pcaseindex->emg_duration.durationsec;
					CELTHOSL_Memcpy(&play.starttime,&ProcParam.pcaseindex->emg_issue_time,sizeof(GBEMG_Time_t));

					insert2playreclist( play);
					break;

				
				}
		}

		for(i=0;i<5;i++)
		{
			if(playrec[i].invalid==true)
				{
					dursec=GBTimeDiff(&playrec[i].starttime,&timer);
					if(dursec>=play.durationsec)
					{
						
						msg.msg_type=GBEMG_MSG_eActTerminal;
						msg.msg_packet_length=sizeof(GBEMG_PlayCaseRec_t);
						msg.msg_packet=(void*)&playrec[i];
						SendPlayMsg2PlayHander(msg);
					}
					playrec[i].invalid=false;
				}
		}
	
		CELTHOSL_Sleep(500);
	}while(onetimeprocessexit!=true);
	
}

void*  gbemg_twotimeprocess_fn(void* context)
{
	GBEMG_Time_t timer, issuetimer;

	
	GBEMG_Msg_t  msg;

	GBEMG_ProcParam_t ProcParam;

	U8 i;
	
	GBEMG_PlayCaseRec_t play;

	U32 dursec;

	GBEMG_CaseIndex_t indx;
	GBEMG_CaseContent_t cont;

	ProcParam.pcasecontent=&cont;
	ProcParam.pcaseindex =&indx;

	do{
		timer=GetCurrentTime();

		if(!GetHeadCaseRunTime(&issuetimer))
		{
			if(CELTHOSL_Memcmp(&timer,&issuetimer,sizeof(GBEMG_Time_t)))
				{

					GetHeadCaseInfo(&ProcParam);
				
					msg.msg_type=GBEMG_MSG_eActArrial;

					msg.msg_packet_length=sizeof(ProcParam);
					msg.msg_packet       =(void*) &ProcParam;
					SendPlayMsg2PlayHander(msg);


					play.emgid=ProcParam.pcaseindex->emg_case_id;
					play.invalid = true;
					play.emglevel=ProcParam.pcaseindex->emg_case_urgent_level;
					play.durationsec=ProcParam.pcaseindex->emg_duration.durationsec;
					CELTHOSL_Memcpy(&play.starttime,&ProcParam.pcaseindex->emg_issue_time,sizeof(GBEMG_Time_t));

					insert2playreclist( play);
					break;

				
				}
		}


		
		for(i=0;i<5;i++)
		{
			if(playrec[i].invalid==true)
				{
					dursec=GBTimeDiff(&playrec[i].starttime,&timer);
					if(dursec>=play.durationsec)
					{
						
						msg.msg_type=GBEMG_MSG_eActTerminal;
						msg.msg_packet_length=sizeof(GBEMG_PlayCaseRec_t);
						msg.msg_packet=(void*)&playrec[i];
						SendPlayMsg2PlayHander(msg);
					}
					playrec[i].invalid=false;
				}
		}
	
		CELTHOSL_Sleep(400);
	}while(twotimeprocessexit!=true);
}



void Start_GBEMG_EmrgTimerProcess(void* content)
{
CelthApi_Debug_EnterFunction("Start_GBEMG_EmrgTimerProcess");	

	gbemg_playsem=CELTH_SemCreate( "playsem", CELTHOSL_FifoNoTimeOut, 1 );

	CelthApi_Debug_Msg("Create playsem=0x%08x\n",gbemg_playsem);
	onetimeprocessexit=false;
	onetimetaskid=CELTHOSL_TaskCreate(NULL,gbemg_onetimeprocess_fn,NULL,1024*8,13,0,0);	

 CelthApi_Debug_Msg("Create task gbemg_onetimeprocess_fn\n");  
	
	twotimeprocessexit=false;
	twotimetaskid=CELTHOSL_TaskCreate(NULL,gbemg_twotimeprocess_fn,NULL,1024*8,13,0,0);	

 CelthApi_Debug_Msg("Create task gbemg_twotimeprocess_fn\n");  

CelthApi_Debug_LeaveFunction("Start_GBEMG_EmrgTimerProcess");	
}
void Stop_GBEMG_EmrgTimerProcess(void* content)
{
	
	onetimeprocessexit=true;
	twotimeprocessexit=true;

	CELTH_SemDestroy(gbemg_playsem);
	
	CELTHOSL_TaskDelete(onetimetaskid);
	
	CELTHOSL_TaskDelete(twotimetaskid);
	
	
}
