


#include "nexus_display.h"

#include "celth_stddef.h"

#include "celth_display.h"

static CELTHAPI_VideoFormat_t eGlobalVideoFormat = CELTHAPI_VideoFormat_eNTSC;


static CELTHAPI_VideoFormat_t convertvideoformat2celth(NEXUS_VideoFormat vf)
{

	CELTHAPI_VideoFormat_t vformat;

	
	switch(vf)
	{
	case NEXUS_VideoFormat_eNtsc:
	 vformat = CELTHAPI_VideoFormat_eNTSC;
	 break;
	case NEXUS_VideoFormat_ePalD:
	 vformat = CELTHAPI_VideoFormat_ePAL;
	break;
	case NEXUS_VideoFormat_e480p:
	vformat = CELTHAPI_VideoFormat_e480p;
	break;

	
	case NEXUS_VideoFormat_e576p:
	vformat = CELTHAPI_VideoFormat_e576p;
	break;
	case NEXUS_VideoFormat_e720p:
	vformat = CELTHAPI_VideoFormat_e720p;
	break;
	case NEXUS_VideoFormat_e1080p:
		vformat = CELTHAPI_VideoFormat_e1080p;
	break;

	
	case NEXUS_VideoFormat_e1080i:
		vformat = CELTHAPI_VideoFormat_e1080i;
	break;

	default:
		 vformat = CELTHAPI_VideoFormat_eNTSC;
	 break;
	}

return vformat;
	
}


CELTH_VOID CELTHAPI_SetGlobalVideoFormat(CELTHAPI_VideoFormat_t eFormat)
{
	eGlobalVideoFormat = eFormat;
}

CELTHAPI_VideoFormat_t CELTHAPI_GetGlobalVideoFormat()
{
	return eGlobalVideoFormat;
}
