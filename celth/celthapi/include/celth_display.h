#ifndef	_CELTH_DISPLAY_H_
#define	_CELTH_DISPLAY_H_

/* Includes -------------------------------------------------------------------*/


#ifdef __cplusplus /* celth display  */
extern "C" {
#endif


typedef enum
{
	CELTHAPI_VideoFormat_eNTSC,
	CELTHAPI_VideoFormat_ePAL,
	CELTHAPI_VideoFormat_e480p,
	CELTHAPI_VideoFormat_e576p,
	CELTHAPI_VideoFormat_e720p,
	CELTHAPI_VideoFormat_e1080p,
	CELTHAPI_VideoFormat_e1080i
} CELTHAPI_VideoFormat_t;

CELTH_VOID CELTHAPI_SetGlobalVideoFormat(CELTHAPI_VideoFormat_t eFormat);

CELTHAPI_VideoFormat_t CELTHAPI_GetGlobalVideoFormat();





#ifdef __cplusplus /* celth display */
}
#endif

#endif


