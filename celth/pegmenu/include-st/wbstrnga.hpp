

enum STRINGA_IDS {
	SID_ServiceAudioMenuWindowTitle = 0,
	SID_AGCAdjButton,
	SID_PrescSCARTButton,
	SID_PrescFMButton,
	SID_PrescNICAMButton,
	SID_ThrSwNICAMButton,
	SID_MainAudioMenuWindowTitle,
	SID_AudioTypeButton,
	SID_VolumeButton,
	SID_BalanceButton,
	SID_LoudnessButton,
	SID_SpEffectButton,
	SID_SpLevelButton,
	SID_AdvAudioButton,
	SID_StatusMono,
	SID_StatusAuto,
	SID_STWideGainButton,
	SID_SRS3DSpaceButton,
	SID_SRS3DCentreButton,
	SID_AdvAudioMenuWindowTitle,
	SID_SmartVolumeButton,
	SID_SubwooferButton,
	SID_AudioLanguageButton,
	SID_EqualizerButton,
	SID_HeadPhoneButton,
	SID_EqualizerMenuWindowTitle,
	SID_SoundPresetButton,
	SID_PresetMovie,
	SID_PresetMusic,
	SID_PresetHall,
	SID_PresetFlat,
	SID_PresetPersonal,
	SID_Band1,
	SID_Band2,
	SID_Band3,
	SID_Band4,
	SID_Band5,
	SID_HeadPhoneMenuWindowTitle,
	SID_BassButton,
	SID_TrebleButton,
	SID_HpLanguageButton,
	SID_LeftOnBoth,
	SID_RightOnBoth,
	SID_MixOnBoth,
	SID_StereoLang,
	SID_STWideSimulated,
	SID_SRS3DMono,
	SID_STWideMusic,
	SID_STWideMovie,
	SID_SRS3D,
	SID_One,
	SID_AGCMessage
};

const PEGCHAR  *LookupStringA(WORD wSID);

#define LSA(a) LookupStringA(a)
