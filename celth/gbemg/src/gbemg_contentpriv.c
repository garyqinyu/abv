#include "celth_stddef.h"
#include "celth_rtos.h"
#include "celth_list.h"
#include "celth_debug.h"


#include "gbemg_stddef.h"
#include "gbemg_gendef.h"

#include "gbemg_type.h"
#include "gbemg_index.h"
#include "gbemg_content.h"
#include "gbemg_emglist.h"


#include "gbemg_contentmacro.h"
#include "gbemg_contentpriv.h"




bool IsValidContentTable(U8* SegTable)
{
	if(SegTable)
	{
		if(GBEMG_CONT_SECTION_TABLE(SegTable)==GBEMG_CONT_TABELID)
		{
			return true;
		}
		
	}
	return false;
}



GBEMG_CaseContent_t* GBEMG_BuildContFromTable(U8* ContTable,U32 TableLength)
{
	GBEMG_CaseContent_t* pCont=NULL;
	
	U16 sectionlen;
	
	U8 lingualnum,i,j,lastsectnum;
	
	GBEMG_Content_Description_t* pContDescripor;
	GBEMG_Content_Description_t* pTempD;
	
	GBEMG_AuxData_t*   pAuxData;
	GBEMG_AuxData_t*   pAuxT;
	
	CelthApi_Debug_EnterFunction("GBEMG_BuildContFromTable");
			
	if(ContTable==NULL)
	{
		return pCont;
	}
	if(!IsValidContentTable(ContTable))
	{
		CelthApi_Debug_Err(("invalid cont table\n"));
		return pCont;
	}
	sectionlen=GBEMG_CONT_SECTION_LENGTH(ContTable);
	if(sectionlen>TableLength)
	{
		CelthApi_Debug_Err("error table length [%d], should be [%d]\n", TableLength,sectionlen);
		return pCont;
	}

/*	lastsectnum=TableLength/4096;

	if(lastsectnum!=0)
	{
		CelthApi_Debug_Err("there are [%d] section\n",lastsectnum);
	}
*/	
	pCont = CELTHOSL_MemoryAlloc(sizeof(GBEMG_CaseContent_t));
	
	if(pCont==NULL)
	{
		CelthApi_Debug_Err("error , no more memory to allocate for the content\n");
		
		return pCont;
	}
	
	pCont->emg_case_id = GBEMG_CONT_EBM_ID_CONFIRM(ContTable);
	
	lingualnum = GBEMG_CONT_MULTILINGUAL_NUM(ContTable);
	pCont->emg_multilingual_description_num = GBEMG_CONT_MULTILINGUAL_NUM(ContTable);
	
	pContDescripor = CELTHOSL_MemoryAlloc(lingualnum*sizeof(GBEMG_Content_Description_t));
	
	
	
	if(pContDescripor==NULL)
	{
		CelthApi_Debug_Err("error , no more memory to allocate for the descriptor or auxdata\n");
		
		CELTHOSL_MemoryFree(pCont);
		
		pCont=NULL;
		
		return pCont;
	}
	
	pCont->pemg_content_description = pContDescripor;
	
	/*pCont->pemg_auxiliary_data   = pAuxData;*/
	
	
	
	ContTable +=GBEMG_CONT_TABLE_HEADER_LENGTH;
	
	
	for(i=0;i<lingualnum;i++)
	{
		/* construct the pemg_content_description*/
		
		
		
		pTempD = (GBEMG_Content_Description_t*)(pContDescripor+i);
		
		pTempD->language_type=GBEMG_CONTCONT_LANGUAGE_CODE(ContTable);
		
		pTempD->content_msg_length = GBEMG_CONTCONT_MSGTEXT_LENGTH(ContTable);
		
		pTempD->pcontent_msg_buffer = CELTHOSL_MemoryAlloc(sizeof(U8)*pTempD->content_msg_length);
		
		if(pTempD->pcontent_msg_buffer==NULL)
		{
			CelthApi_Debug_Err("alloc memory fail\n");
			
			CELTHOSL_MemoryFree(pContDescripor);
			
			
			CELTHOSL_MemoryFree(pCont);
			
			pCont=NULL;
			
			return pCont;
			
			
		}
		
		ContTable += 8;
		CELTHOSL_Memcpy(pTempD->pcontent_msg_buffer,&ContTable,pTempD->content_msg_length);
		
		ContTable += pTempD->content_msg_length;
		
		pTempD->agency_name_length = GBEMG_CONTCONT_AGENCYNAME_LENGTH(ContTable);
		
		ContTable +=1;
		
		CELTHOSL_Memcpy(pTempD->agency_name,ContTable,pTempD->agency_name_length);
		
		ContTable += pTempD->agency_name_length;
		
		pTempD->auxiliary_data_num = GBEMG_CONTCONT_AUXILIARY_DATA_NUM(ContTable);
		
		
		pAuxData = CELTHOSL_MemoryAlloc(pTempD->auxiliary_data_num*sizeof(GBEMG_AuxData_t));
		
		
		if(pAuxData==NULL)
		{
			CelthApi_Debug_Err("No more memory for the auxiliary data\n ");
			
			
			CELTHOSL_MemoryFree(pTempD->pcontent_msg_buffer);
			
			CELTHOSL_MemoryFree(pContDescripor);
			
			
			CELTHOSL_MemoryFree(pCont);
			
			pCont=NULL;
			
			return pCont;
			
			
		}
		
		pTempD->pemg_auxiliary_data = pAuxData;
		
		ContTable+=1;
		
		for(j=0;j<pTempD->auxiliary_data_num;j++)
		{
		     pAuxT = (GBEMG_AuxData_t*)(pAuxData+j);	
		     pAuxT->aux_data_type = GBEMG_CONTCONT_AUXILIARY_DATA_TYPE(ContTable);
		     
		     
		     pAuxT->aux_data_length = GBEMG_CONTCONT_AUXILIARY_DATA_LENGTH(ContTable);
		     
		     ContTable += 4;
		     
		     pAuxT->paux_data_buffer = CELTHOSL_MemoryAlloc(pAuxT->aux_data_length*sizeof(U8));
		     
		     if(pAuxT->paux_data_buffer==NULL)
		     {
		     	
		     	CelthApi_Debug_Err("No more memory for the auxiliary data buffer\n");
			
			
			CELTHOSL_MemoryFree(pAuxData);
			
			CELTHOSL_MemoryFree(pTempD->pcontent_msg_buffer);
			
			
			
			CELTHOSL_MemoryFree(pContDescripor);
			
			
			CELTHOSL_MemoryFree(pCont);
			
			pCont=NULL;
			
			return pCont;
		     	
		     	
		     }
		     
		     CELTHOSL_Memcpy(pAuxT->paux_data_buffer,ContTable,pAuxT->aux_data_length);
		     
		     ContTable += pAuxT->aux_data_length;
		    
		}
		
	}

	CelthApi_Debug_LeaveFunction("GBEMG_BuildContFromTable");
	
	return pCont;	
	
}


/* implement it later*/

GBEMG_CaseContent_t* GBEMG_BuildContFromMultiTable(U8* MultiContTable,U32 MultiTableLength)
{

 	int	i,secnum,seclength,totallength;

	U16 ebiid,nextebiid;

	U8 vernum,nextver,tableid;

	U8*  pTempbuf;
	U8* pTempbufHeader;

	GBEMG_CaseContent_t* pCont;

	CelthApi_Debug_EnterFunction("GBEMG_BuildContFromMultiTable");
	if(MultiContTable==NULL)
	{
		return NULL;
	}

	

	pTempbuf=(U8*)CELTHOSL_MemoryAlloc(MultiTableLength*sizeof(U8));

	pTempbufHeader=pTempbuf;

	CelthApi_Debug_Msg("\nAlloc BufSize=%x, pos=0x%08x\n",MultiTableLength,pTempbuf);

	if(pTempbuf==NULL)
	{
			return NULL;
	}

	totallength=0;
	
	secnum=MultiTableLength/4096;

	ebiid=GBEMG_CONT_EBM_ID_CONFIRM(MultiContTable);

	vernum=GBEMG_CONT_VERSION_NUM(MultiContTable);

	CELTHOSL_Memcpy(pTempbuf,MultiContTable,GBEMG_CONT_TABLE_HEADER_LENGTH);

	pTempbuf+=GBEMG_CONT_TABLE_HEADER_LENGTH;

	totallength+=GBEMG_CONT_TABLE_HEADER_LENGTH;

	for(i=0;i<secnum;i++)
	{
		MultiContTable+=i*4096;
		nextebiid=GBEMG_CONT_EBM_ID_CONFIRM(MultiContTable);
		nextver  = GBEMG_CONT_VERSION_NUM(MultiContTable);
		tableid = *(MultiContTable);

		if((tableid==GBEMG_CONT_TABELID)&&(ebiid==nextebiid)&&(vernum==nextver))
		{
			seclength=GBEMG_CONT_SECTION_LENGTH(MultiContTable);

			CELTHOSL_Memcpy(pTempbuf,(MultiContTable+GBEMG_CONT_TABLE_HEADER_LENGTH),seclength-4); /* we did not  care CRC ,right now*/

			
		}

		pTempbuf+=seclength-4;

		totallength+=seclength-4;
		
	}
		

	
	pCont=GBEMG_BuildContFromTable(pTempbufHeader,totallength);

	CELTHOSL_MemoryFree(pTempbufHeader);
	CelthApi_Debug_LeaveFunction("GBEMG_BuildContFromMultiTable");

	return pCont;
	
	
}





