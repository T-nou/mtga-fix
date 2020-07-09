#include <stdint.h>
#include <windows.h>

extern void Init(HMODULE);

static int (*Actual_CSharp__ArrayPoolDefault_Get)() = nullptr;
static int (*Actual_CSharp__ArrayPoolLEngineDefault_Get)() = nullptr;
static int (*Actual_CSharp__ArrayPoolSpatialAudio_Get)() = nullptr;
static int (*Actual_CSharp_AddBasePath)(const wchar_t* jarg1) = nullptr;
static int (*Actual_CSharp_AddDefaultListener)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_AddListener)(uint64_t jarg1, uint64_t jarg2) = nullptr;
static int (*Actual_CSharp_AddOutput)(void* jarg1, uint64_t& jarg2, uint64_t* jarg3, unsigned jarg4) = nullptr;
static int (*Actual_CSharp_AddOutputCaptureMarker)(const char* jarg1) = nullptr;
static uint16_t(*Actual_CSharp_AK_FLOAT_get)() = nullptr;
static uint16_t(*Actual_CSharp_AK_INT_get)() = nullptr;
static uint8_t(*Actual_CSharp_AK_INTERLEAVED_get)() = nullptr;
static uint8_t(*Actual_CSharp_AK_INVALID_MIDI_CHANNEL_get)() = nullptr;
static uint8_t(*Actual_CSharp_AK_INVALID_MIDI_NOTE_get)() = nullptr;
static unsigned (*Actual_CSharp_AK_LE_NATIVE_BITSPERSAMPLE_get)() = nullptr;
static unsigned (*Actual_CSharp_AK_LE_NATIVE_INTERLEAVE_get)() = nullptr;
static unsigned (*Actual_CSharp_AK_LE_NATIVE_SAMPLETYPE_get)() = nullptr;
static uint8_t(*Actual_CSharp_AK_NONINTERLEAVED_get)() = nullptr;
static unsigned (*Actual_CSharp_AK_SOUNDBANK_VERSION_get)() = nullptr;
static void (*Actual_CSharp_AK_SPEAKER_SETUP_CONVERT_TO_SUPPORTED)(unsigned& jarg1) = nullptr;
static void (*Actual_CSharp_AK_SPEAKER_SETUP_FIX_LEFT_TO_CENTER)(unsigned& jarg1) = nullptr;
static void (*Actual_CSharp_AK_SPEAKER_SETUP_FIX_REAR_TO_SIDE)(unsigned& jarg1) = nullptr;
static void* (*Actual_CSharp_AkAudioFormat_channelConfig_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAudioFormat_channelConfig_set)(void* jarg1, void* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkAudioFormat_GetBitsPerSample)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkAudioFormat_GetBlockAlign)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkAudioFormat_GetInterleaveID)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkAudioFormat_GetNumChannels)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkAudioFormat_GetTypeID)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkAudioFormat_IsChannelConfigSupported)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAudioFormat_SetAll)(void* jarg1, unsigned jarg2, void* jarg3, unsigned jarg4, unsigned jarg5, unsigned jarg6, unsigned jarg7) = nullptr;
static unsigned (*Actual_CSharp_AkAudioFormat_uBitsPerSample_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAudioFormat_uBitsPerSample_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkAudioFormat_uBlockAlign_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAudioFormat_uBlockAlign_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkAudioFormat_uInterleaveID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAudioFormat_uInterleaveID_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkAudioFormat_uSampleRate_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAudioFormat_uSampleRate_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkAudioFormat_uTypeID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAudioFormat_uTypeID_set)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkAudioInterruptionCallbackInfo_bEnterInterruption_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkAudioSettings_uNumSamplesPerFrame_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAudioSettings_uNumSamplesPerFrame_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkAudioSettings_uNumSamplesPerSecond_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAudioSettings_uNumSamplesPerSecond_set)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkAudioSourceChangeCallbackInfo_bOtherAudioPlaying_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkAuxSendValue_auxBusID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAuxSendValue_auxBusID_set)(void* jarg1, unsigned jarg2) = nullptr;
static float (*Actual_CSharp_AkAuxSendValue_fControlValue_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAuxSendValue_fControlValue_set)(void* jarg1, float jarg2) = nullptr;
static int (*Actual_CSharp_AkAuxSendValue_GetGameObjectAuxSendValues)(void* jarg1, uint64_t jarg2, unsigned& jarg3) = nullptr;
static int (*Actual_CSharp_AkAuxSendValue_GetSizeOf)() = nullptr;
static int (*Actual_CSharp_AkAuxSendValue_IsSame)(void* jarg1, uint64_t jarg2, unsigned jarg3) = nullptr;
static uint64_t(*Actual_CSharp_AkAuxSendValue_listenerID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkAuxSendValue_listenerID_set)(void* jarg1, uint64_t jarg2) = nullptr;
static void (*Actual_CSharp_AkAuxSendValue_Set)(void* jarg1, uint64_t jarg2, unsigned jarg3, float jarg4) = nullptr;
static int (*Actual_CSharp_AkAuxSendValue_SetGameObjectAuxSendValues)(void* jarg1, uint64_t jarg2, unsigned jarg3) = nullptr;
static unsigned (*Actual_CSharp_AkBankCallbackInfo_bankID_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkBankCallbackInfo_inMemoryBankPtr_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkBankCallbackInfo_loadResult_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkBankCallbackInfo_memPoolId_get)(void* jarg1) = nullptr;
static uint64_t(*Actual_CSharp_AkCallbackInfo_gameObjID_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkCallbackInfo_pCookie_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkCallbackSerializer_AudioSourceChangeCallbackFunc)(int jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_AkCallbackSerializer_Init)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkCallbackSerializer_Lock)() = nullptr;
static void (*Actual_CSharp_AkCallbackSerializer_SetLocalOutput)(unsigned jarg1) = nullptr;
static void (*Actual_CSharp_AkCallbackSerializer_Term)() = nullptr;
static void (*Actual_CSharp_AkCallbackSerializer_Unlock)() = nullptr;
static void (*Actual_CSharp_AkChannelConfig_Clear)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkChannelConfig_Deserialize)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkChannelConfig_eConfigType_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkChannelConfig_eConfigType_set)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkChannelConfig_IsChannelConfigSupported)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkChannelConfig_IsValid)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkChannelConfig_RemoveCenter)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkChannelConfig_RemoveLFE)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkChannelConfig_Serialize)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkChannelConfig_SetAmbisonic)(void* jarg1, unsigned jarg2) = nullptr;
static void (*Actual_CSharp_AkChannelConfig_SetAnonymous)(void* jarg1, unsigned jarg2) = nullptr;
static void (*Actual_CSharp_AkChannelConfig_SetStandard)(void* jarg1, unsigned jarg2) = nullptr;
static void (*Actual_CSharp_AkChannelConfig_SetStandardOrAnonymous)(void* jarg1, unsigned jarg2, unsigned jarg3) = nullptr;
static unsigned (*Actual_CSharp_AkChannelConfig_uChannelMask_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkChannelConfig_uChannelMask_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkChannelConfig_uNumChannels_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkChannelConfig_uNumChannels_set)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkChannelEmitter_position_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkChannelEmitter_position_set)(void* jarg1, void* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkChannelEmitter_uInputChannels_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkChannelEmitter_uInputChannels_set)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkDeviceSettings_bUseStreamCache_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkDeviceSettings_bUseStreamCache_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkDeviceSettings_ePoolAttributes_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkDeviceSettings_ePoolAttributes_set)(void* jarg1, int jarg2) = nullptr;
static float (*Actual_CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_set)(void* jarg1, float jarg2) = nullptr;
static void* (*Actual_CSharp_AkDeviceSettings_pIOMemory_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkDeviceSettings_pIOMemory_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkDeviceSettings_threadProperties_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkDeviceSettings_threadProperties_set)(void* jarg1, void* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkDeviceSettings_uGranularity_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkDeviceSettings_uGranularity_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkDeviceSettings_uIOMemoryAlignment_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkDeviceSettings_uIOMemoryAlignment_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkDeviceSettings_uIOMemorySize_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkDeviceSettings_uIOMemorySize_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkDeviceSettings_uMaxCachePinnedBytes_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkDeviceSettings_uMaxCachePinnedBytes_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkDeviceSettings_uMaxConcurrentIO_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkDeviceSettings_uMaxConcurrentIO_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkDeviceSettings_uSchedulerTypeFlags_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkDeviceSettings_uSchedulerTypeFlags_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkDurationCallbackInfo_audioNodeID_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkDurationCallbackInfo_bStreaming_get)(void* jarg1) = nullptr;
static float (*Actual_CSharp_AkDurationCallbackInfo_fDuration_get)(void* jarg1) = nullptr;
static float (*Actual_CSharp_AkDurationCallbackInfo_fEstimatedDuration_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkDurationCallbackInfo_mediaID_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkDurationCallbackInfo_SWIGUpcast)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkDynamicSequenceItemCallbackInfo_audioNodeID_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkDynamicSequenceItemCallbackInfo_pCustomInfo_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkDynamicSequenceItemCallbackInfo_playingID_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkDynamicSequenceItemCallbackInfo_SWIGUpcast)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkEmitterSettings_reflectAuxBusID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkEmitterSettings_reflectAuxBusID_set)(void* jarg1, unsigned jarg2) = nullptr;
static float (*Actual_CSharp_AkEmitterSettings_reflectionMaxPathLength_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkEmitterSettings_reflectionMaxPathLength_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkEmitterSettings_reflectionsAuxBusGain_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkEmitterSettings_reflectionsAuxBusGain_set)(void* jarg1, float jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkEmitterSettings_reflectionsOrder_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkEmitterSettings_reflectionsOrder_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkEmitterSettings_reflectorFilterMask_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkEmitterSettings_reflectorFilterMask_set)(void* jarg1, unsigned jarg2) = nullptr;
static float (*Actual_CSharp_AkEmitterSettings_roomReverbAuxBusGain_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkEmitterSettings_roomReverbAuxBusGain_set)(void* jarg1, float jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkEmitterSettings_useImageSources_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkEmitterSettings_useImageSources_set)(void* jarg1, uint8_t jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkEventCallbackInfo_eventID_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkEventCallbackInfo_playingID_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkEventCallbackInfo_SWIGUpcast)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkExternalSourceInfo_idCodec_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkExternalSourceInfo_idCodec_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkExternalSourceInfo_idFile_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkExternalSourceInfo_idFile_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkExternalSourceInfo_iExternalSrcCookie_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkExternalSourceInfo_iExternalSrcCookie_set)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkExternalSourceInfo_pInMemory_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkExternalSourceInfo_pInMemory_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkExternalSourceInfo_szFile_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkExternalSourceInfo_szFile_set)(void* jarg1, const wchar_t* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkExternalSourceInfo_uiMemorySize_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkExternalSourceInfo_uiMemorySize_set)(void* jarg1, unsigned jarg2) = nullptr;
static float (*Actual_CSharp_AkImageSourceParams_fDistanceScalingFactor_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkImageSourceParams_fDistanceScalingFactor_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkImageSourceParams_fLevel_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkImageSourceParams_fLevel_set)(void* jarg1, float jarg2) = nullptr;
static void* (*Actual_CSharp_AkImageSourceParams_sourcePosition_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkImageSourceParams_sourcePosition_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkImageSourceSettings_params__get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkImageSourceSettings_params__set)(void* jarg1, void* jarg2) = nullptr;
static void (*Actual_CSharp_AkImageSourceSettings_SetName)(void* jarg1, const char* jarg2) = nullptr;
static void (*Actual_CSharp_AkImageSourceSettings_SetOneTexture)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkInitSettings_bEnableGameSyncPreparation_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_bEnableGameSyncPreparation_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkInitSettings_bUseLEngineThread_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_bUseLEngineThread_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkInitSettings_bUseSoundBankMgrThread_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_bUseSoundBankMgrThread_set)(void* jarg1, int jarg2) = nullptr;
static float (*Actual_CSharp_AkInitSettings_fDefaultPoolRatioThreshold_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_fDefaultPoolRatioThreshold_set)(void* jarg1, float jarg2) = nullptr;
static void* (*Actual_CSharp_AkInitSettings_pfnAssertHook_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_pfnAssertHook_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkInitSettings_settingsMainOutput_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_settingsMainOutput_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkInitSettings_szPluginDLLPath_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_szPluginDLLPath_set)(void* jarg1, const wchar_t* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkInitSettings_uCommandQueueSize_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_uCommandQueueSize_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkInitSettings_uContinuousPlaybackLookAhead_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_uContinuousPlaybackLookAhead_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkInitSettings_uDefaultPoolSize_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_uDefaultPoolSize_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkInitSettings_uMaxHardwareTimeoutMs_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_uMaxHardwareTimeoutMs_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkInitSettings_uMaxNumPaths_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_uMaxNumPaths_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkInitSettings_uMonitorPoolSize_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_uMonitorPoolSize_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkInitSettings_uMonitorQueuePoolSize_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_uMonitorQueuePoolSize_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkInitSettings_uNumSamplesPerFrame_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_uNumSamplesPerFrame_set)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkInitSettings_uPrepareEventMemoryPoolID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkInitSettings_uPrepareEventMemoryPoolID_set)(void* jarg1, int jarg2) = nullptr;
static void* (*Actual_CSharp_AkIterator_GetItem)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkIterator_IsDifferentFrom)(void* jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_AkIterator_IsEqualTo)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkIterator_NextIter)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkIterator_pItem_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkIterator_pItem_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkIterator_PrevIter)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkMarkerCallbackInfo_strLabel_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkMarkerCallbackInfo_SWIGUpcast)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkMarkerCallbackInfo_uIdentifier_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkMarkerCallbackInfo_uPosition_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkMemSettings_uDebugFlags_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMemSettings_uDebugFlags_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkMemSettings_uMaxNumPools_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMemSettings_uMaxNumPools_set)(void* jarg1, unsigned jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_byAftertouchNote_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byAftertouchNote_set)(void* jarg1, uint8_t jarg2) = nullptr;
static int (*Actual_CSharp_AkMIDIEvent_byCc_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byCc_set)(void* jarg1, int jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_byCcValue_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byCcValue_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_byChan_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byChan_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_byChanAftertouchValue_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byChanAftertouchValue_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_byNoteAftertouchValue_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byNoteAftertouchValue_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_byOnOffNote_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byOnOffNote_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_byProgramNum_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byProgramNum_set)(void* jarg1, uint8_t jarg2) = nullptr;
static int (*Actual_CSharp_AkMIDIEvent_byType_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byType_set)(void* jarg1, int jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_byValueLsb_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byValueLsb_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_byValueMsb_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byValueMsb_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_byVelocity_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_byVelocity_set)(void* jarg1, uint8_t jarg2) = nullptr;
static void* (*Actual_CSharp_AkMIDIEvent_Cc_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_Cc_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkMIDIEvent_ChanAftertouch_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_ChanAftertouch_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkMIDIEvent_Gen_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_Gen_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkMIDIEvent_NoteAftertouch_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_NoteAftertouch_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkMIDIEvent_NoteOnOff_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_NoteOnOff_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkMIDIEvent_PitchBend_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_PitchBend_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkMIDIEvent_ProgramChange_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_ProgramChange_set)(void* jarg1, void* jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tCc_byCc_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tCc_byCc_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tCc_byValue_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tCc_byValue_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tChanAftertouch_byValue_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tChanAftertouch_byValue_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tGen_byParam1_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tGen_byParam1_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tGen_byParam2_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tGen_byParam2_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byNote_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byNote_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byValue_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byValue_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tNoteOnOff_byNote_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tNoteOnOff_byNote_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tPitchBend_byValueLsb_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tPitchBend_byValueLsb_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tPitchBend_byValueMsb_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tPitchBend_byValueMsb_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEvent_tProgramChange_byProgramNum_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIEvent_tProgramChange_byProgramNum_set)(void* jarg1, uint8_t jarg2) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byAftertouchNote_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkMIDIEventCallbackInfo_byCc_get)(void* jarg1) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byCcValue_get)(void* jarg1) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byChan_get)(void* jarg1) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byChanAftertouchValue_get)(void* jarg1) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byNoteAftertouchValue_get)(void* jarg1) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byOnOffNote_get)(void* jarg1) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byParam1_get)(void* jarg1) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byParam2_get)(void* jarg1) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byProgramNum_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkMIDIEventCallbackInfo_byType_get)(void* jarg1) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byValueLsb_get)(void* jarg1) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byValueMsb_get)(void* jarg1) = nullptr;
static uint8_t(*Actual_CSharp_AkMIDIEventCallbackInfo_byVelocity_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkMIDIEventCallbackInfo_SWIGUpcast)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIPost_Clone)(void* jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_AkMIDIPost_GetSizeOf)() = nullptr;
static int (*Actual_CSharp_AkMIDIPost_PostOnEvent)(void* jarg1, unsigned jarg2, uint64_t jarg3, unsigned jarg4) = nullptr;
static void* (*Actual_CSharp_AkMIDIPost_SWIGUpcast)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkMIDIPost_uOffset_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMIDIPost_uOffset_set)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkMonitoringCallbackInfo_errorCode_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkMonitoringCallbackInfo_errorLevel_get)(void* jarg1) = nullptr;
static uint64_t(*Actual_CSharp_AkMonitoringCallbackInfo_gameObjID_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkMonitoringCallbackInfo_message_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkMonitoringCallbackInfo_playingID_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkMusicPlaylistCallbackInfo_playlistID_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkMusicPlaylistCallbackInfo_SWIGUpcast)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkMusicPlaylistCallbackInfo_uNumPlaylistItems_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkMusicPlaylistCallbackInfo_uPlaylistItemDone_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkMusicPlaylistCallbackInfo_uPlaylistSelection_get)(void* jarg1) = nullptr;
static float (*Actual_CSharp_AkMusicSettings_fStreamingLookAheadRatio_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkMusicSettings_fStreamingLookAheadRatio_set)(void* jarg1, float jarg2) = nullptr;
static int (*Actual_CSharp_AkMusicSyncCallbackInfo_musicSyncType_get)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkMusicSyncCallbackInfo_playingID_get)(void* jarg1) = nullptr;
static float (*Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBarDuration_get)(void* jarg1) = nullptr;
static float (*Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBeatDuration_get)(void* jarg1) = nullptr;
static float (*Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridDuration_get)(void* jarg1) = nullptr;
static float (*Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridOffset_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iActiveDuration_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iCurrentPosition_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPostExitDuration_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPreEntryDuration_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iRemainingLookAheadTime_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkMusicSyncCallbackInfo_SWIGUpcast)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkMusicSyncCallbackInfo_userCueName_get)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkObjectInfo_iDepth_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkObjectInfo_iDepth_set)(void* jarg1, int jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkObjectInfo_objID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkObjectInfo_objID_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkObjectInfo_parentID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkObjectInfo_parentID_set)(void* jarg1, unsigned jarg2) = nullptr;
static float (*Actual_CSharp_AkObstructionOcclusionValues_obstruction_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkObstructionOcclusionValues_obstruction_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkObstructionOcclusionValues_occlusion_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkObstructionOcclusionValues_occlusion_set)(void* jarg1, float jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkOutputSettings_audioDeviceShareset_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkOutputSettings_audioDeviceShareset_set)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkOutputSettings_channelConfig_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkOutputSettings_channelConfig_set)(void* jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_AkOutputSettings_ePanningRule_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkOutputSettings_ePanningRule_set)(void* jarg1, int jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkOutputSettings_idDevice_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkOutputSettings_idDevice_set)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkPlatformInitSettings_bGlobalFocus_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlatformInitSettings_bGlobalFocus_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkPlatformInitSettings_eAudioAPI_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlatformInitSettings_eAudioAPI_set)(void* jarg1, int jarg2) = nullptr;
static float (*Actual_CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_set)(void* jarg1, float jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlatformInitSettings_threadBankManager_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlatformInitSettings_threadBankManager_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlatformInitSettings_threadLEngine_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlatformInitSettings_threadLEngine_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlatformInitSettings_threadMonitor_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlatformInitSettings_threadMonitor_set)(void* jarg1, void* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_set)(void* jarg1, unsigned jarg2) = nullptr;
static uint16_t(*Actual_CSharp_AkPlatformInitSettings_uNumRefillsInVoice_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlatformInitSettings_uNumRefillsInVoice_set)(void* jarg1, uint16_t jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkPlatformInitSettings_uSampleRate_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlatformInitSettings_uSampleRate_set)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkPlaylist_Enqueue__SWIG_0)(void* jarg1, unsigned jarg2, int jarg3, void* jarg4, unsigned jarg5, void* jarg6) = nullptr;
static int (*Actual_CSharp_AkPlaylist_Enqueue__SWIG_1)(void* jarg1, unsigned jarg2, int jarg3, void* jarg4, unsigned jarg5) = nullptr;
static int (*Actual_CSharp_AkPlaylist_Enqueue__SWIG_2)(void* jarg1, unsigned jarg2, int jarg3, void* jarg4) = nullptr;
static int (*Actual_CSharp_AkPlaylist_Enqueue__SWIG_3)(void* jarg1, unsigned jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_AkPlaylist_Enqueue__SWIG_4)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlaylist_SWIGUpcast)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkPlaylistArray_AddLast__SWIG_0)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkPlaylistArray_AddLast__SWIG_1)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlaylistArray_Begin)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkPlaylistArray_Copy)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlaylistArray_End)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkPlaylistArray_Erase__SWIG_0)(void* jarg1, void* jarg2) = nullptr;
static void (*Actual_CSharp_AkPlaylistArray_Erase__SWIG_1)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlaylistArray_EraseSwap)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlaylistArray_Exists)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlaylistArray_FindEx)(void* jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_AkPlaylistArray_GrowArray__SWIG_0)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkPlaylistArray_GrowArray__SWIG_1)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkPlaylistArray_Insert)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkPlaylistArray_IsEmpty)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkPlaylistArray_ItemAtIndex)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlaylistArray_Last)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_AkPlaylistArray_Length)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkPlaylistArray_Remove)(void* jarg1, void* jarg2) = nullptr;
static void (*Actual_CSharp_AkPlaylistArray_RemoveAll)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlaylistArray_RemoveLast)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkPlaylistArray_RemoveSwap)(void* jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_AkPlaylistArray_Reserve)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkPlaylistArray_Reserved)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkPlaylistArray_Resize)(void* jarg1, unsigned jarg2) = nullptr;
static void (*Actual_CSharp_AkPlaylistArray_Term)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlaylistArray_Transfer)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlaylistItem_Assign)(void* jarg1, void* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkPlaylistItem_audioNodeID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlaylistItem_audioNodeID_set)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkPlaylistItem_IsEqualTo)(void* jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_AkPlaylistItem_msDelay_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlaylistItem_msDelay_set)(void* jarg1, int jarg2) = nullptr;
static void* (*Actual_CSharp_AkPlaylistItem_pCustomInfo_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPlaylistItem_pCustomInfo_set)(void* jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_AkPlaylistItem_SetExternalSources)(void* jarg1, unsigned jarg2, void* jarg3) = nullptr;
static int (*Actual_CSharp_AkPositioningInfo_bUpdateEachFrame_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_bUpdateEachFrame_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkPositioningInfo_bUseAttenuation_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_bUseAttenuation_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkPositioningInfo_bUseConeAttenuation_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_bUseConeAttenuation_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkPositioningInfo_e3DSpatializationMode_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_e3DSpatializationMode_set)(void* jarg1, int jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_fCenterPct_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_fCenterPct_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_fConeMaxAttenuation_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_fConeMaxAttenuation_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_fInnerAngle_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_fInnerAngle_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_fMaxDistance_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_fMaxDistance_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_fOuterAngle_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_fOuterAngle_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_fVolDryAtMaxDist_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_fVolDryAtMaxDist_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_HPFCone_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_HPFCone_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_HPFValueAtMaxDist_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_HPFValueAtMaxDist_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_LPFCone_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_LPFCone_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPositioningInfo_LPFValueAtMaxDist_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_LPFValueAtMaxDist_set)(void* jarg1, float jarg2) = nullptr;
static int (*Actual_CSharp_AkPositioningInfo_pannerType_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_pannerType_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkPositioningInfo_posSourceType_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPositioningInfo_posSourceType_set)(void* jarg1, int jarg2) = nullptr;
static float (*Actual_CSharp_AkPropagationPathInfo_dryDiffractionAngle_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPropagationPathInfo_dryDiffractionAngle_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPropagationPathInfo_gain_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPropagationPathInfo_gain_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkPropagationPathInfo_length_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPropagationPathInfo_length_set)(void* jarg1, float jarg2) = nullptr;
static void* (*Actual_CSharp_AkPropagationPathInfo_nodePoint_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPropagationPathInfo_nodePoint_set)(void* jarg1, void* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkPropagationPathInfo_numNodes_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPropagationPathInfo_numNodes_set)(void* jarg1, unsigned jarg2) = nullptr;
static float (*Actual_CSharp_AkPropagationPathInfo_wetDiffractionAngle_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkPropagationPathInfo_wetDiffractionAngle_set)(void* jarg1, float jarg2) = nullptr;
static void* (*Actual_CSharp_AkPropagationPathInfoProxy_GetNodePoint)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkPropagationPathInfoProxy_GetSizeOf)() = nullptr;
static void* (*Actual_CSharp_AkPropagationPathInfoProxy_SWIGUpcast)(void* jarg1) = nullptr;
static float (*Actual_CSharp_AkRamp_fNext_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkRamp_fNext_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkRamp_fPrev_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkRamp_fPrev_set)(void* jarg1, float jarg2) = nullptr;
static void* (*Actual_CSharp_AkRoomParams_Front_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkRoomParams_Front_set)(void* jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_AkRoomParams_Priority_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkRoomParams_Priority_set)(void* jarg1, int jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkRoomParams_ReverbAuxBus_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkRoomParams_ReverbAuxBus_set)(void* jarg1, unsigned jarg2) = nullptr;
static float (*Actual_CSharp_AkRoomParams_ReverbLevel_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkRoomParams_ReverbLevel_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_set)(void* jarg1, float jarg2) = nullptr;
static int (*Actual_CSharp_AkRoomParams_RoomGameObj_KeepRegistered_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkRoomParams_RoomGameObj_KeepRegistered_set)(void* jarg1, int jarg2) = nullptr;
static void* (*Actual_CSharp_AkRoomParams_Up_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkRoomParams_Up_set)(void* jarg1, void* jarg2) = nullptr;
static float (*Actual_CSharp_AkRoomParams_WallOcclusion_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkRoomParams_WallOcclusion_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkSegmentInfo_fBarDuration_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSegmentInfo_fBarDuration_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkSegmentInfo_fBeatDuration_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSegmentInfo_fBeatDuration_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkSegmentInfo_fGridDuration_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSegmentInfo_fGridDuration_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkSegmentInfo_fGridOffset_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSegmentInfo_fGridOffset_set)(void* jarg1, float jarg2) = nullptr;
static int (*Actual_CSharp_AkSegmentInfo_iActiveDuration_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSegmentInfo_iActiveDuration_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkSegmentInfo_iCurrentPosition_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSegmentInfo_iCurrentPosition_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkSegmentInfo_iPostExitDuration_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSegmentInfo_iPostExitDuration_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkSegmentInfo_iPreEntryDuration_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSegmentInfo_iPreEntryDuration_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkSegmentInfo_iRemainingLookAheadTime_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSegmentInfo_iRemainingLookAheadTime_set)(void* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_AkSerializedCallbackHeader_eType_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkSerializedCallbackHeader_GetData)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkSerializedCallbackHeader_pNext_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkSerializedCallbackHeader_pPackage_get)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkSoundPathInfo_imageSource_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSoundPathInfo_imageSource_set)(void* jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_AkSoundPathInfo_isOccluded_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSoundPathInfo_isOccluded_set)(void* jarg1, int jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkSoundPathInfo_numReflections_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSoundPathInfo_numReflections_set)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkSoundPathInfo_occlusionPoint_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSoundPathInfo_occlusionPoint_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkSoundPathInfoProxy_GetReflectionPoint)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkSoundPathInfoProxy_GetSizeOf)() = nullptr;
static void* (*Actual_CSharp_AkSoundPathInfoProxy_GetTriangle)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkSoundPathInfoProxy_SWIGUpcast)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkSoundPropagationPathParams_emitterPos_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSoundPropagationPathParams_emitterPos_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkSoundPropagationPathParams_listenerPos_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSoundPropagationPathParams_listenerPos_set)(void* jarg1, void* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkSoundPropagationPathParams_numValidPaths_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSoundPropagationPathParams_numValidPaths_set)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkSourceSettings_pMediaMemory_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSourceSettings_pMediaMemory_set)(void* jarg1, void* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkSourceSettings_sourceID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSourceSettings_sourceID_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkSourceSettings_uMediaSize_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSourceSettings_uMediaSize_set)(void* jarg1, unsigned jarg2) = nullptr;
static float (*Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_set)(void* jarg1, float jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_set)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkSpatialAudioInitSettings_uPoolID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSpatialAudioInitSettings_uPoolID_set)(void* jarg1, int jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkSpatialAudioInitSettings_uPoolSize_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkSpatialAudioInitSettings_uPoolSize_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkStreamMgrSettings_uMemorySize_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkStreamMgrSettings_uMemorySize_set)(void* jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkThreadProperties_dwAffinityMask_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkThreadProperties_dwAffinityMask_set)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_AkThreadProperties_nPriority_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkThreadProperties_nPriority_set)(void* jarg1, int jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkThreadProperties_uStackSize_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkThreadProperties_uStackSize_set)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkTransform_OrientationFront)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkTransform_OrientationTop)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_AkTransform_Position)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkTransform_Set__SWIG_0)(void* jarg1, void* jarg2, void* jarg3, void* jarg4) = nullptr;
static void (*Actual_CSharp_AkTransform_Set__SWIG_1)(void* jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7, float jarg8, float jarg9, float jarg10) = nullptr;
static void (*Actual_CSharp_AkTransform_SetOrientation__SWIG_0)(void* jarg1, void* jarg2, void* jarg3) = nullptr;
static void (*Actual_CSharp_AkTransform_SetOrientation__SWIG_1)(void* jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7) = nullptr;
static void (*Actual_CSharp_AkTransform_SetPosition__SWIG_0)(void* jarg1, void* jarg2) = nullptr;
static void (*Actual_CSharp_AkTransform_SetPosition__SWIG_1)(void* jarg1, float jarg2, float jarg3, float jarg4) = nullptr;
static void* (*Actual_CSharp_AkTriangle_point0_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkTriangle_point0_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkTriangle_point1_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkTriangle_point1_set)(void* jarg1, void* jarg2) = nullptr;
static void* (*Actual_CSharp_AkTriangle_point2_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkTriangle_point2_set)(void* jarg1, void* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkTriangle_reflectorChannelMask_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkTriangle_reflectorChannelMask_set)(void* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_AkTriangle_strName_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkTriangle_strName_set)(void* jarg1, const char* jarg2) = nullptr;
static unsigned (*Actual_CSharp_AkTriangle_textureID_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkTriangle_textureID_set)(void* jarg1, unsigned jarg2) = nullptr;
static void (*Actual_CSharp_AkTriangleProxy_Clear)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkTriangleProxy_DeleteName)(void* jarg1) = nullptr;
static int (*Actual_CSharp_AkTriangleProxy_GetSizeOf)() = nullptr;
static void* (*Actual_CSharp_AkTriangleProxy_SWIGUpcast)(void* jarg1) = nullptr;
static float (*Actual_CSharp_AkVector_X_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkVector_X_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkVector_Y_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkVector_Y_set)(void* jarg1, float jarg2) = nullptr;
static float (*Actual_CSharp_AkVector_Z_get)(void* jarg1) = nullptr;
static void (*Actual_CSharp_AkVector_Z_set)(void* jarg1, float jarg2) = nullptr;
static void (*Actual_CSharp_AkVector_Zero)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_BackToSideChannels)(unsigned jarg1) = nullptr;
static void (*Actual_CSharp_CancelBankCallbackCookie)(void* jarg1) = nullptr;
static void (*Actual_CSharp_CancelEventCallback)(unsigned jarg1) = nullptr;
static void (*Actual_CSharp_CancelEventCallbackCookie)(void* jarg1) = nullptr;
static void (*Actual_CSharp_CancelEventCallbackGameObject)(uint64_t jarg1) = nullptr;
static uint8_t(*Actual_CSharp_ChannelBitToIndex)(unsigned jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_ChannelMaskFromNumChannels)(unsigned jarg1) = nullptr;
static uint8_t(*Actual_CSharp_ChannelMaskToNumChannels)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_ClearBanks)() = nullptr;
static int (*Actual_CSharp_ClearPreparedEvents)() = nullptr;
static void (*Actual_CSharp_delete__ArrayPoolDefault)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete__ArrayPoolLEngineDefault)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete__ArrayPoolSpatialAudio)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkAudioFormat)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkAudioInterruptionCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkAudioSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkAudioSourceChangeCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkAuxSendValue)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkBankCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkCallbackSerializer)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkChannelConfig)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkChannelEmitter)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkDeviceSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkDurationCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkDynamicSequenceItemCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkEmitterSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkEventCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkExternalSourceInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkImageSourceParams)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkImageSourceSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkInitSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkIterator)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMarkerCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMemSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMIDIEvent)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMIDIEvent_tCc)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMIDIEvent_tChanAftertouch)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMIDIEvent_tGen)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMIDIEvent_tNoteAftertouch)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMIDIEvent_tNoteOnOff)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMIDIEvent_tPitchBend)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMIDIEvent_tProgramChange)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMIDIEventCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMIDIPost)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMonitoringCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMusicPlaylistCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMusicSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkMusicSyncCallbackInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkObjectInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkObstructionOcclusionValues)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkOutputSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkPlatformInitSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkPlaylist)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkPlaylistArray)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkPlaylistItem)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkPositioningInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkPropagationPathInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkPropagationPathInfoProxy)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkRamp)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkRoomParams)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkSegmentInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkSerializedCallbackHeader)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkSoundPathInfo)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkSoundPathInfoProxy)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkSoundPropagationPathParams)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkSourceSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkSpatialAudioInitSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkStreamMgrSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkThreadProperties)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkTransform)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkTriangle)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkTriangleProxy)(void* jarg1) = nullptr;
static void (*Actual_CSharp_delete_AkVector)(void* jarg1) = nullptr;
static int (*Actual_CSharp_DynamicSequenceBreak)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_DynamicSequenceClose)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_DynamicSequenceGetPauseTimes)(unsigned jarg1, unsigned& jarg2, unsigned& jarg3) = nullptr;
static void* (*Actual_CSharp_DynamicSequenceLockPlaylist)(unsigned jarg1) = nullptr;
static unsigned (*Actual_CSharp_DynamicSequenceOpen__SWIG_0)(uint64_t jarg1, unsigned jarg2, void* jarg3, void* jarg4, int jarg5) = nullptr;
static unsigned (*Actual_CSharp_DynamicSequenceOpen__SWIG_1)(uint64_t jarg1, unsigned jarg2, void* jarg3, void* jarg4) = nullptr;
static unsigned (*Actual_CSharp_DynamicSequenceOpen__SWIG_2)(uint64_t jarg1, unsigned jarg2) = nullptr;
static unsigned (*Actual_CSharp_DynamicSequenceOpen__SWIG_3)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_DynamicSequencePause__SWIG_0)(unsigned jarg1, int jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_DynamicSequencePause__SWIG_1)(unsigned jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_DynamicSequencePause__SWIG_2)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_DynamicSequencePlay__SWIG_0)(unsigned jarg1, int jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_DynamicSequencePlay__SWIG_1)(unsigned jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_DynamicSequencePlay__SWIG_2)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_DynamicSequenceResume__SWIG_0)(unsigned jarg1, int jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_DynamicSequenceResume__SWIG_1)(unsigned jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_DynamicSequenceResume__SWIG_2)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_DynamicSequenceStop__SWIG_0)(unsigned jarg1, int jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_DynamicSequenceStop__SWIG_1)(unsigned jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_DynamicSequenceStop__SWIG_2)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_DynamicSequenceUnlockPlaylist)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_ExecuteActionOnEvent__SWIG_0)(unsigned jarg1, int jarg2, uint64_t jarg3, int jarg4, int jarg5, unsigned jarg6) = nullptr;
static int (*Actual_CSharp_ExecuteActionOnEvent__SWIG_1)(unsigned jarg1, int jarg2, uint64_t jarg3, int jarg4, int jarg5) = nullptr;
static int (*Actual_CSharp_ExecuteActionOnEvent__SWIG_2)(unsigned jarg1, int jarg2, uint64_t jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_ExecuteActionOnEvent__SWIG_3)(unsigned jarg1, int jarg2, uint64_t jarg3) = nullptr;
static int (*Actual_CSharp_ExecuteActionOnEvent__SWIG_4)(unsigned jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_ExecuteActionOnEvent__SWIG_5)(const wchar_t* jarg1, int jarg2, uint64_t jarg3, int jarg4, int jarg5, unsigned jarg6) = nullptr;
static int (*Actual_CSharp_ExecuteActionOnEvent__SWIG_6)(const wchar_t* jarg1, int jarg2, uint64_t jarg3, int jarg4, int jarg5) = nullptr;
static int (*Actual_CSharp_ExecuteActionOnEvent__SWIG_7)(const wchar_t* jarg1, int jarg2, uint64_t jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_ExecuteActionOnEvent__SWIG_8)(const wchar_t* jarg1, int jarg2, uint64_t jarg3) = nullptr;
static int (*Actual_CSharp_ExecuteActionOnEvent__SWIG_9)(const wchar_t* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_g_SpatialAudioPoolId_get)() = nullptr;
static void (*Actual_CSharp_g_SpatialAudioPoolId_set)(int jarg1) = nullptr;
static int (*Actual_CSharp_GetAudioSettings)(void* jarg1) = nullptr;
static int (*Actual_CSharp_GetBackgroundMusicMute)() = nullptr;
static int (*Actual_CSharp_GetBufferStatusForPinnedEvent__SWIG_0)(unsigned jarg1, float& jarg2, int& jarg3) = nullptr;
static int (*Actual_CSharp_GetBufferStatusForPinnedEvent__SWIG_1)(const char* jarg1, float& jarg2, int& jarg3) = nullptr;
static unsigned (*Actual_CSharp_GetBufferTick)() = nullptr;
static void* (*Actual_CSharp_GetCurrentLanguage)() = nullptr;
static int (*Actual_CSharp_GetCustomPropertyValue__SWIG_0)(unsigned jarg1, unsigned jarg2, int& jarg3) = nullptr;
static int (*Actual_CSharp_GetCustomPropertyValue__SWIG_1)(unsigned jarg1, unsigned jarg2, float& jarg3) = nullptr;
static void (*Actual_CSharp_GetDefaultDeviceSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_GetDefaultInitSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_GetDefaultMusicSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_GetDefaultPlatformInitSettings)(void* jarg1) = nullptr;
static void (*Actual_CSharp_GetDefaultStreamSettings)(void* jarg1) = nullptr;
static unsigned (*Actual_CSharp_GetDeviceIDFromName)(const wchar_t* jarg1) = nullptr;
static int (*Actual_CSharp_GetDialogueEventCustomPropertyValue__SWIG_0)(unsigned jarg1, unsigned jarg2, int& jarg3) = nullptr;
static int (*Actual_CSharp_GetDialogueEventCustomPropertyValue__SWIG_1)(unsigned jarg1, unsigned jarg2, float& jarg3) = nullptr;
static unsigned (*Actual_CSharp_GetEventIDFromPlayingID)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_GetGameObjectAuxSendValues)(uint64_t jarg1, void* jarg2, unsigned& jarg3) = nullptr;
static int (*Actual_CSharp_GetGameObjectDryLevelValue)(uint64_t jarg1, uint64_t jarg2, float& jarg3) = nullptr;
static uint64_t(*Actual_CSharp_GetGameObjectFromPlayingID)(unsigned jarg1) = nullptr;
static unsigned (*Actual_CSharp_GetIDFromString__SWIG_0)(const wchar_t* jarg1) = nullptr;
static int (*Actual_CSharp_GetIsGameObjectActive)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_GetListenerPosition)(uint64_t jarg1, void* jarg2) = nullptr;
static unsigned (*Actual_CSharp_GetMajorMinorVersion)() = nullptr;
static float (*Actual_CSharp_GetMaxRadius)(uint64_t jarg1) = nullptr;
static unsigned (*Actual_CSharp_GetNumNonZeroBits)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_GetObjectObstructionAndOcclusion)(uint64_t jarg1, uint64_t jarg2, float& jarg3, float& jarg4) = nullptr;
static uint64_t(*Actual_CSharp_GetOutputID__SWIG_0)(unsigned jarg1, unsigned jarg2) = nullptr;
static uint64_t(*Actual_CSharp_GetOutputID__SWIG_1)(const char* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_GetPanningRule__SWIG_0)(int& jarg1, uint64_t jarg2) = nullptr;
static int (*Actual_CSharp_GetPanningRule__SWIG_1)(int& jarg1) = nullptr;
static int (*Actual_CSharp_GetPlayingIDsFromGameObject)(uint64_t jarg1, unsigned& jarg2, unsigned* jarg3) = nullptr;
static int (*Actual_CSharp_GetPlayingSegmentInfo__SWIG_0)(unsigned jarg1, void* jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_GetPlayingSegmentInfo__SWIG_1)(unsigned jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_GetPoolID)() = nullptr;
static int (*Actual_CSharp_GetPosition)(uint64_t jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_GetPositioningInfo)(unsigned jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_GetRTPCValue__SWIG_0)(unsigned jarg1, uint64_t jarg2, unsigned jarg3, float& jarg4, int& jarg5) = nullptr;
static int (*Actual_CSharp_GetRTPCValue__SWIG_1)(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3, float& jarg4, int& jarg5) = nullptr;
static int (*Actual_CSharp_GetSourceMultiplePlayPositions)(unsigned jarg1, unsigned* jarg2, unsigned* jarg3, int* jarg4, unsigned& jarg5, int jarg6) = nullptr;
static int (*Actual_CSharp_GetSourcePlayPosition__SWIG_0)(unsigned jarg1, int& jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_GetSourcePlayPosition__SWIG_1)(unsigned jarg1, int& jarg2) = nullptr;
static int (*Actual_CSharp_GetSourceStreamBuffering)(unsigned jarg1, int& jarg2, int& jarg3) = nullptr;
static int (*Actual_CSharp_GetSpeakerAngles__SWIG_0)(float* jarg1, unsigned& jarg2, float& jarg3, uint64_t jarg4) = nullptr;
static int (*Actual_CSharp_GetSpeakerAngles__SWIG_1)(float* jarg1, unsigned& jarg2, float& jarg3) = nullptr;
static void* (*Actual_CSharp_GetSpeakerConfiguration__SWIG_0)(uint64_t jarg1) = nullptr;
static void* (*Actual_CSharp_GetSpeakerConfiguration__SWIG_1)() = nullptr;
static int (*Actual_CSharp_GetState__SWIG_0)(unsigned jarg1, unsigned& jarg2) = nullptr;
static int (*Actual_CSharp_GetState__SWIG_1)(const wchar_t* jarg1, unsigned& jarg2) = nullptr;
static unsigned (*Actual_CSharp_GetSubminorBuildVersion)() = nullptr;
static int (*Actual_CSharp_GetSwitch__SWIG_0)(unsigned jarg1, uint64_t jarg2, unsigned& jarg3) = nullptr;
static int (*Actual_CSharp_GetSwitch__SWIG_1)(const wchar_t* jarg1, uint64_t jarg2, unsigned& jarg3) = nullptr;
static int (*Actual_CSharp_GetTimeStamp)() = nullptr;
static void* (*Actual_CSharp_GetWindowsDeviceName)(int jarg1, unsigned& jarg2) = nullptr;
static int (*Actual_CSharp_HasHeightChannels)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_HasSideAndRearChannels)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_HasStrictlyOnePairOfSurroundChannels)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_HasSurroundChannels)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_Init)(void* jarg1, void* jarg2, void* jarg3, void* jarg4, void* jarg5, void* jarg6, void* jarg7, unsigned jarg8) = nullptr;
static int (*Actual_CSharp_IsInitialized)() = nullptr;
static float (*Actual_CSharp_kDefaultMaxPathLength_get)() = nullptr;
static int (*Actual_CSharp_LoadAndDecodeBank)(const wchar_t* jarg1, int jarg2, unsigned& jarg3) = nullptr;
static int (*Actual_CSharp_LoadAndDecodeBankFromMemory)(void* jarg1, unsigned jarg2, int jarg3, const wchar_t* jarg4, int jarg5, unsigned& jarg6) = nullptr;
static int (*Actual_CSharp_LoadBank__SWIG_0)(const wchar_t* jarg1, int jarg2, unsigned& jarg3) = nullptr;
static int (*Actual_CSharp_LoadBank__SWIG_1)(unsigned jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_LoadBank__SWIG_2)(void* jarg1, unsigned jarg2, unsigned& jarg3) = nullptr;
static int (*Actual_CSharp_LoadBank__SWIG_3)(void* jarg1, unsigned jarg2, int jarg3, unsigned& jarg4) = nullptr;
static int (*Actual_CSharp_LoadBank__SWIG_4)(const wchar_t* jarg1, void* jarg2, void* jarg3, int jarg4, unsigned& jarg5) = nullptr;
static int (*Actual_CSharp_LoadBank__SWIG_5)(unsigned jarg1, void* jarg2, void* jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_LoadBank__SWIG_6)(void* jarg1, unsigned jarg2, void* jarg3, void* jarg4, unsigned& jarg5) = nullptr;
static int (*Actual_CSharp_LoadBank__SWIG_7)(void* jarg1, unsigned jarg2, void* jarg3, void* jarg4, int jarg5, unsigned& jarg6) = nullptr;
static int (*Actual_CSharp_LoadFilePackage)(const wchar_t* jarg1, unsigned& jarg2, int jarg3) = nullptr;
static void (*Actual_CSharp_MuteBackgroundMusic)(int jarg1) = nullptr;
static void* (*Actual_CSharp_new__ArrayPoolDefault)() = nullptr;
static void* (*Actual_CSharp_new__ArrayPoolLEngineDefault)() = nullptr;
static void* (*Actual_CSharp_new__ArrayPoolSpatialAudio)() = nullptr;
static void* (*Actual_CSharp_new_AkAudioFormat)() = nullptr;
static void* (*Actual_CSharp_new_AkAudioInterruptionCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkAudioSettings)() = nullptr;
static void* (*Actual_CSharp_new_AkAudioSourceChangeCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkBankCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkCallbackSerializer)() = nullptr;
static void* (*Actual_CSharp_new_AkChannelConfig__SWIG_0)() = nullptr;
static void* (*Actual_CSharp_new_AkChannelConfig__SWIG_1)(unsigned jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_new_AkChannelEmitter)() = nullptr;
static void* (*Actual_CSharp_new_AkDeviceSettings)() = nullptr;
static void* (*Actual_CSharp_new_AkDurationCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkDynamicSequenceItemCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkEmitterSettings)() = nullptr;
static void* (*Actual_CSharp_new_AkEventCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkExternalSourceInfo__SWIG_0)() = nullptr;
static void* (*Actual_CSharp_new_AkExternalSourceInfo__SWIG_1)(void* jarg1, unsigned jarg2, unsigned jarg3, unsigned jarg4) = nullptr;
static void* (*Actual_CSharp_new_AkExternalSourceInfo__SWIG_2)(const wchar_t* jarg1, unsigned jarg2, unsigned jarg3) = nullptr;
static void* (*Actual_CSharp_new_AkExternalSourceInfo__SWIG_3)(unsigned jarg1, unsigned jarg2, unsigned jarg3) = nullptr;
static void* (*Actual_CSharp_new_AkImageSourceParams__SWIG_0)() = nullptr;
static void* (*Actual_CSharp_new_AkImageSourceParams__SWIG_1)(void* jarg1, float jarg2, float jarg3) = nullptr;
static void* (*Actual_CSharp_new_AkImageSourceSettings__SWIG_0)() = nullptr;
static void* (*Actual_CSharp_new_AkImageSourceSettings__SWIG_1)(void* jarg1, float jarg2, float jarg3) = nullptr;
static void* (*Actual_CSharp_new_AkInitSettings)() = nullptr;
static void* (*Actual_CSharp_new_AkIterator)() = nullptr;
static void* (*Actual_CSharp_new_AkMarkerCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkMemSettings)() = nullptr;
static void* (*Actual_CSharp_new_AkMIDIEvent)() = nullptr;
static void* (*Actual_CSharp_new_AkMIDIEvent_tCc)() = nullptr;
static void* (*Actual_CSharp_new_AkMIDIEvent_tChanAftertouch)() = nullptr;
static void* (*Actual_CSharp_new_AkMIDIEvent_tGen)() = nullptr;
static void* (*Actual_CSharp_new_AkMIDIEvent_tNoteAftertouch)() = nullptr;
static void* (*Actual_CSharp_new_AkMIDIEvent_tNoteOnOff)() = nullptr;
static void* (*Actual_CSharp_new_AkMIDIEvent_tPitchBend)() = nullptr;
static void* (*Actual_CSharp_new_AkMIDIEvent_tProgramChange)() = nullptr;
static void* (*Actual_CSharp_new_AkMIDIEventCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkMIDIPost)() = nullptr;
static void* (*Actual_CSharp_new_AkMonitoringCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkMusicPlaylistCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkMusicSettings)() = nullptr;
static void* (*Actual_CSharp_new_AkMusicSyncCallbackInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkObjectInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkObstructionOcclusionValues)() = nullptr;
static void* (*Actual_CSharp_new_AkOutputSettings__SWIG_0)() = nullptr;
static void* (*Actual_CSharp_new_AkOutputSettings__SWIG_1)(const char* jarg1, unsigned jarg2, void* jarg3, int jarg4) = nullptr;
static void* (*Actual_CSharp_new_AkOutputSettings__SWIG_2)(const char* jarg1, unsigned jarg2, void* jarg3) = nullptr;
static void* (*Actual_CSharp_new_AkOutputSettings__SWIG_3)(const char* jarg1, unsigned jarg2) = nullptr;
static void* (*Actual_CSharp_new_AkOutputSettings__SWIG_4)(const char* jarg1) = nullptr;
static void* (*Actual_CSharp_new_AkPlatformInitSettings)() = nullptr;
static void* (*Actual_CSharp_new_AkPlaylist)() = nullptr;
static void* (*Actual_CSharp_new_AkPlaylistArray)() = nullptr;
static void* (*Actual_CSharp_new_AkPlaylistItem__SWIG_0)() = nullptr;
static void* (*Actual_CSharp_new_AkPlaylistItem__SWIG_1)(void* jarg1) = nullptr;
static void* (*Actual_CSharp_new_AkPositioningInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkPropagationPathInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkPropagationPathInfoProxy)() = nullptr;
static void* (*Actual_CSharp_new_AkRamp__SWIG_0)() = nullptr;
static void* (*Actual_CSharp_new_AkRamp__SWIG_1)(float jarg1, float jarg2) = nullptr;
static void* (*Actual_CSharp_new_AkRoomParams)() = nullptr;
static void* (*Actual_CSharp_new_AkSegmentInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkSerializedCallbackHeader)() = nullptr;
static void* (*Actual_CSharp_new_AkSoundPathInfo)() = nullptr;
static void* (*Actual_CSharp_new_AkSoundPathInfoProxy)() = nullptr;
static void* (*Actual_CSharp_new_AkSoundPropagationPathParams)() = nullptr;
static void* (*Actual_CSharp_new_AkSourceSettings)() = nullptr;
static void* (*Actual_CSharp_new_AkSpatialAudioInitSettings)() = nullptr;
static void* (*Actual_CSharp_new_AkStreamMgrSettings)() = nullptr;
static void* (*Actual_CSharp_new_AkThreadProperties)() = nullptr;
static void* (*Actual_CSharp_new_AkTransform)() = nullptr;
static void* (*Actual_CSharp_new_AkTriangle)() = nullptr;
static void* (*Actual_CSharp_new_AkTriangleProxy)() = nullptr;
static void* (*Actual_CSharp_new_AkVector)() = nullptr;
static int (*Actual_CSharp_PinEventInStreamCache__SWIG_0)(unsigned jarg1, wchar_t jarg2, wchar_t jarg3) = nullptr;
static int (*Actual_CSharp_PinEventInStreamCache__SWIG_1)(const wchar_t* jarg1, wchar_t jarg2, wchar_t jarg3) = nullptr;
static int (*Actual_CSharp_PostCode__SWIG_0)(int jarg1, int jarg2, unsigned jarg3, uint64_t jarg4, unsigned jarg5, int jarg6) = nullptr;
static int (*Actual_CSharp_PostCode__SWIG_1)(int jarg1, int jarg2, unsigned jarg3, uint64_t jarg4, unsigned jarg5) = nullptr;
static int (*Actual_CSharp_PostCode__SWIG_2)(int jarg1, int jarg2, unsigned jarg3, uint64_t jarg4) = nullptr;
static int (*Actual_CSharp_PostCode__SWIG_3)(int jarg1, int jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_PostCode__SWIG_4)(int jarg1, int jarg2) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_0)(unsigned jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6, void* jarg7, unsigned jarg8) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_1)(unsigned jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6, void* jarg7) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_10)(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_11)(const wchar_t* jarg1, uint64_t jarg2) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_2)(unsigned jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_3)(unsigned jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_4)(unsigned jarg1, uint64_t jarg2, unsigned jarg3) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_5)(unsigned jarg1, uint64_t jarg2) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_6)(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6, void* jarg7, unsigned jarg8) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_7)(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6, void* jarg7) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_8)(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6) = nullptr;
static unsigned (*Actual_CSharp_PostEvent__SWIG_9)(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5) = nullptr;
static int (*Actual_CSharp_PostMIDIOnEvent)(unsigned jarg1, uint64_t jarg2, void* jarg3, uint16_t jarg4) = nullptr;
static int (*Actual_CSharp_PostString__SWIG_0)(const wchar_t* jarg1, int jarg2, unsigned jarg3, uint64_t jarg4, unsigned jarg5, int jarg6) = nullptr;
static int (*Actual_CSharp_PostString__SWIG_1)(const wchar_t* jarg1, int jarg2, unsigned jarg3, uint64_t jarg4, unsigned jarg5) = nullptr;
static int (*Actual_CSharp_PostString__SWIG_2)(const wchar_t* jarg1, int jarg2, unsigned jarg3, uint64_t jarg4) = nullptr;
static int (*Actual_CSharp_PostString__SWIG_3)(const wchar_t* jarg1, int jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_PostString__SWIG_4)(const wchar_t* jarg1, int jarg2) = nullptr;
static int (*Actual_CSharp_PostTrigger__SWIG_0)(unsigned jarg1, uint64_t jarg2) = nullptr;
static int (*Actual_CSharp_PostTrigger__SWIG_1)(const wchar_t* jarg1, uint64_t jarg2) = nullptr;
static int (*Actual_CSharp_PrepareBank__SWIG_0)(int jarg1, const wchar_t* jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_PrepareBank__SWIG_1)(int jarg1, const wchar_t* jarg2) = nullptr;
static int (*Actual_CSharp_PrepareBank__SWIG_10)(int jarg1, unsigned jarg2, void* jarg3, void* jarg4, int jarg5) = nullptr;
static int (*Actual_CSharp_PrepareBank__SWIG_11)(int jarg1, unsigned jarg2, void* jarg3, void* jarg4) = nullptr;
static int (*Actual_CSharp_PrepareBank__SWIG_4)(int jarg1, unsigned jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_PrepareBank__SWIG_5)(int jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_PrepareBank__SWIG_6)(int jarg1, const wchar_t* jarg2, void* jarg3, void* jarg4, int jarg5) = nullptr;
static int (*Actual_CSharp_PrepareBank__SWIG_7)(int jarg1, const wchar_t* jarg2, void* jarg3, void* jarg4) = nullptr;
static int (*Actual_CSharp_PrepareEvent__SWIG_0)(int jarg1, void* jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_PrepareEvent__SWIG_1)(int jarg1, unsigned* jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_PrepareEvent__SWIG_2)(int jarg1, void* jarg2, unsigned jarg3, void* jarg4, void* jarg5) = nullptr;
static int (*Actual_CSharp_PrepareEvent__SWIG_3)(int jarg1, unsigned* jarg2, unsigned jarg3, void* jarg4, void* jarg5) = nullptr;
static int (*Actual_CSharp_PrepareGameSyncs__SWIG_0)(int jarg1, int jarg2, const wchar_t* jarg3, void* jarg4, unsigned jarg5) = nullptr;
static int (*Actual_CSharp_PrepareGameSyncs__SWIG_1)(int jarg1, int jarg2, unsigned jarg3, unsigned* jarg4, unsigned jarg5) = nullptr;
static int (*Actual_CSharp_PrepareGameSyncs__SWIG_2)(int jarg1, int jarg2, const wchar_t* jarg3, void* jarg4, unsigned jarg5, void* jarg6, void* jarg7) = nullptr;
static int (*Actual_CSharp_PrepareGameSyncs__SWIG_3)(int jarg1, int jarg2, unsigned jarg3, unsigned* jarg4, unsigned jarg5, void* jarg6, void* jarg7) = nullptr;
static int (*Actual_CSharp_QueryAudioObjectIDs__SWIG_0)(unsigned jarg1, unsigned& jarg2, void* jarg3) = nullptr;
static int (*Actual_CSharp_QueryAudioObjectIDs__SWIG_1)(const wchar_t* jarg1, unsigned& jarg2, void* jarg3) = nullptr;
static int (*Actual_CSharp_QueryIndirectPaths)(uint64_t jarg1, void* jarg2, void* jarg3, unsigned jarg4) = nullptr;
static int (*Actual_CSharp_QuerySoundPropagationPaths)(uint64_t jarg1, void* jarg2, void* jarg3, unsigned jarg4) = nullptr;
static int (*Actual_CSharp_RegisterEmitter)(uint64_t jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_RegisterGameObjInternal)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_RegisterGameObjInternal_WithName)(uint64_t jarg1, const wchar_t* jarg2) = nullptr;
static int (*Actual_CSharp_RegisterPluginDLL)(const wchar_t* jarg1) = nullptr;
static int (*Actual_CSharp_RegisterSpatialAudioListener)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_RemoveDefaultListener)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_RemoveGeometry)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_RemoveImageSource__SWIG_0)(unsigned jarg1, unsigned jarg2, uint64_t jarg3) = nullptr;
static int (*Actual_CSharp_RemoveImageSource__SWIG_1)(unsigned jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_RemoveListener)(uint64_t jarg1, uint64_t jarg2) = nullptr;
static int (*Actual_CSharp_RemoveOutput)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_RemovePortal)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_RemoveRoom)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_RenderAudio__SWIG_0)(int jarg1) = nullptr;
static int (*Actual_CSharp_RenderAudio__SWIG_1)() = nullptr;
static int (*Actual_CSharp_ResetListenersToDefault)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_ResetRTPCValue__SWIG_0)(unsigned jarg1, uint64_t jarg2, int jarg3, int jarg4, int jarg5) = nullptr;
static int (*Actual_CSharp_ResetRTPCValue__SWIG_1)(unsigned jarg1, uint64_t jarg2, int jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_ResetRTPCValue__SWIG_2)(unsigned jarg1, uint64_t jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_ResetRTPCValue__SWIG_3)(unsigned jarg1, uint64_t jarg2) = nullptr;
static int (*Actual_CSharp_ResetRTPCValue__SWIG_4)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_ResetRTPCValue__SWIG_5)(const wchar_t* jarg1, uint64_t jarg2, int jarg3, int jarg4, int jarg5) = nullptr;
static int (*Actual_CSharp_ResetRTPCValue__SWIG_6)(const wchar_t* jarg1, uint64_t jarg2, int jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_ResetRTPCValue__SWIG_7)(const wchar_t* jarg1, uint64_t jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_ResetRTPCValue__SWIG_8)(const wchar_t* jarg1, uint64_t jarg2) = nullptr;
static int (*Actual_CSharp_ResetRTPCValue__SWIG_9)(const wchar_t* jarg1) = nullptr;
static unsigned (*Actual_CSharp_ResolveDialogueEvent__SWIG_0)(unsigned jarg1, unsigned* jarg2, unsigned jarg3, unsigned jarg4) = nullptr;
static unsigned (*Actual_CSharp_ResolveDialogueEvent__SWIG_1)(unsigned jarg1, unsigned* jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_0)(unsigned jarg1, uint64_t jarg2, int jarg3, int jarg4, unsigned jarg5) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_1)(unsigned jarg1, uint64_t jarg2, int jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_10)(unsigned jarg1, uint64_t jarg2, float jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_11)(unsigned jarg1, uint64_t jarg2, float jarg3) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_12)(const wchar_t* jarg1, uint64_t jarg2, float jarg3, int jarg4, unsigned jarg5) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_13)(const wchar_t* jarg1, uint64_t jarg2, float jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_14)(const wchar_t* jarg1, uint64_t jarg2, float jarg3) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_2)(unsigned jarg1, uint64_t jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_3)(const wchar_t* jarg1, uint64_t jarg2, int jarg3, int jarg4, unsigned jarg5) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_4)(const wchar_t* jarg1, uint64_t jarg2, int jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_5)(const wchar_t* jarg1, uint64_t jarg2, int jarg3) = nullptr;
static int (*Actual_CSharp_SeekOnEvent__SWIG_9)(unsigned jarg1, uint64_t jarg2, float jarg3, int jarg4, unsigned jarg5) = nullptr;
static int (*Actual_CSharp_SendPluginCustomGameData)(unsigned jarg1, uint64_t jarg2, int jarg3, unsigned jarg4, unsigned jarg5, void* jarg6, unsigned jarg7) = nullptr;
static int (*Actual_CSharp_SetActorMixerEffect)(unsigned jarg1, unsigned jarg2, unsigned jarg3) = nullptr;
static void (*Actual_CSharp_SetAudioInputCallbacks)(void* (*jarg1)(), void* (*jarg2)()) = nullptr;
static int (*Actual_CSharp_SetBankLoadIOSettings)(float jarg1, wchar_t jarg2) = nullptr;
static int (*Actual_CSharp_SetBasePath)(const wchar_t* jarg1) = nullptr;
static int (*Actual_CSharp_SetBusConfig__SWIG_0)(unsigned jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_SetBusConfig__SWIG_1)(const wchar_t* jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_SetBusDevice__SWIG_0)(unsigned jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_SetBusDevice__SWIG_1)(const char* jarg1, const char* jarg2) = nullptr;
static int (*Actual_CSharp_SetBusEffect__SWIG_0)(unsigned jarg1, unsigned jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_SetBusEffect__SWIG_1)(const wchar_t* jarg1, unsigned jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_SetCurrentLanguage)(const wchar_t* jarg1) = nullptr;
static int (*Actual_CSharp_SetDecodedBankPath)(const wchar_t* jarg1) = nullptr;
static int (*Actual_CSharp_SetDefaultListeners)(uint64_t* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_SetEmitterAuxSendValues)(uint64_t jarg1, void* jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_SetEmitterObstruction)(uint64_t jarg1, float jarg2) = nullptr;
static void (*Actual_CSharp_SetErrorLogger__SWIG_0)(void* (*jarg1)()) = nullptr;
static void (*Actual_CSharp_SetErrorLogger__SWIG_1)() = nullptr;
static int (*Actual_CSharp_SetGameName)(const wchar_t* jarg1) = nullptr;
static int (*Actual_CSharp_SetGameObjectAuxSendValues)(uint64_t jarg1, void* jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_SetGameObjectInRoom)(uint64_t jarg1, uint64_t jarg2) = nullptr;
static int (*Actual_CSharp_SetGameObjectOutputBusVolume)(uint64_t jarg1, uint64_t jarg2, float jarg3) = nullptr;
static int (*Actual_CSharp_SetGeometry)(uint64_t jarg1, void* jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_SetImageSource__SWIG_0)(unsigned jarg1, void* jarg2, unsigned jarg3, uint64_t jarg4, uint64_t jarg5) = nullptr;
static int (*Actual_CSharp_SetImageSource__SWIG_1)(unsigned jarg1, void* jarg2, unsigned jarg3, uint64_t jarg4) = nullptr;
static int (*Actual_CSharp_SetListeners)(uint64_t jarg1, uint64_t* jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_SetListenerSpatialization__SWIG_0)(uint64_t jarg1, int jarg2, void* jarg3, float* jarg4) = nullptr;
static int (*Actual_CSharp_SetListenerSpatialization__SWIG_1)(uint64_t jarg1, int jarg2, void* jarg3) = nullptr;
static int (*Actual_CSharp_SetMaxNumVoicesLimit)(uint16_t jarg1) = nullptr;
static int (*Actual_CSharp_SetMedia)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_SetMixer__SWIG_0)(unsigned jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_SetMixer__SWIG_1)(const wchar_t* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_SetMultipleObstructionAndOcclusion)(uint64_t jarg1, uint64_t jarg2, void* jarg3, unsigned jarg4) = nullptr;
static int (*Actual_CSharp_SetMultiplePositions__SWIG_0)(uint64_t jarg1, void* jarg2, uint16_t jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_SetMultiplePositions__SWIG_1)(uint64_t jarg1, void* jarg2, uint16_t jarg3) = nullptr;
static int (*Actual_CSharp_SetMultiplePositions__SWIG_2)(uint64_t jarg1, void* jarg2, uint16_t jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_SetMultiplePositions__SWIG_3)(uint64_t jarg1, void* jarg2, uint16_t jarg3) = nullptr;
static int (*Actual_CSharp_SetObjectObstructionAndOcclusion)(uint64_t jarg1, uint64_t jarg2, float jarg3, float jarg4) = nullptr;
static int (*Actual_CSharp_SetObjectPosition)(uint64_t jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7, float jarg8, float jarg9, float jarg10) = nullptr;
static int (*Actual_CSharp_SetOutputVolume)(uint64_t jarg1, float jarg2) = nullptr;
static int (*Actual_CSharp_SetPanningRule__SWIG_0)(int jarg1, uint64_t jarg2) = nullptr;
static int (*Actual_CSharp_SetPanningRule__SWIG_1)(int jarg1) = nullptr;
static int (*Actual_CSharp_SetPortalObstruction)(uint64_t jarg1, float jarg2) = nullptr;
static void (*Actual_CSharp_SetRandomSeed)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_SetRoom)(uint64_t jarg1, void* jarg2, const char* jarg3) = nullptr;
static int (*Actual_CSharp_SetRoomPortal)(uint64_t jarg1, void* jarg2, void* jarg3, int jarg4, uint64_t jarg5, uint64_t jarg6) = nullptr;
static int (*Actual_CSharp_SetRTPCValue__SWIG_0)(unsigned jarg1, float jarg2, uint64_t jarg3, int jarg4, int jarg5, int jarg6) = nullptr;
static int (*Actual_CSharp_SetRTPCValue__SWIG_1)(unsigned jarg1, float jarg2, uint64_t jarg3, int jarg4, int jarg5) = nullptr;
static int (*Actual_CSharp_SetRTPCValue__SWIG_2)(unsigned jarg1, float jarg2, uint64_t jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_SetRTPCValue__SWIG_3)(unsigned jarg1, float jarg2, uint64_t jarg3) = nullptr;
static int (*Actual_CSharp_SetRTPCValue__SWIG_4)(unsigned jarg1, float jarg2) = nullptr;
static int (*Actual_CSharp_SetRTPCValue__SWIG_5)(const wchar_t* jarg1, float jarg2, uint64_t jarg3, int jarg4, int jarg5, int jarg6) = nullptr;
static int (*Actual_CSharp_SetRTPCValue__SWIG_6)(const wchar_t* jarg1, float jarg2, uint64_t jarg3, int jarg4, int jarg5) = nullptr;
static int (*Actual_CSharp_SetRTPCValue__SWIG_7)(const wchar_t* jarg1, float jarg2, uint64_t jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_SetRTPCValue__SWIG_8)(const wchar_t* jarg1, float jarg2, uint64_t jarg3) = nullptr;
static int (*Actual_CSharp_SetRTPCValue__SWIG_9)(const wchar_t* jarg1, float jarg2) = nullptr;
static int (*Actual_CSharp_SetRTPCValueByPlayingID__SWIG_0)(unsigned jarg1, float jarg2, unsigned jarg3, int jarg4, int jarg5, int jarg6) = nullptr;
static int (*Actual_CSharp_SetRTPCValueByPlayingID__SWIG_1)(unsigned jarg1, float jarg2, unsigned jarg3, int jarg4, int jarg5) = nullptr;
static int (*Actual_CSharp_SetRTPCValueByPlayingID__SWIG_2)(unsigned jarg1, float jarg2, unsigned jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_SetRTPCValueByPlayingID__SWIG_3)(unsigned jarg1, float jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_SetRTPCValueByPlayingID__SWIG_4)(const wchar_t* jarg1, float jarg2, unsigned jarg3, int jarg4, int jarg5, int jarg6) = nullptr;
static int (*Actual_CSharp_SetRTPCValueByPlayingID__SWIG_5)(const wchar_t* jarg1, float jarg2, unsigned jarg3, int jarg4, int jarg5) = nullptr;
static int (*Actual_CSharp_SetRTPCValueByPlayingID__SWIG_6)(const wchar_t* jarg1, float jarg2, unsigned jarg3, int jarg4) = nullptr;
static int (*Actual_CSharp_SetRTPCValueByPlayingID__SWIG_7)(const wchar_t* jarg1, float jarg2, unsigned jarg3) = nullptr;
static int (*Actual_CSharp_SetScalingFactor)(uint64_t jarg1, float jarg2) = nullptr;
static int (*Actual_CSharp_SetSpeakerAngles__SWIG_0)(float* jarg1, unsigned jarg2, float jarg3, uint64_t jarg4) = nullptr;
static int (*Actual_CSharp_SetSpeakerAngles__SWIG_1)(float* jarg1, unsigned jarg2, float jarg3) = nullptr;
static int (*Actual_CSharp_SetState__SWIG_0)(unsigned jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_SetState__SWIG_1)(const wchar_t* jarg1, const wchar_t* jarg2) = nullptr;
static int (*Actual_CSharp_SetSwitch__SWIG_0)(unsigned jarg1, unsigned jarg2, uint64_t jarg3) = nullptr;
static int (*Actual_CSharp_SetSwitch__SWIG_1)(const wchar_t* jarg1, const wchar_t* jarg2, uint64_t jarg3) = nullptr;
static int (*Actual_CSharp_SetVolumeThreshold)(float jarg1) = nullptr;
static int (*Actual_CSharp_StartOutputCapture)(const wchar_t* jarg1) = nullptr;
static int (*Actual_CSharp_StartProfilerCapture)(const wchar_t* jarg1) = nullptr;
static unsigned (*Actual_CSharp_StdChannelIndexToDisplayIndex)(int jarg1, unsigned jarg2, unsigned jarg3) = nullptr;
static void (*Actual_CSharp_StopAll__SWIG_0)(uint64_t jarg1) = nullptr;
static void (*Actual_CSharp_StopAll__SWIG_1)() = nullptr;
static int (*Actual_CSharp_StopMIDIOnEvent__SWIG_0)(unsigned jarg1, uint64_t jarg2) = nullptr;
static int (*Actual_CSharp_StopMIDIOnEvent__SWIG_1)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_StopMIDIOnEvent__SWIG_2)() = nullptr;
static int (*Actual_CSharp_StopOutputCapture)() = nullptr;
static void (*Actual_CSharp_StopPlayingID__SWIG_0)(unsigned jarg1, int jarg2, int jarg3) = nullptr;
static void (*Actual_CSharp_StopPlayingID__SWIG_1)(unsigned jarg1, int jarg2) = nullptr;
static void (*Actual_CSharp_StopPlayingID__SWIG_2)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_StopProfilerCapture)() = nullptr;
static int (*Actual_CSharp_Suspend__SWIG_0)(int jarg1) = nullptr;
static int (*Actual_CSharp_Suspend__SWIG_1)() = nullptr;
static void (*Actual_CSharp_Term)() = nullptr;
static int (*Actual_CSharp_UnloadAllFilePackages)() = nullptr;
static int (*Actual_CSharp_UnloadBank__SWIG_0)(const wchar_t* jarg1, void* jarg2, int& jarg3) = nullptr;
static int (*Actual_CSharp_UnloadBank__SWIG_1)(const wchar_t* jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_UnloadBank__SWIG_4)(unsigned jarg1, void* jarg2, int& jarg3) = nullptr;
static int (*Actual_CSharp_UnloadBank__SWIG_5)(unsigned jarg1, void* jarg2) = nullptr;
static int (*Actual_CSharp_UnloadBank__SWIG_6)(const wchar_t* jarg1, void* jarg2, void* jarg3, void* jarg4) = nullptr;
static int (*Actual_CSharp_UnloadBank__SWIG_8)(unsigned jarg1, void* jarg2, void* jarg3, void* jarg4) = nullptr;
static int (*Actual_CSharp_UnloadFilePackage)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_UnpinEventInStreamCache__SWIG_0)(unsigned jarg1) = nullptr;
static int (*Actual_CSharp_UnpinEventInStreamCache__SWIG_1)(const wchar_t* jarg1) = nullptr;
static int (*Actual_CSharp_UnregisterAllGameObj)() = nullptr;
static int (*Actual_CSharp_UnregisterEmitter)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_UnregisterGameObjInternal)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_UnregisterSpatialAudioListener)(uint64_t jarg1) = nullptr;
static int (*Actual_CSharp_UnsetMedia)(void* jarg1, unsigned jarg2) = nullptr;
static int (*Actual_CSharp_WakeupFromSuspend)() = nullptr;


extern "C"
{

int Proxy_CSharp__ArrayPoolDefault_Get()
{
  return Actual_CSharp__ArrayPoolDefault_Get();
}
int Proxy_CSharp__ArrayPoolLEngineDefault_Get()
{
  return Actual_CSharp__ArrayPoolLEngineDefault_Get();
}
int Proxy_CSharp__ArrayPoolSpatialAudio_Get()
{
  return Actual_CSharp__ArrayPoolSpatialAudio_Get();
}
int Proxy_CSharp_AddBasePath(const wchar_t* jarg1)
{
  return Actual_CSharp_AddBasePath(jarg1);
}
int Proxy_CSharp_AddDefaultListener(uint64_t jarg1)
{
  return Actual_CSharp_AddDefaultListener(jarg1);
}
int Proxy_CSharp_AddListener(uint64_t jarg1, uint64_t jarg2)
{
  return Actual_CSharp_AddListener(jarg1, jarg2);
}
int Proxy_CSharp_AddOutput(void* jarg1, uint64_t& jarg2, uint64_t* jarg3, unsigned jarg4)
{
  return Actual_CSharp_AddOutput(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_AddOutputCaptureMarker(const char* jarg1)
{
  return Actual_CSharp_AddOutputCaptureMarker(jarg1);
}
uint16_t Proxy_CSharp_AK_FLOAT_get()
{
  return Actual_CSharp_AK_FLOAT_get();
}
uint16_t Proxy_CSharp_AK_INT_get()
{
  return Actual_CSharp_AK_INT_get();
}
uint8_t Proxy_CSharp_AK_INTERLEAVED_get()
{
  return Actual_CSharp_AK_INTERLEAVED_get();
}
uint8_t Proxy_CSharp_AK_INVALID_MIDI_CHANNEL_get()
{
  return Actual_CSharp_AK_INVALID_MIDI_CHANNEL_get();
}
uint8_t Proxy_CSharp_AK_INVALID_MIDI_NOTE_get()
{
  return Actual_CSharp_AK_INVALID_MIDI_NOTE_get();
}
unsigned Proxy_CSharp_AK_LE_NATIVE_BITSPERSAMPLE_get()
{
  return Actual_CSharp_AK_LE_NATIVE_BITSPERSAMPLE_get();
}
unsigned Proxy_CSharp_AK_LE_NATIVE_INTERLEAVE_get()
{
  return Actual_CSharp_AK_LE_NATIVE_INTERLEAVE_get();
}
unsigned Proxy_CSharp_AK_LE_NATIVE_SAMPLETYPE_get()
{
  return Actual_CSharp_AK_LE_NATIVE_SAMPLETYPE_get();
}
uint8_t Proxy_CSharp_AK_NONINTERLEAVED_get()
{
  return Actual_CSharp_AK_NONINTERLEAVED_get();
}
unsigned Proxy_CSharp_AK_SOUNDBANK_VERSION_get()
{
  return Actual_CSharp_AK_SOUNDBANK_VERSION_get();
}
void Proxy_CSharp_AK_SPEAKER_SETUP_CONVERT_TO_SUPPORTED(unsigned& jarg1)
{
  Actual_CSharp_AK_SPEAKER_SETUP_CONVERT_TO_SUPPORTED(jarg1);
}
void Proxy_CSharp_AK_SPEAKER_SETUP_FIX_LEFT_TO_CENTER(unsigned& jarg1)
{
  Actual_CSharp_AK_SPEAKER_SETUP_FIX_LEFT_TO_CENTER(jarg1);
}
void Proxy_CSharp_AK_SPEAKER_SETUP_FIX_REAR_TO_SIDE(unsigned& jarg1)
{
  Actual_CSharp_AK_SPEAKER_SETUP_FIX_REAR_TO_SIDE(jarg1);
}
void* Proxy_CSharp_AkAudioFormat_channelConfig_get(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_channelConfig_get(jarg1);
}
void Proxy_CSharp_AkAudioFormat_channelConfig_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkAudioFormat_channelConfig_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkAudioFormat_GetBitsPerSample(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_GetBitsPerSample(jarg1);
}
unsigned Proxy_CSharp_AkAudioFormat_GetBlockAlign(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_GetBlockAlign(jarg1);
}
unsigned Proxy_CSharp_AkAudioFormat_GetInterleaveID(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_GetInterleaveID(jarg1);
}
unsigned Proxy_CSharp_AkAudioFormat_GetNumChannels(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_GetNumChannels(jarg1);
}
unsigned Proxy_CSharp_AkAudioFormat_GetTypeID(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_GetTypeID(jarg1);
}
int Proxy_CSharp_AkAudioFormat_IsChannelConfigSupported(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_IsChannelConfigSupported(jarg1);
}
void Proxy_CSharp_AkAudioFormat_SetAll(void* jarg1, unsigned jarg2, void* jarg3, unsigned jarg4, unsigned jarg5, unsigned jarg6, unsigned jarg7)
{
  Actual_CSharp_AkAudioFormat_SetAll(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
}
unsigned Proxy_CSharp_AkAudioFormat_uBitsPerSample_get(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_uBitsPerSample_get(jarg1);
}
void Proxy_CSharp_AkAudioFormat_uBitsPerSample_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkAudioFormat_uBitsPerSample_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkAudioFormat_uBlockAlign_get(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_uBlockAlign_get(jarg1);
}
void Proxy_CSharp_AkAudioFormat_uBlockAlign_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkAudioFormat_uBlockAlign_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkAudioFormat_uInterleaveID_get(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_uInterleaveID_get(jarg1);
}
void Proxy_CSharp_AkAudioFormat_uInterleaveID_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkAudioFormat_uInterleaveID_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkAudioFormat_uSampleRate_get(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_uSampleRate_get(jarg1);
}
void Proxy_CSharp_AkAudioFormat_uSampleRate_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkAudioFormat_uSampleRate_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkAudioFormat_uTypeID_get(void* jarg1)
{
  return Actual_CSharp_AkAudioFormat_uTypeID_get(jarg1);
}
void Proxy_CSharp_AkAudioFormat_uTypeID_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkAudioFormat_uTypeID_set(jarg1, jarg2);
}
int Proxy_CSharp_AkAudioInterruptionCallbackInfo_bEnterInterruption_get(void* jarg1)
{
  return Actual_CSharp_AkAudioInterruptionCallbackInfo_bEnterInterruption_get(jarg1);
}
unsigned Proxy_CSharp_AkAudioSettings_uNumSamplesPerFrame_get(void* jarg1)
{
  return Actual_CSharp_AkAudioSettings_uNumSamplesPerFrame_get(jarg1);
}
void Proxy_CSharp_AkAudioSettings_uNumSamplesPerFrame_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkAudioSettings_uNumSamplesPerFrame_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkAudioSettings_uNumSamplesPerSecond_get(void* jarg1)
{
  return Actual_CSharp_AkAudioSettings_uNumSamplesPerSecond_get(jarg1);
}
void Proxy_CSharp_AkAudioSettings_uNumSamplesPerSecond_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkAudioSettings_uNumSamplesPerSecond_set(jarg1, jarg2);
}
int Proxy_CSharp_AkAudioSourceChangeCallbackInfo_bOtherAudioPlaying_get(void* jarg1)
{
  return Actual_CSharp_AkAudioSourceChangeCallbackInfo_bOtherAudioPlaying_get(jarg1);
}
unsigned Proxy_CSharp_AkAuxSendValue_auxBusID_get(void* jarg1)
{
  return Actual_CSharp_AkAuxSendValue_auxBusID_get(jarg1);
}
void Proxy_CSharp_AkAuxSendValue_auxBusID_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkAuxSendValue_auxBusID_set(jarg1, jarg2);
}
float Proxy_CSharp_AkAuxSendValue_fControlValue_get(void* jarg1)
{
  return Actual_CSharp_AkAuxSendValue_fControlValue_get(jarg1);
}
void Proxy_CSharp_AkAuxSendValue_fControlValue_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkAuxSendValue_fControlValue_set(jarg1, jarg2);
}
int Proxy_CSharp_AkAuxSendValue_GetGameObjectAuxSendValues(void* jarg1, uint64_t jarg2, unsigned& jarg3)
{
  return Actual_CSharp_AkAuxSendValue_GetGameObjectAuxSendValues(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_AkAuxSendValue_GetSizeOf()
{
  return Actual_CSharp_AkAuxSendValue_GetSizeOf();
}
int Proxy_CSharp_AkAuxSendValue_IsSame(void* jarg1, uint64_t jarg2, unsigned jarg3)
{
  return Actual_CSharp_AkAuxSendValue_IsSame(jarg1, jarg2, jarg3);
}
uint64_t Proxy_CSharp_AkAuxSendValue_listenerID_get(void* jarg1)
{
  return Actual_CSharp_AkAuxSendValue_listenerID_get(jarg1);
}
void Proxy_CSharp_AkAuxSendValue_listenerID_set(void* jarg1, uint64_t jarg2)
{
  Actual_CSharp_AkAuxSendValue_listenerID_set(jarg1, jarg2);
}
void Proxy_CSharp_AkAuxSendValue_Set(void* jarg1, uint64_t jarg2, unsigned jarg3, float jarg4)
{
  Actual_CSharp_AkAuxSendValue_Set(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_AkAuxSendValue_SetGameObjectAuxSendValues(void* jarg1, uint64_t jarg2, unsigned jarg3)
{
  return Actual_CSharp_AkAuxSendValue_SetGameObjectAuxSendValues(jarg1, jarg2, jarg3);
}
unsigned Proxy_CSharp_AkBankCallbackInfo_bankID_get(void* jarg1)
{
  return Actual_CSharp_AkBankCallbackInfo_bankID_get(jarg1);
}
void* Proxy_CSharp_AkBankCallbackInfo_inMemoryBankPtr_get(void* jarg1)
{
  return Actual_CSharp_AkBankCallbackInfo_inMemoryBankPtr_get(jarg1);
}
int Proxy_CSharp_AkBankCallbackInfo_loadResult_get(void* jarg1)
{
  return Actual_CSharp_AkBankCallbackInfo_loadResult_get(jarg1);
}
int Proxy_CSharp_AkBankCallbackInfo_memPoolId_get(void* jarg1)
{
  return Actual_CSharp_AkBankCallbackInfo_memPoolId_get(jarg1);
}
uint64_t Proxy_CSharp_AkCallbackInfo_gameObjID_get(void* jarg1)
{
  return Actual_CSharp_AkCallbackInfo_gameObjID_get(jarg1);
}
void* Proxy_CSharp_AkCallbackInfo_pCookie_get(void* jarg1)
{
  return Actual_CSharp_AkCallbackInfo_pCookie_get(jarg1);
}
int Proxy_CSharp_AkCallbackSerializer_AudioSourceChangeCallbackFunc(int jarg1, void* jarg2)
{
  return Actual_CSharp_AkCallbackSerializer_AudioSourceChangeCallbackFunc(jarg1, jarg2);
}
int Proxy_CSharp_AkCallbackSerializer_Init(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_AkCallbackSerializer_Init(jarg1, jarg2);
}
void* Proxy_CSharp_AkCallbackSerializer_Lock()
{
  return Actual_CSharp_AkCallbackSerializer_Lock();
}
void Proxy_CSharp_AkCallbackSerializer_SetLocalOutput(unsigned jarg1)
{
  Actual_CSharp_AkCallbackSerializer_SetLocalOutput(jarg1);
}
void Proxy_CSharp_AkCallbackSerializer_Term()
{
  Actual_CSharp_AkCallbackSerializer_Term();
}
void Proxy_CSharp_AkCallbackSerializer_Unlock()
{
  Actual_CSharp_AkCallbackSerializer_Unlock();
}
void Proxy_CSharp_AkChannelConfig_Clear(void* jarg1)
{
  Actual_CSharp_AkChannelConfig_Clear(jarg1);
}
void Proxy_CSharp_AkChannelConfig_Deserialize(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkChannelConfig_Deserialize(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkChannelConfig_eConfigType_get(void* jarg1)
{
  return Actual_CSharp_AkChannelConfig_eConfigType_get(jarg1);
}
void Proxy_CSharp_AkChannelConfig_eConfigType_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkChannelConfig_eConfigType_set(jarg1, jarg2);
}
int Proxy_CSharp_AkChannelConfig_IsChannelConfigSupported(void* jarg1)
{
  return Actual_CSharp_AkChannelConfig_IsChannelConfigSupported(jarg1);
}
int Proxy_CSharp_AkChannelConfig_IsValid(void* jarg1)
{
  return Actual_CSharp_AkChannelConfig_IsValid(jarg1);
}
void* Proxy_CSharp_AkChannelConfig_RemoveCenter(void* jarg1)
{
  return Actual_CSharp_AkChannelConfig_RemoveCenter(jarg1);
}
void* Proxy_CSharp_AkChannelConfig_RemoveLFE(void* jarg1)
{
  return Actual_CSharp_AkChannelConfig_RemoveLFE(jarg1);
}
unsigned Proxy_CSharp_AkChannelConfig_Serialize(void* jarg1)
{
  return Actual_CSharp_AkChannelConfig_Serialize(jarg1);
}
void Proxy_CSharp_AkChannelConfig_SetAmbisonic(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkChannelConfig_SetAmbisonic(jarg1, jarg2);
}
void Proxy_CSharp_AkChannelConfig_SetAnonymous(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkChannelConfig_SetAnonymous(jarg1, jarg2);
}
void Proxy_CSharp_AkChannelConfig_SetStandard(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkChannelConfig_SetStandard(jarg1, jarg2);
}
void Proxy_CSharp_AkChannelConfig_SetStandardOrAnonymous(void* jarg1, unsigned jarg2, unsigned jarg3)
{
  Actual_CSharp_AkChannelConfig_SetStandardOrAnonymous(jarg1, jarg2, jarg3);
}
unsigned Proxy_CSharp_AkChannelConfig_uChannelMask_get(void* jarg1)
{
  return Actual_CSharp_AkChannelConfig_uChannelMask_get(jarg1);
}
void Proxy_CSharp_AkChannelConfig_uChannelMask_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkChannelConfig_uChannelMask_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkChannelConfig_uNumChannels_get(void* jarg1)
{
  return Actual_CSharp_AkChannelConfig_uNumChannels_get(jarg1);
}
void Proxy_CSharp_AkChannelConfig_uNumChannels_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkChannelConfig_uNumChannels_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkChannelEmitter_position_get(void* jarg1)
{
  return Actual_CSharp_AkChannelEmitter_position_get(jarg1);
}
void Proxy_CSharp_AkChannelEmitter_position_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkChannelEmitter_position_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkChannelEmitter_uInputChannels_get(void* jarg1)
{
  return Actual_CSharp_AkChannelEmitter_uInputChannels_get(jarg1);
}
void Proxy_CSharp_AkChannelEmitter_uInputChannels_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkChannelEmitter_uInputChannels_set(jarg1, jarg2);
}
int Proxy_CSharp_AkDeviceSettings_bUseStreamCache_get(void* jarg1)
{
  return Actual_CSharp_AkDeviceSettings_bUseStreamCache_get(jarg1);
}
void Proxy_CSharp_AkDeviceSettings_bUseStreamCache_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkDeviceSettings_bUseStreamCache_set(jarg1, jarg2);
}
int Proxy_CSharp_AkDeviceSettings_ePoolAttributes_get(void* jarg1)
{
  return Actual_CSharp_AkDeviceSettings_ePoolAttributes_get(jarg1);
}
void Proxy_CSharp_AkDeviceSettings_ePoolAttributes_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkDeviceSettings_ePoolAttributes_set(jarg1, jarg2);
}
float Proxy_CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_get(void* jarg1)
{
  return Actual_CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_get(jarg1);
}
void Proxy_CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkDeviceSettings_pIOMemory_get(void* jarg1)
{
  return Actual_CSharp_AkDeviceSettings_pIOMemory_get(jarg1);
}
void Proxy_CSharp_AkDeviceSettings_pIOMemory_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkDeviceSettings_pIOMemory_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkDeviceSettings_threadProperties_get(void* jarg1)
{
  return Actual_CSharp_AkDeviceSettings_threadProperties_get(jarg1);
}
void Proxy_CSharp_AkDeviceSettings_threadProperties_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkDeviceSettings_threadProperties_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkDeviceSettings_uGranularity_get(void* jarg1)
{
  return Actual_CSharp_AkDeviceSettings_uGranularity_get(jarg1);
}
void Proxy_CSharp_AkDeviceSettings_uGranularity_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkDeviceSettings_uGranularity_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkDeviceSettings_uIOMemoryAlignment_get(void* jarg1)
{
  return Actual_CSharp_AkDeviceSettings_uIOMemoryAlignment_get(jarg1);
}
void Proxy_CSharp_AkDeviceSettings_uIOMemoryAlignment_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkDeviceSettings_uIOMemoryAlignment_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkDeviceSettings_uIOMemorySize_get(void* jarg1)
{
  return Actual_CSharp_AkDeviceSettings_uIOMemorySize_get(jarg1);
}
void Proxy_CSharp_AkDeviceSettings_uIOMemorySize_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkDeviceSettings_uIOMemorySize_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkDeviceSettings_uMaxCachePinnedBytes_get(void* jarg1)
{
  return Actual_CSharp_AkDeviceSettings_uMaxCachePinnedBytes_get(jarg1);
}
void Proxy_CSharp_AkDeviceSettings_uMaxCachePinnedBytes_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkDeviceSettings_uMaxCachePinnedBytes_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkDeviceSettings_uMaxConcurrentIO_get(void* jarg1)
{
  return Actual_CSharp_AkDeviceSettings_uMaxConcurrentIO_get(jarg1);
}
void Proxy_CSharp_AkDeviceSettings_uMaxConcurrentIO_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkDeviceSettings_uMaxConcurrentIO_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkDeviceSettings_uSchedulerTypeFlags_get(void* jarg1)
{
  return Actual_CSharp_AkDeviceSettings_uSchedulerTypeFlags_get(jarg1);
}
void Proxy_CSharp_AkDeviceSettings_uSchedulerTypeFlags_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkDeviceSettings_uSchedulerTypeFlags_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkDurationCallbackInfo_audioNodeID_get(void* jarg1)
{
  return Actual_CSharp_AkDurationCallbackInfo_audioNodeID_get(jarg1);
}
int Proxy_CSharp_AkDurationCallbackInfo_bStreaming_get(void* jarg1)
{
  return Actual_CSharp_AkDurationCallbackInfo_bStreaming_get(jarg1);
}
float Proxy_CSharp_AkDurationCallbackInfo_fDuration_get(void* jarg1)
{
  return Actual_CSharp_AkDurationCallbackInfo_fDuration_get(jarg1);
}
float Proxy_CSharp_AkDurationCallbackInfo_fEstimatedDuration_get(void* jarg1)
{
  return Actual_CSharp_AkDurationCallbackInfo_fEstimatedDuration_get(jarg1);
}
unsigned Proxy_CSharp_AkDurationCallbackInfo_mediaID_get(void* jarg1)
{
  return Actual_CSharp_AkDurationCallbackInfo_mediaID_get(jarg1);
}
void* Proxy_CSharp_AkDurationCallbackInfo_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkDurationCallbackInfo_SWIGUpcast(jarg1);
}
unsigned Proxy_CSharp_AkDynamicSequenceItemCallbackInfo_audioNodeID_get(void* jarg1)
{
  return Actual_CSharp_AkDynamicSequenceItemCallbackInfo_audioNodeID_get(jarg1);
}
void* Proxy_CSharp_AkDynamicSequenceItemCallbackInfo_pCustomInfo_get(void* jarg1)
{
  return Actual_CSharp_AkDynamicSequenceItemCallbackInfo_pCustomInfo_get(jarg1);
}
unsigned Proxy_CSharp_AkDynamicSequenceItemCallbackInfo_playingID_get(void* jarg1)
{
  return Actual_CSharp_AkDynamicSequenceItemCallbackInfo_playingID_get(jarg1);
}
void* Proxy_CSharp_AkDynamicSequenceItemCallbackInfo_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkDynamicSequenceItemCallbackInfo_SWIGUpcast(jarg1);
}
unsigned Proxy_CSharp_AkEmitterSettings_reflectAuxBusID_get(void* jarg1)
{
  return Actual_CSharp_AkEmitterSettings_reflectAuxBusID_get(jarg1);
}
void Proxy_CSharp_AkEmitterSettings_reflectAuxBusID_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkEmitterSettings_reflectAuxBusID_set(jarg1, jarg2);
}
float Proxy_CSharp_AkEmitterSettings_reflectionMaxPathLength_get(void* jarg1)
{
  return Actual_CSharp_AkEmitterSettings_reflectionMaxPathLength_get(jarg1);
}
void Proxy_CSharp_AkEmitterSettings_reflectionMaxPathLength_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkEmitterSettings_reflectionMaxPathLength_set(jarg1, jarg2);
}
float Proxy_CSharp_AkEmitterSettings_reflectionsAuxBusGain_get(void* jarg1)
{
  return Actual_CSharp_AkEmitterSettings_reflectionsAuxBusGain_get(jarg1);
}
void Proxy_CSharp_AkEmitterSettings_reflectionsAuxBusGain_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkEmitterSettings_reflectionsAuxBusGain_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkEmitterSettings_reflectionsOrder_get(void* jarg1)
{
  return Actual_CSharp_AkEmitterSettings_reflectionsOrder_get(jarg1);
}
void Proxy_CSharp_AkEmitterSettings_reflectionsOrder_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkEmitterSettings_reflectionsOrder_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkEmitterSettings_reflectorFilterMask_get(void* jarg1)
{
  return Actual_CSharp_AkEmitterSettings_reflectorFilterMask_get(jarg1);
}
void Proxy_CSharp_AkEmitterSettings_reflectorFilterMask_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkEmitterSettings_reflectorFilterMask_set(jarg1, jarg2);
}
float Proxy_CSharp_AkEmitterSettings_roomReverbAuxBusGain_get(void* jarg1)
{
  return Actual_CSharp_AkEmitterSettings_roomReverbAuxBusGain_get(jarg1);
}
void Proxy_CSharp_AkEmitterSettings_roomReverbAuxBusGain_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkEmitterSettings_roomReverbAuxBusGain_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkEmitterSettings_useImageSources_get(void* jarg1)
{
  return Actual_CSharp_AkEmitterSettings_useImageSources_get(jarg1);
}
void Proxy_CSharp_AkEmitterSettings_useImageSources_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkEmitterSettings_useImageSources_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkEventCallbackInfo_eventID_get(void* jarg1)
{
  return Actual_CSharp_AkEventCallbackInfo_eventID_get(jarg1);
}
unsigned Proxy_CSharp_AkEventCallbackInfo_playingID_get(void* jarg1)
{
  return Actual_CSharp_AkEventCallbackInfo_playingID_get(jarg1);
}
void* Proxy_CSharp_AkEventCallbackInfo_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkEventCallbackInfo_SWIGUpcast(jarg1);
}
unsigned Proxy_CSharp_AkExternalSourceInfo_idCodec_get(void* jarg1)
{
  return Actual_CSharp_AkExternalSourceInfo_idCodec_get(jarg1);
}
void Proxy_CSharp_AkExternalSourceInfo_idCodec_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkExternalSourceInfo_idCodec_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkExternalSourceInfo_idFile_get(void* jarg1)
{
  return Actual_CSharp_AkExternalSourceInfo_idFile_get(jarg1);
}
void Proxy_CSharp_AkExternalSourceInfo_idFile_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkExternalSourceInfo_idFile_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkExternalSourceInfo_iExternalSrcCookie_get(void* jarg1)
{
  return Actual_CSharp_AkExternalSourceInfo_iExternalSrcCookie_get(jarg1);
}
void Proxy_CSharp_AkExternalSourceInfo_iExternalSrcCookie_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkExternalSourceInfo_iExternalSrcCookie_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkExternalSourceInfo_pInMemory_get(void* jarg1)
{
  return Actual_CSharp_AkExternalSourceInfo_pInMemory_get(jarg1);
}
void Proxy_CSharp_AkExternalSourceInfo_pInMemory_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkExternalSourceInfo_pInMemory_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkExternalSourceInfo_szFile_get(void* jarg1)
{
  return Actual_CSharp_AkExternalSourceInfo_szFile_get(jarg1);
}
void Proxy_CSharp_AkExternalSourceInfo_szFile_set(void* jarg1, const wchar_t* jarg2)
{
  Actual_CSharp_AkExternalSourceInfo_szFile_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkExternalSourceInfo_uiMemorySize_get(void* jarg1)
{
  return Actual_CSharp_AkExternalSourceInfo_uiMemorySize_get(jarg1);
}
void Proxy_CSharp_AkExternalSourceInfo_uiMemorySize_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkExternalSourceInfo_uiMemorySize_set(jarg1, jarg2);
}
float Proxy_CSharp_AkImageSourceParams_fDistanceScalingFactor_get(void* jarg1)
{
  return Actual_CSharp_AkImageSourceParams_fDistanceScalingFactor_get(jarg1);
}
void Proxy_CSharp_AkImageSourceParams_fDistanceScalingFactor_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkImageSourceParams_fDistanceScalingFactor_set(jarg1, jarg2);
}
float Proxy_CSharp_AkImageSourceParams_fLevel_get(void* jarg1)
{
  return Actual_CSharp_AkImageSourceParams_fLevel_get(jarg1);
}
void Proxy_CSharp_AkImageSourceParams_fLevel_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkImageSourceParams_fLevel_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkImageSourceParams_sourcePosition_get(void* jarg1)
{
  return Actual_CSharp_AkImageSourceParams_sourcePosition_get(jarg1);
}
void Proxy_CSharp_AkImageSourceParams_sourcePosition_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkImageSourceParams_sourcePosition_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkImageSourceSettings_params__get(void* jarg1)
{
  return Actual_CSharp_AkImageSourceSettings_params__get(jarg1);
}
void Proxy_CSharp_AkImageSourceSettings_params__set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkImageSourceSettings_params__set(jarg1, jarg2);
}
void Proxy_CSharp_AkImageSourceSettings_SetName(void* jarg1, const char* jarg2)
{
  Actual_CSharp_AkImageSourceSettings_SetName(jarg1, jarg2);
}
void Proxy_CSharp_AkImageSourceSettings_SetOneTexture(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkImageSourceSettings_SetOneTexture(jarg1, jarg2);
}
int Proxy_CSharp_AkInitSettings_bEnableGameSyncPreparation_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_bEnableGameSyncPreparation_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_bEnableGameSyncPreparation_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkInitSettings_bEnableGameSyncPreparation_set(jarg1, jarg2);
}
int Proxy_CSharp_AkInitSettings_bUseLEngineThread_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_bUseLEngineThread_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_bUseLEngineThread_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkInitSettings_bUseLEngineThread_set(jarg1, jarg2);
}
int Proxy_CSharp_AkInitSettings_bUseSoundBankMgrThread_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_bUseSoundBankMgrThread_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_bUseSoundBankMgrThread_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkInitSettings_bUseSoundBankMgrThread_set(jarg1, jarg2);
}
float Proxy_CSharp_AkInitSettings_fDefaultPoolRatioThreshold_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_fDefaultPoolRatioThreshold_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_fDefaultPoolRatioThreshold_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkInitSettings_fDefaultPoolRatioThreshold_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkInitSettings_pfnAssertHook_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_pfnAssertHook_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_pfnAssertHook_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkInitSettings_pfnAssertHook_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkInitSettings_settingsMainOutput_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_settingsMainOutput_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_settingsMainOutput_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkInitSettings_settingsMainOutput_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkInitSettings_szPluginDLLPath_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_szPluginDLLPath_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_szPluginDLLPath_set(void* jarg1, const wchar_t* jarg2)
{
  Actual_CSharp_AkInitSettings_szPluginDLLPath_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkInitSettings_uCommandQueueSize_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_uCommandQueueSize_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_uCommandQueueSize_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkInitSettings_uCommandQueueSize_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkInitSettings_uContinuousPlaybackLookAhead_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_uContinuousPlaybackLookAhead_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_uContinuousPlaybackLookAhead_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkInitSettings_uContinuousPlaybackLookAhead_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkInitSettings_uDefaultPoolSize_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_uDefaultPoolSize_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_uDefaultPoolSize_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkInitSettings_uDefaultPoolSize_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkInitSettings_uMaxHardwareTimeoutMs_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_uMaxHardwareTimeoutMs_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_uMaxHardwareTimeoutMs_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkInitSettings_uMaxHardwareTimeoutMs_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkInitSettings_uMaxNumPaths_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_uMaxNumPaths_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_uMaxNumPaths_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkInitSettings_uMaxNumPaths_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkInitSettings_uMonitorPoolSize_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_uMonitorPoolSize_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_uMonitorPoolSize_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkInitSettings_uMonitorPoolSize_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkInitSettings_uMonitorQueuePoolSize_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_uMonitorQueuePoolSize_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_uMonitorQueuePoolSize_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkInitSettings_uMonitorQueuePoolSize_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkInitSettings_uNumSamplesPerFrame_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_uNumSamplesPerFrame_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_uNumSamplesPerFrame_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkInitSettings_uNumSamplesPerFrame_set(jarg1, jarg2);
}
int Proxy_CSharp_AkInitSettings_uPrepareEventMemoryPoolID_get(void* jarg1)
{
  return Actual_CSharp_AkInitSettings_uPrepareEventMemoryPoolID_get(jarg1);
}
void Proxy_CSharp_AkInitSettings_uPrepareEventMemoryPoolID_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkInitSettings_uPrepareEventMemoryPoolID_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkIterator_GetItem(void* jarg1)
{
  return Actual_CSharp_AkIterator_GetItem(jarg1);
}
int Proxy_CSharp_AkIterator_IsDifferentFrom(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkIterator_IsDifferentFrom(jarg1, jarg2);
}
int Proxy_CSharp_AkIterator_IsEqualTo(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkIterator_IsEqualTo(jarg1, jarg2);
}
void* Proxy_CSharp_AkIterator_NextIter(void* jarg1)
{
  return Actual_CSharp_AkIterator_NextIter(jarg1);
}
void* Proxy_CSharp_AkIterator_pItem_get(void* jarg1)
{
  return Actual_CSharp_AkIterator_pItem_get(jarg1);
}
void Proxy_CSharp_AkIterator_pItem_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkIterator_pItem_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkIterator_PrevIter(void* jarg1)
{
  return Actual_CSharp_AkIterator_PrevIter(jarg1);
}
void* Proxy_CSharp_AkMarkerCallbackInfo_strLabel_get(void* jarg1)
{
  return Actual_CSharp_AkMarkerCallbackInfo_strLabel_get(jarg1);
}
void* Proxy_CSharp_AkMarkerCallbackInfo_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkMarkerCallbackInfo_SWIGUpcast(jarg1);
}
unsigned Proxy_CSharp_AkMarkerCallbackInfo_uIdentifier_get(void* jarg1)
{
  return Actual_CSharp_AkMarkerCallbackInfo_uIdentifier_get(jarg1);
}
unsigned Proxy_CSharp_AkMarkerCallbackInfo_uPosition_get(void* jarg1)
{
  return Actual_CSharp_AkMarkerCallbackInfo_uPosition_get(jarg1);
}
unsigned Proxy_CSharp_AkMemSettings_uDebugFlags_get(void* jarg1)
{
  return Actual_CSharp_AkMemSettings_uDebugFlags_get(jarg1);
}
void Proxy_CSharp_AkMemSettings_uDebugFlags_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkMemSettings_uDebugFlags_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkMemSettings_uMaxNumPools_get(void* jarg1)
{
  return Actual_CSharp_AkMemSettings_uMaxNumPools_get(jarg1);
}
void Proxy_CSharp_AkMemSettings_uMaxNumPools_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkMemSettings_uMaxNumPools_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_byAftertouchNote_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byAftertouchNote_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byAftertouchNote_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_byAftertouchNote_set(jarg1, jarg2);
}
int Proxy_CSharp_AkMIDIEvent_byCc_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byCc_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byCc_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkMIDIEvent_byCc_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_byCcValue_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byCcValue_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byCcValue_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_byCcValue_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_byChan_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byChan_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byChan_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_byChan_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_byChanAftertouchValue_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byChanAftertouchValue_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byChanAftertouchValue_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_byChanAftertouchValue_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_byNoteAftertouchValue_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byNoteAftertouchValue_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byNoteAftertouchValue_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_byNoteAftertouchValue_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_byOnOffNote_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byOnOffNote_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byOnOffNote_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_byOnOffNote_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_byProgramNum_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byProgramNum_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byProgramNum_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_byProgramNum_set(jarg1, jarg2);
}
int Proxy_CSharp_AkMIDIEvent_byType_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byType_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byType_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkMIDIEvent_byType_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_byValueLsb_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byValueLsb_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byValueLsb_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_byValueLsb_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_byValueMsb_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byValueMsb_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byValueMsb_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_byValueMsb_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_byVelocity_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_byVelocity_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_byVelocity_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_byVelocity_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkMIDIEvent_Cc_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_Cc_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_Cc_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkMIDIEvent_Cc_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkMIDIEvent_ChanAftertouch_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_ChanAftertouch_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_ChanAftertouch_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkMIDIEvent_ChanAftertouch_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkMIDIEvent_Gen_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_Gen_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_Gen_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkMIDIEvent_Gen_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkMIDIEvent_NoteAftertouch_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_NoteAftertouch_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_NoteAftertouch_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkMIDIEvent_NoteAftertouch_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkMIDIEvent_NoteOnOff_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_NoteOnOff_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_NoteOnOff_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkMIDIEvent_NoteOnOff_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkMIDIEvent_PitchBend_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_PitchBend_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_PitchBend_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkMIDIEvent_PitchBend_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkMIDIEvent_ProgramChange_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_ProgramChange_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_ProgramChange_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkMIDIEvent_ProgramChange_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tCc_byCc_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tCc_byCc_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tCc_byCc_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tCc_byCc_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tCc_byValue_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tCc_byValue_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tCc_byValue_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tCc_byValue_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tChanAftertouch_byValue_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tChanAftertouch_byValue_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tChanAftertouch_byValue_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tChanAftertouch_byValue_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tGen_byParam1_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tGen_byParam1_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tGen_byParam1_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tGen_byParam1_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tGen_byParam2_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tGen_byParam2_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tGen_byParam2_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tGen_byParam2_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tNoteAftertouch_byNote_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byNote_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tNoteAftertouch_byNote_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byNote_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tNoteAftertouch_byValue_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byValue_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tNoteAftertouch_byValue_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byValue_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tNoteOnOff_byNote_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tNoteOnOff_byNote_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tNoteOnOff_byNote_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tNoteOnOff_byNote_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tPitchBend_byValueLsb_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tPitchBend_byValueLsb_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tPitchBend_byValueLsb_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tPitchBend_byValueLsb_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tPitchBend_byValueMsb_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tPitchBend_byValueMsb_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tPitchBend_byValueMsb_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tPitchBend_byValueMsb_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEvent_tProgramChange_byProgramNum_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEvent_tProgramChange_byProgramNum_get(jarg1);
}
void Proxy_CSharp_AkMIDIEvent_tProgramChange_byProgramNum_set(void* jarg1, uint8_t jarg2)
{
  Actual_CSharp_AkMIDIEvent_tProgramChange_byProgramNum_set(jarg1, jarg2);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byAftertouchNote_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byAftertouchNote_get(jarg1);
}
int Proxy_CSharp_AkMIDIEventCallbackInfo_byCc_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byCc_get(jarg1);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byCcValue_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byCcValue_get(jarg1);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byChan_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byChan_get(jarg1);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byChanAftertouchValue_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byChanAftertouchValue_get(jarg1);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byNoteAftertouchValue_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byNoteAftertouchValue_get(jarg1);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byOnOffNote_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byOnOffNote_get(jarg1);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byParam1_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byParam1_get(jarg1);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byParam2_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byParam2_get(jarg1);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byProgramNum_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byProgramNum_get(jarg1);
}
int Proxy_CSharp_AkMIDIEventCallbackInfo_byType_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byType_get(jarg1);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byValueLsb_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byValueLsb_get(jarg1);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byValueMsb_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byValueMsb_get(jarg1);
}
uint8_t Proxy_CSharp_AkMIDIEventCallbackInfo_byVelocity_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_byVelocity_get(jarg1);
}
void* Proxy_CSharp_AkMIDIEventCallbackInfo_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkMIDIEventCallbackInfo_SWIGUpcast(jarg1);
}
void Proxy_CSharp_AkMIDIPost_Clone(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkMIDIPost_Clone(jarg1, jarg2);
}
int Proxy_CSharp_AkMIDIPost_GetSizeOf()
{
  return Actual_CSharp_AkMIDIPost_GetSizeOf();
}
int Proxy_CSharp_AkMIDIPost_PostOnEvent(void* jarg1, unsigned jarg2, uint64_t jarg3, unsigned jarg4)
{
  return Actual_CSharp_AkMIDIPost_PostOnEvent(jarg1, jarg2, jarg3, jarg4);
}
void* Proxy_CSharp_AkMIDIPost_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkMIDIPost_SWIGUpcast(jarg1);
}
unsigned Proxy_CSharp_AkMIDIPost_uOffset_get(void* jarg1)
{
  return Actual_CSharp_AkMIDIPost_uOffset_get(jarg1);
}
void Proxy_CSharp_AkMIDIPost_uOffset_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkMIDIPost_uOffset_set(jarg1, jarg2);
}
int Proxy_CSharp_AkMonitoringCallbackInfo_errorCode_get(void* jarg1)
{
  return Actual_CSharp_AkMonitoringCallbackInfo_errorCode_get(jarg1);
}
int Proxy_CSharp_AkMonitoringCallbackInfo_errorLevel_get(void* jarg1)
{
  return Actual_CSharp_AkMonitoringCallbackInfo_errorLevel_get(jarg1);
}
uint64_t Proxy_CSharp_AkMonitoringCallbackInfo_gameObjID_get(void* jarg1)
{
  return Actual_CSharp_AkMonitoringCallbackInfo_gameObjID_get(jarg1);
}
void* Proxy_CSharp_AkMonitoringCallbackInfo_message_get(void* jarg1)
{
  return Actual_CSharp_AkMonitoringCallbackInfo_message_get(jarg1);
}
unsigned Proxy_CSharp_AkMonitoringCallbackInfo_playingID_get(void* jarg1)
{
  return Actual_CSharp_AkMonitoringCallbackInfo_playingID_get(jarg1);
}
unsigned Proxy_CSharp_AkMusicPlaylistCallbackInfo_playlistID_get(void* jarg1)
{
  return Actual_CSharp_AkMusicPlaylistCallbackInfo_playlistID_get(jarg1);
}
void* Proxy_CSharp_AkMusicPlaylistCallbackInfo_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkMusicPlaylistCallbackInfo_SWIGUpcast(jarg1);
}
unsigned Proxy_CSharp_AkMusicPlaylistCallbackInfo_uNumPlaylistItems_get(void* jarg1)
{
  return Actual_CSharp_AkMusicPlaylistCallbackInfo_uNumPlaylistItems_get(jarg1);
}
unsigned Proxy_CSharp_AkMusicPlaylistCallbackInfo_uPlaylistItemDone_get(void* jarg1)
{
  return Actual_CSharp_AkMusicPlaylistCallbackInfo_uPlaylistItemDone_get(jarg1);
}
unsigned Proxy_CSharp_AkMusicPlaylistCallbackInfo_uPlaylistSelection_get(void* jarg1)
{
  return Actual_CSharp_AkMusicPlaylistCallbackInfo_uPlaylistSelection_get(jarg1);
}
float Proxy_CSharp_AkMusicSettings_fStreamingLookAheadRatio_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSettings_fStreamingLookAheadRatio_get(jarg1);
}
void Proxy_CSharp_AkMusicSettings_fStreamingLookAheadRatio_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkMusicSettings_fStreamingLookAheadRatio_set(jarg1, jarg2);
}
int Proxy_CSharp_AkMusicSyncCallbackInfo_musicSyncType_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_musicSyncType_get(jarg1);
}
unsigned Proxy_CSharp_AkMusicSyncCallbackInfo_playingID_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_playingID_get(jarg1);
}
float Proxy_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBarDuration_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBarDuration_get(jarg1);
}
float Proxy_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBeatDuration_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBeatDuration_get(jarg1);
}
float Proxy_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridDuration_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridDuration_get(jarg1);
}
float Proxy_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridOffset_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridOffset_get(jarg1);
}
int Proxy_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iActiveDuration_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iActiveDuration_get(jarg1);
}
int Proxy_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iCurrentPosition_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iCurrentPosition_get(jarg1);
}
int Proxy_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPostExitDuration_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPostExitDuration_get(jarg1);
}
int Proxy_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPreEntryDuration_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPreEntryDuration_get(jarg1);
}
int Proxy_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iRemainingLookAheadTime_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iRemainingLookAheadTime_get(jarg1);
}
void* Proxy_CSharp_AkMusicSyncCallbackInfo_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_SWIGUpcast(jarg1);
}
void* Proxy_CSharp_AkMusicSyncCallbackInfo_userCueName_get(void* jarg1)
{
  return Actual_CSharp_AkMusicSyncCallbackInfo_userCueName_get(jarg1);
}
int Proxy_CSharp_AkObjectInfo_iDepth_get(void* jarg1)
{
  return Actual_CSharp_AkObjectInfo_iDepth_get(jarg1);
}
void Proxy_CSharp_AkObjectInfo_iDepth_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkObjectInfo_iDepth_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkObjectInfo_objID_get(void* jarg1)
{
  return Actual_CSharp_AkObjectInfo_objID_get(jarg1);
}
void Proxy_CSharp_AkObjectInfo_objID_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkObjectInfo_objID_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkObjectInfo_parentID_get(void* jarg1)
{
  return Actual_CSharp_AkObjectInfo_parentID_get(jarg1);
}
void Proxy_CSharp_AkObjectInfo_parentID_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkObjectInfo_parentID_set(jarg1, jarg2);
}
float Proxy_CSharp_AkObstructionOcclusionValues_obstruction_get(void* jarg1)
{
  return Actual_CSharp_AkObstructionOcclusionValues_obstruction_get(jarg1);
}
void Proxy_CSharp_AkObstructionOcclusionValues_obstruction_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkObstructionOcclusionValues_obstruction_set(jarg1, jarg2);
}
float Proxy_CSharp_AkObstructionOcclusionValues_occlusion_get(void* jarg1)
{
  return Actual_CSharp_AkObstructionOcclusionValues_occlusion_get(jarg1);
}
void Proxy_CSharp_AkObstructionOcclusionValues_occlusion_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkObstructionOcclusionValues_occlusion_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkOutputSettings_audioDeviceShareset_get(void* jarg1)
{
  return Actual_CSharp_AkOutputSettings_audioDeviceShareset_get(jarg1);
}
void Proxy_CSharp_AkOutputSettings_audioDeviceShareset_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkOutputSettings_audioDeviceShareset_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkOutputSettings_channelConfig_get(void* jarg1)
{
  return Actual_CSharp_AkOutputSettings_channelConfig_get(jarg1);
}
void Proxy_CSharp_AkOutputSettings_channelConfig_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkOutputSettings_channelConfig_set(jarg1, jarg2);
}
int Proxy_CSharp_AkOutputSettings_ePanningRule_get(void* jarg1)
{
  return Actual_CSharp_AkOutputSettings_ePanningRule_get(jarg1);
}
void Proxy_CSharp_AkOutputSettings_ePanningRule_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkOutputSettings_ePanningRule_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkOutputSettings_idDevice_get(void* jarg1)
{
  return Actual_CSharp_AkOutputSettings_idDevice_get(jarg1);
}
void Proxy_CSharp_AkOutputSettings_idDevice_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkOutputSettings_idDevice_set(jarg1, jarg2);
}
int Proxy_CSharp_AkPlatformInitSettings_bGlobalFocus_get(void* jarg1)
{
  return Actual_CSharp_AkPlatformInitSettings_bGlobalFocus_get(jarg1);
}
void Proxy_CSharp_AkPlatformInitSettings_bGlobalFocus_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkPlatformInitSettings_bGlobalFocus_set(jarg1, jarg2);
}
int Proxy_CSharp_AkPlatformInitSettings_eAudioAPI_get(void* jarg1)
{
  return Actual_CSharp_AkPlatformInitSettings_eAudioAPI_get(jarg1);
}
void Proxy_CSharp_AkPlatformInitSettings_eAudioAPI_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkPlatformInitSettings_eAudioAPI_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_get(void* jarg1)
{
  return Actual_CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_get(jarg1);
}
void Proxy_CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlatformInitSettings_threadBankManager_get(void* jarg1)
{
  return Actual_CSharp_AkPlatformInitSettings_threadBankManager_get(jarg1);
}
void Proxy_CSharp_AkPlatformInitSettings_threadBankManager_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkPlatformInitSettings_threadBankManager_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlatformInitSettings_threadLEngine_get(void* jarg1)
{
  return Actual_CSharp_AkPlatformInitSettings_threadLEngine_get(jarg1);
}
void Proxy_CSharp_AkPlatformInitSettings_threadLEngine_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkPlatformInitSettings_threadLEngine_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlatformInitSettings_threadMonitor_get(void* jarg1)
{
  return Actual_CSharp_AkPlatformInitSettings_threadMonitor_get(jarg1);
}
void Proxy_CSharp_AkPlatformInitSettings_threadMonitor_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkPlatformInitSettings_threadMonitor_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_get(void* jarg1)
{
  return Actual_CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_get(jarg1);
}
void Proxy_CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_set(jarg1, jarg2);
}
uint16_t Proxy_CSharp_AkPlatformInitSettings_uNumRefillsInVoice_get(void* jarg1)
{
  return Actual_CSharp_AkPlatformInitSettings_uNumRefillsInVoice_get(jarg1);
}
void Proxy_CSharp_AkPlatformInitSettings_uNumRefillsInVoice_set(void* jarg1, uint16_t jarg2)
{
  Actual_CSharp_AkPlatformInitSettings_uNumRefillsInVoice_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkPlatformInitSettings_uSampleRate_get(void* jarg1)
{
  return Actual_CSharp_AkPlatformInitSettings_uSampleRate_get(jarg1);
}
void Proxy_CSharp_AkPlatformInitSettings_uSampleRate_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkPlatformInitSettings_uSampleRate_set(jarg1, jarg2);
}
int Proxy_CSharp_AkPlaylist_Enqueue__SWIG_0(void* jarg1, unsigned jarg2, int jarg3, void* jarg4, unsigned jarg5, void* jarg6)
{
  return Actual_CSharp_AkPlaylist_Enqueue__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_AkPlaylist_Enqueue__SWIG_1(void* jarg1, unsigned jarg2, int jarg3, void* jarg4, unsigned jarg5)
{
  return Actual_CSharp_AkPlaylist_Enqueue__SWIG_1(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_AkPlaylist_Enqueue__SWIG_2(void* jarg1, unsigned jarg2, int jarg3, void* jarg4)
{
  return Actual_CSharp_AkPlaylist_Enqueue__SWIG_2(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_AkPlaylist_Enqueue__SWIG_3(void* jarg1, unsigned jarg2, int jarg3)
{
  return Actual_CSharp_AkPlaylist_Enqueue__SWIG_3(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_AkPlaylist_Enqueue__SWIG_4(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_AkPlaylist_Enqueue__SWIG_4(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlaylist_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkPlaylist_SWIGUpcast(jarg1);
}
void* Proxy_CSharp_AkPlaylistArray_AddLast__SWIG_0(void* jarg1)
{
  return Actual_CSharp_AkPlaylistArray_AddLast__SWIG_0(jarg1);
}
void* Proxy_CSharp_AkPlaylistArray_AddLast__SWIG_1(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkPlaylistArray_AddLast__SWIG_1(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlaylistArray_Begin(void* jarg1)
{
  return Actual_CSharp_AkPlaylistArray_Begin(jarg1);
}
int Proxy_CSharp_AkPlaylistArray_Copy(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkPlaylistArray_Copy(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlaylistArray_End(void* jarg1)
{
  return Actual_CSharp_AkPlaylistArray_End(jarg1);
}
void* Proxy_CSharp_AkPlaylistArray_Erase__SWIG_0(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkPlaylistArray_Erase__SWIG_0(jarg1, jarg2);
}
void Proxy_CSharp_AkPlaylistArray_Erase__SWIG_1(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkPlaylistArray_Erase__SWIG_1(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlaylistArray_EraseSwap(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkPlaylistArray_EraseSwap(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlaylistArray_Exists(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkPlaylistArray_Exists(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlaylistArray_FindEx(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkPlaylistArray_FindEx(jarg1, jarg2);
}
int Proxy_CSharp_AkPlaylistArray_GrowArray__SWIG_0(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_AkPlaylistArray_GrowArray__SWIG_0(jarg1, jarg2);
}
int Proxy_CSharp_AkPlaylistArray_GrowArray__SWIG_1(void* jarg1)
{
  return Actual_CSharp_AkPlaylistArray_GrowArray__SWIG_1(jarg1);
}
void* Proxy_CSharp_AkPlaylistArray_Insert(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_AkPlaylistArray_Insert(jarg1, jarg2);
}
int Proxy_CSharp_AkPlaylistArray_IsEmpty(void* jarg1)
{
  return Actual_CSharp_AkPlaylistArray_IsEmpty(jarg1);
}
void* Proxy_CSharp_AkPlaylistArray_ItemAtIndex(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_AkPlaylistArray_ItemAtIndex(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlaylistArray_Last(void* jarg1)
{
  return Actual_CSharp_AkPlaylistArray_Last(jarg1);
}
unsigned Proxy_CSharp_AkPlaylistArray_Length(void* jarg1)
{
  return Actual_CSharp_AkPlaylistArray_Length(jarg1);
}
int Proxy_CSharp_AkPlaylistArray_Remove(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkPlaylistArray_Remove(jarg1, jarg2);
}
void Proxy_CSharp_AkPlaylistArray_RemoveAll(void* jarg1)
{
  Actual_CSharp_AkPlaylistArray_RemoveAll(jarg1);
}
void Proxy_CSharp_AkPlaylistArray_RemoveLast(void* jarg1)
{
  Actual_CSharp_AkPlaylistArray_RemoveLast(jarg1);
}
int Proxy_CSharp_AkPlaylistArray_RemoveSwap(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkPlaylistArray_RemoveSwap(jarg1, jarg2);
}
int Proxy_CSharp_AkPlaylistArray_Reserve(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_AkPlaylistArray_Reserve(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkPlaylistArray_Reserved(void* jarg1)
{
  return Actual_CSharp_AkPlaylistArray_Reserved(jarg1);
}
int Proxy_CSharp_AkPlaylistArray_Resize(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_AkPlaylistArray_Resize(jarg1, jarg2);
}
void Proxy_CSharp_AkPlaylistArray_Term(void* jarg1)
{
  Actual_CSharp_AkPlaylistArray_Term(jarg1);
}
void Proxy_CSharp_AkPlaylistArray_Transfer(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkPlaylistArray_Transfer(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlaylistItem_Assign(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkPlaylistItem_Assign(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkPlaylistItem_audioNodeID_get(void* jarg1)
{
  return Actual_CSharp_AkPlaylistItem_audioNodeID_get(jarg1);
}
void Proxy_CSharp_AkPlaylistItem_audioNodeID_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkPlaylistItem_audioNodeID_set(jarg1, jarg2);
}
int Proxy_CSharp_AkPlaylistItem_IsEqualTo(void* jarg1, void* jarg2)
{
  return Actual_CSharp_AkPlaylistItem_IsEqualTo(jarg1, jarg2);
}
int Proxy_CSharp_AkPlaylistItem_msDelay_get(void* jarg1)
{
  return Actual_CSharp_AkPlaylistItem_msDelay_get(jarg1);
}
void Proxy_CSharp_AkPlaylistItem_msDelay_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkPlaylistItem_msDelay_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkPlaylistItem_pCustomInfo_get(void* jarg1)
{
  return Actual_CSharp_AkPlaylistItem_pCustomInfo_get(jarg1);
}
void Proxy_CSharp_AkPlaylistItem_pCustomInfo_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkPlaylistItem_pCustomInfo_set(jarg1, jarg2);
}
int Proxy_CSharp_AkPlaylistItem_SetExternalSources(void* jarg1, unsigned jarg2, void* jarg3)
{
  return Actual_CSharp_AkPlaylistItem_SetExternalSources(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_AkPositioningInfo_bUpdateEachFrame_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_bUpdateEachFrame_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_bUpdateEachFrame_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkPositioningInfo_bUpdateEachFrame_set(jarg1, jarg2);
}
int Proxy_CSharp_AkPositioningInfo_bUseAttenuation_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_bUseAttenuation_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_bUseAttenuation_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkPositioningInfo_bUseAttenuation_set(jarg1, jarg2);
}
int Proxy_CSharp_AkPositioningInfo_bUseConeAttenuation_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_bUseConeAttenuation_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_bUseConeAttenuation_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkPositioningInfo_bUseConeAttenuation_set(jarg1, jarg2);
}
int Proxy_CSharp_AkPositioningInfo_e3DSpatializationMode_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_e3DSpatializationMode_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_e3DSpatializationMode_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkPositioningInfo_e3DSpatializationMode_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_fCenterPct_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_fCenterPct_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_fCenterPct_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_fCenterPct_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_fConeMaxAttenuation_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_fConeMaxAttenuation_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_fConeMaxAttenuation_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_fConeMaxAttenuation_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_fInnerAngle_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_fInnerAngle_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_fInnerAngle_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_fInnerAngle_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_fMaxDistance_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_fMaxDistance_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_fMaxDistance_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_fMaxDistance_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_fOuterAngle_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_fOuterAngle_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_fOuterAngle_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_fOuterAngle_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_fVolDryAtMaxDist_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_fVolDryAtMaxDist_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_fVolDryAtMaxDist_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_fVolDryAtMaxDist_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_HPFCone_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_HPFCone_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_HPFCone_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_HPFCone_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_HPFValueAtMaxDist_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_HPFValueAtMaxDist_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_HPFValueAtMaxDist_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_HPFValueAtMaxDist_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_LPFCone_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_LPFCone_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_LPFCone_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_LPFCone_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPositioningInfo_LPFValueAtMaxDist_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_LPFValueAtMaxDist_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_LPFValueAtMaxDist_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPositioningInfo_LPFValueAtMaxDist_set(jarg1, jarg2);
}
int Proxy_CSharp_AkPositioningInfo_pannerType_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_pannerType_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_pannerType_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkPositioningInfo_pannerType_set(jarg1, jarg2);
}
int Proxy_CSharp_AkPositioningInfo_posSourceType_get(void* jarg1)
{
  return Actual_CSharp_AkPositioningInfo_posSourceType_get(jarg1);
}
void Proxy_CSharp_AkPositioningInfo_posSourceType_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkPositioningInfo_posSourceType_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPropagationPathInfo_dryDiffractionAngle_get(void* jarg1)
{
  return Actual_CSharp_AkPropagationPathInfo_dryDiffractionAngle_get(jarg1);
}
void Proxy_CSharp_AkPropagationPathInfo_dryDiffractionAngle_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPropagationPathInfo_dryDiffractionAngle_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPropagationPathInfo_gain_get(void* jarg1)
{
  return Actual_CSharp_AkPropagationPathInfo_gain_get(jarg1);
}
void Proxy_CSharp_AkPropagationPathInfo_gain_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPropagationPathInfo_gain_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPropagationPathInfo_length_get(void* jarg1)
{
  return Actual_CSharp_AkPropagationPathInfo_length_get(jarg1);
}
void Proxy_CSharp_AkPropagationPathInfo_length_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPropagationPathInfo_length_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkPropagationPathInfo_nodePoint_get(void* jarg1)
{
  return Actual_CSharp_AkPropagationPathInfo_nodePoint_get(jarg1);
}
void Proxy_CSharp_AkPropagationPathInfo_nodePoint_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkPropagationPathInfo_nodePoint_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkPropagationPathInfo_numNodes_get(void* jarg1)
{
  return Actual_CSharp_AkPropagationPathInfo_numNodes_get(jarg1);
}
void Proxy_CSharp_AkPropagationPathInfo_numNodes_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkPropagationPathInfo_numNodes_set(jarg1, jarg2);
}
float Proxy_CSharp_AkPropagationPathInfo_wetDiffractionAngle_get(void* jarg1)
{
  return Actual_CSharp_AkPropagationPathInfo_wetDiffractionAngle_get(jarg1);
}
void Proxy_CSharp_AkPropagationPathInfo_wetDiffractionAngle_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkPropagationPathInfo_wetDiffractionAngle_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkPropagationPathInfoProxy_GetNodePoint(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_AkPropagationPathInfoProxy_GetNodePoint(jarg1, jarg2);
}
int Proxy_CSharp_AkPropagationPathInfoProxy_GetSizeOf()
{
  return Actual_CSharp_AkPropagationPathInfoProxy_GetSizeOf();
}
void* Proxy_CSharp_AkPropagationPathInfoProxy_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkPropagationPathInfoProxy_SWIGUpcast(jarg1);
}
float Proxy_CSharp_AkRamp_fNext_get(void* jarg1)
{
  return Actual_CSharp_AkRamp_fNext_get(jarg1);
}
void Proxy_CSharp_AkRamp_fNext_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkRamp_fNext_set(jarg1, jarg2);
}
float Proxy_CSharp_AkRamp_fPrev_get(void* jarg1)
{
  return Actual_CSharp_AkRamp_fPrev_get(jarg1);
}
void Proxy_CSharp_AkRamp_fPrev_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkRamp_fPrev_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkRoomParams_Front_get(void* jarg1)
{
  return Actual_CSharp_AkRoomParams_Front_get(jarg1);
}
void Proxy_CSharp_AkRoomParams_Front_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkRoomParams_Front_set(jarg1, jarg2);
}
int Proxy_CSharp_AkRoomParams_Priority_get(void* jarg1)
{
  return Actual_CSharp_AkRoomParams_Priority_get(jarg1);
}
void Proxy_CSharp_AkRoomParams_Priority_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkRoomParams_Priority_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkRoomParams_ReverbAuxBus_get(void* jarg1)
{
  return Actual_CSharp_AkRoomParams_ReverbAuxBus_get(jarg1);
}
void Proxy_CSharp_AkRoomParams_ReverbAuxBus_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkRoomParams_ReverbAuxBus_set(jarg1, jarg2);
}
float Proxy_CSharp_AkRoomParams_ReverbLevel_get(void* jarg1)
{
  return Actual_CSharp_AkRoomParams_ReverbLevel_get(jarg1);
}
void Proxy_CSharp_AkRoomParams_ReverbLevel_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkRoomParams_ReverbLevel_set(jarg1, jarg2);
}
float Proxy_CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_get(void* jarg1)
{
  return Actual_CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_get(jarg1);
}
void Proxy_CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_set(jarg1, jarg2);
}
int Proxy_CSharp_AkRoomParams_RoomGameObj_KeepRegistered_get(void* jarg1)
{
  return Actual_CSharp_AkRoomParams_RoomGameObj_KeepRegistered_get(jarg1);
}
void Proxy_CSharp_AkRoomParams_RoomGameObj_KeepRegistered_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkRoomParams_RoomGameObj_KeepRegistered_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkRoomParams_Up_get(void* jarg1)
{
  return Actual_CSharp_AkRoomParams_Up_get(jarg1);
}
void Proxy_CSharp_AkRoomParams_Up_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkRoomParams_Up_set(jarg1, jarg2);
}
float Proxy_CSharp_AkRoomParams_WallOcclusion_get(void* jarg1)
{
  return Actual_CSharp_AkRoomParams_WallOcclusion_get(jarg1);
}
void Proxy_CSharp_AkRoomParams_WallOcclusion_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkRoomParams_WallOcclusion_set(jarg1, jarg2);
}
float Proxy_CSharp_AkSegmentInfo_fBarDuration_get(void* jarg1)
{
  return Actual_CSharp_AkSegmentInfo_fBarDuration_get(jarg1);
}
void Proxy_CSharp_AkSegmentInfo_fBarDuration_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkSegmentInfo_fBarDuration_set(jarg1, jarg2);
}
float Proxy_CSharp_AkSegmentInfo_fBeatDuration_get(void* jarg1)
{
  return Actual_CSharp_AkSegmentInfo_fBeatDuration_get(jarg1);
}
void Proxy_CSharp_AkSegmentInfo_fBeatDuration_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkSegmentInfo_fBeatDuration_set(jarg1, jarg2);
}
float Proxy_CSharp_AkSegmentInfo_fGridDuration_get(void* jarg1)
{
  return Actual_CSharp_AkSegmentInfo_fGridDuration_get(jarg1);
}
void Proxy_CSharp_AkSegmentInfo_fGridDuration_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkSegmentInfo_fGridDuration_set(jarg1, jarg2);
}
float Proxy_CSharp_AkSegmentInfo_fGridOffset_get(void* jarg1)
{
  return Actual_CSharp_AkSegmentInfo_fGridOffset_get(jarg1);
}
void Proxy_CSharp_AkSegmentInfo_fGridOffset_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkSegmentInfo_fGridOffset_set(jarg1, jarg2);
}
int Proxy_CSharp_AkSegmentInfo_iActiveDuration_get(void* jarg1)
{
  return Actual_CSharp_AkSegmentInfo_iActiveDuration_get(jarg1);
}
void Proxy_CSharp_AkSegmentInfo_iActiveDuration_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkSegmentInfo_iActiveDuration_set(jarg1, jarg2);
}
int Proxy_CSharp_AkSegmentInfo_iCurrentPosition_get(void* jarg1)
{
  return Actual_CSharp_AkSegmentInfo_iCurrentPosition_get(jarg1);
}
void Proxy_CSharp_AkSegmentInfo_iCurrentPosition_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkSegmentInfo_iCurrentPosition_set(jarg1, jarg2);
}
int Proxy_CSharp_AkSegmentInfo_iPostExitDuration_get(void* jarg1)
{
  return Actual_CSharp_AkSegmentInfo_iPostExitDuration_get(jarg1);
}
void Proxy_CSharp_AkSegmentInfo_iPostExitDuration_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkSegmentInfo_iPostExitDuration_set(jarg1, jarg2);
}
int Proxy_CSharp_AkSegmentInfo_iPreEntryDuration_get(void* jarg1)
{
  return Actual_CSharp_AkSegmentInfo_iPreEntryDuration_get(jarg1);
}
void Proxy_CSharp_AkSegmentInfo_iPreEntryDuration_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkSegmentInfo_iPreEntryDuration_set(jarg1, jarg2);
}
int Proxy_CSharp_AkSegmentInfo_iRemainingLookAheadTime_get(void* jarg1)
{
  return Actual_CSharp_AkSegmentInfo_iRemainingLookAheadTime_get(jarg1);
}
void Proxy_CSharp_AkSegmentInfo_iRemainingLookAheadTime_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkSegmentInfo_iRemainingLookAheadTime_set(jarg1, jarg2);
}
int Proxy_CSharp_AkSerializedCallbackHeader_eType_get(void* jarg1)
{
  return Actual_CSharp_AkSerializedCallbackHeader_eType_get(jarg1);
}
void* Proxy_CSharp_AkSerializedCallbackHeader_GetData(void* jarg1)
{
  return Actual_CSharp_AkSerializedCallbackHeader_GetData(jarg1);
}
void* Proxy_CSharp_AkSerializedCallbackHeader_pNext_get(void* jarg1)
{
  return Actual_CSharp_AkSerializedCallbackHeader_pNext_get(jarg1);
}
void* Proxy_CSharp_AkSerializedCallbackHeader_pPackage_get(void* jarg1)
{
  return Actual_CSharp_AkSerializedCallbackHeader_pPackage_get(jarg1);
}
void* Proxy_CSharp_AkSoundPathInfo_imageSource_get(void* jarg1)
{
  return Actual_CSharp_AkSoundPathInfo_imageSource_get(jarg1);
}
void Proxy_CSharp_AkSoundPathInfo_imageSource_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkSoundPathInfo_imageSource_set(jarg1, jarg2);
}
int Proxy_CSharp_AkSoundPathInfo_isOccluded_get(void* jarg1)
{
  return Actual_CSharp_AkSoundPathInfo_isOccluded_get(jarg1);
}
void Proxy_CSharp_AkSoundPathInfo_isOccluded_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkSoundPathInfo_isOccluded_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkSoundPathInfo_numReflections_get(void* jarg1)
{
  return Actual_CSharp_AkSoundPathInfo_numReflections_get(jarg1);
}
void Proxy_CSharp_AkSoundPathInfo_numReflections_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkSoundPathInfo_numReflections_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkSoundPathInfo_occlusionPoint_get(void* jarg1)
{
  return Actual_CSharp_AkSoundPathInfo_occlusionPoint_get(jarg1);
}
void Proxy_CSharp_AkSoundPathInfo_occlusionPoint_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkSoundPathInfo_occlusionPoint_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkSoundPathInfoProxy_GetReflectionPoint(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_AkSoundPathInfoProxy_GetReflectionPoint(jarg1, jarg2);
}
int Proxy_CSharp_AkSoundPathInfoProxy_GetSizeOf()
{
  return Actual_CSharp_AkSoundPathInfoProxy_GetSizeOf();
}
void* Proxy_CSharp_AkSoundPathInfoProxy_GetTriangle(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_AkSoundPathInfoProxy_GetTriangle(jarg1, jarg2);
}
void* Proxy_CSharp_AkSoundPathInfoProxy_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkSoundPathInfoProxy_SWIGUpcast(jarg1);
}
void* Proxy_CSharp_AkSoundPropagationPathParams_emitterPos_get(void* jarg1)
{
  return Actual_CSharp_AkSoundPropagationPathParams_emitterPos_get(jarg1);
}
void Proxy_CSharp_AkSoundPropagationPathParams_emitterPos_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkSoundPropagationPathParams_emitterPos_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkSoundPropagationPathParams_listenerPos_get(void* jarg1)
{
  return Actual_CSharp_AkSoundPropagationPathParams_listenerPos_get(jarg1);
}
void Proxy_CSharp_AkSoundPropagationPathParams_listenerPos_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkSoundPropagationPathParams_listenerPos_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkSoundPropagationPathParams_numValidPaths_get(void* jarg1)
{
  return Actual_CSharp_AkSoundPropagationPathParams_numValidPaths_get(jarg1);
}
void Proxy_CSharp_AkSoundPropagationPathParams_numValidPaths_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkSoundPropagationPathParams_numValidPaths_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkSourceSettings_pMediaMemory_get(void* jarg1)
{
  return Actual_CSharp_AkSourceSettings_pMediaMemory_get(jarg1);
}
void Proxy_CSharp_AkSourceSettings_pMediaMemory_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkSourceSettings_pMediaMemory_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkSourceSettings_sourceID_get(void* jarg1)
{
  return Actual_CSharp_AkSourceSettings_sourceID_get(jarg1);
}
void Proxy_CSharp_AkSourceSettings_sourceID_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkSourceSettings_sourceID_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkSourceSettings_uMediaSize_get(void* jarg1)
{
  return Actual_CSharp_AkSourceSettings_uMediaSize_get(jarg1);
}
void Proxy_CSharp_AkSourceSettings_uMediaSize_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkSourceSettings_uMediaSize_set(jarg1, jarg2);
}
float Proxy_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_get(void* jarg1)
{
  return Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_get(jarg1);
}
void Proxy_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_set(jarg1, jarg2);
}
float Proxy_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_get(void* jarg1)
{
  return Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_get(jarg1);
}
void Proxy_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_get(void* jarg1)
{
  return Actual_CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_get(jarg1);
}
void Proxy_CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_get(void* jarg1)
{
  return Actual_CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_get(jarg1);
}
void Proxy_CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_set(jarg1, jarg2);
}
int Proxy_CSharp_AkSpatialAudioInitSettings_uPoolID_get(void* jarg1)
{
  return Actual_CSharp_AkSpatialAudioInitSettings_uPoolID_get(jarg1);
}
void Proxy_CSharp_AkSpatialAudioInitSettings_uPoolID_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkSpatialAudioInitSettings_uPoolID_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkSpatialAudioInitSettings_uPoolSize_get(void* jarg1)
{
  return Actual_CSharp_AkSpatialAudioInitSettings_uPoolSize_get(jarg1);
}
void Proxy_CSharp_AkSpatialAudioInitSettings_uPoolSize_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkSpatialAudioInitSettings_uPoolSize_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkStreamMgrSettings_uMemorySize_get(void* jarg1)
{
  return Actual_CSharp_AkStreamMgrSettings_uMemorySize_get(jarg1);
}
void Proxy_CSharp_AkStreamMgrSettings_uMemorySize_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkStreamMgrSettings_uMemorySize_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkThreadProperties_dwAffinityMask_get(void* jarg1)
{
  return Actual_CSharp_AkThreadProperties_dwAffinityMask_get(jarg1);
}
void Proxy_CSharp_AkThreadProperties_dwAffinityMask_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkThreadProperties_dwAffinityMask_set(jarg1, jarg2);
}
int Proxy_CSharp_AkThreadProperties_nPriority_get(void* jarg1)
{
  return Actual_CSharp_AkThreadProperties_nPriority_get(jarg1);
}
void Proxy_CSharp_AkThreadProperties_nPriority_set(void* jarg1, int jarg2)
{
  Actual_CSharp_AkThreadProperties_nPriority_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkThreadProperties_uStackSize_get(void* jarg1)
{
  return Actual_CSharp_AkThreadProperties_uStackSize_get(jarg1);
}
void Proxy_CSharp_AkThreadProperties_uStackSize_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkThreadProperties_uStackSize_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkTransform_OrientationFront(void* jarg1)
{
  return Actual_CSharp_AkTransform_OrientationFront(jarg1);
}
void* Proxy_CSharp_AkTransform_OrientationTop(void* jarg1)
{
  return Actual_CSharp_AkTransform_OrientationTop(jarg1);
}
void* Proxy_CSharp_AkTransform_Position(void* jarg1)
{
  return Actual_CSharp_AkTransform_Position(jarg1);
}
void Proxy_CSharp_AkTransform_Set__SWIG_0(void* jarg1, void* jarg2, void* jarg3, void* jarg4)
{
  Actual_CSharp_AkTransform_Set__SWIG_0(jarg1, jarg2, jarg3, jarg4);
}
void Proxy_CSharp_AkTransform_Set__SWIG_1(void* jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7, float jarg8, float jarg9, float jarg10)
{
  Actual_CSharp_AkTransform_Set__SWIG_1(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7, jarg8, jarg9, jarg10);
}
void Proxy_CSharp_AkTransform_SetOrientation__SWIG_0(void* jarg1, void* jarg2, void* jarg3)
{
  Actual_CSharp_AkTransform_SetOrientation__SWIG_0(jarg1, jarg2, jarg3);
}
void Proxy_CSharp_AkTransform_SetOrientation__SWIG_1(void* jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7)
{
  Actual_CSharp_AkTransform_SetOrientation__SWIG_1(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
}
void Proxy_CSharp_AkTransform_SetPosition__SWIG_0(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkTransform_SetPosition__SWIG_0(jarg1, jarg2);
}
void Proxy_CSharp_AkTransform_SetPosition__SWIG_1(void* jarg1, float jarg2, float jarg3, float jarg4)
{
  Actual_CSharp_AkTransform_SetPosition__SWIG_1(jarg1, jarg2, jarg3, jarg4);
}
void* Proxy_CSharp_AkTriangle_point0_get(void* jarg1)
{
  return Actual_CSharp_AkTriangle_point0_get(jarg1);
}
void Proxy_CSharp_AkTriangle_point0_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkTriangle_point0_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkTriangle_point1_get(void* jarg1)
{
  return Actual_CSharp_AkTriangle_point1_get(jarg1);
}
void Proxy_CSharp_AkTriangle_point1_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkTriangle_point1_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkTriangle_point2_get(void* jarg1)
{
  return Actual_CSharp_AkTriangle_point2_get(jarg1);
}
void Proxy_CSharp_AkTriangle_point2_set(void* jarg1, void* jarg2)
{
  Actual_CSharp_AkTriangle_point2_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkTriangle_reflectorChannelMask_get(void* jarg1)
{
  return Actual_CSharp_AkTriangle_reflectorChannelMask_get(jarg1);
}
void Proxy_CSharp_AkTriangle_reflectorChannelMask_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkTriangle_reflectorChannelMask_set(jarg1, jarg2);
}
void* Proxy_CSharp_AkTriangle_strName_get(void* jarg1)
{
  return Actual_CSharp_AkTriangle_strName_get(jarg1);
}
void Proxy_CSharp_AkTriangle_strName_set(void* jarg1, const char* jarg2)
{
  Actual_CSharp_AkTriangle_strName_set(jarg1, jarg2);
}
unsigned Proxy_CSharp_AkTriangle_textureID_get(void* jarg1)
{
  return Actual_CSharp_AkTriangle_textureID_get(jarg1);
}
void Proxy_CSharp_AkTriangle_textureID_set(void* jarg1, unsigned jarg2)
{
  Actual_CSharp_AkTriangle_textureID_set(jarg1, jarg2);
}
void Proxy_CSharp_AkTriangleProxy_Clear(void* jarg1)
{
  Actual_CSharp_AkTriangleProxy_Clear(jarg1);
}
void Proxy_CSharp_AkTriangleProxy_DeleteName(void* jarg1)
{
  Actual_CSharp_AkTriangleProxy_DeleteName(jarg1);
}
int Proxy_CSharp_AkTriangleProxy_GetSizeOf()
{
  return Actual_CSharp_AkTriangleProxy_GetSizeOf();
}
void* Proxy_CSharp_AkTriangleProxy_SWIGUpcast(void* jarg1)
{
  return Actual_CSharp_AkTriangleProxy_SWIGUpcast(jarg1);
}
float Proxy_CSharp_AkVector_X_get(void* jarg1)
{
  return Actual_CSharp_AkVector_X_get(jarg1);
}
void Proxy_CSharp_AkVector_X_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkVector_X_set(jarg1, jarg2);
}
float Proxy_CSharp_AkVector_Y_get(void* jarg1)
{
  return Actual_CSharp_AkVector_Y_get(jarg1);
}
void Proxy_CSharp_AkVector_Y_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkVector_Y_set(jarg1, jarg2);
}
float Proxy_CSharp_AkVector_Z_get(void* jarg1)
{
  return Actual_CSharp_AkVector_Z_get(jarg1);
}
void Proxy_CSharp_AkVector_Z_set(void* jarg1, float jarg2)
{
  Actual_CSharp_AkVector_Z_set(jarg1, jarg2);
}
void Proxy_CSharp_AkVector_Zero(void* jarg1)
{
  Actual_CSharp_AkVector_Zero(jarg1);
}
unsigned Proxy_CSharp_BackToSideChannels(unsigned jarg1)
{
  return Actual_CSharp_BackToSideChannels(jarg1);
}
void Proxy_CSharp_CancelBankCallbackCookie(void* jarg1)
{
  Actual_CSharp_CancelBankCallbackCookie(jarg1);
}
void Proxy_CSharp_CancelEventCallback(unsigned jarg1)
{
  Actual_CSharp_CancelEventCallback(jarg1);
}
void Proxy_CSharp_CancelEventCallbackCookie(void* jarg1)
{
  Actual_CSharp_CancelEventCallbackCookie(jarg1);
}
void Proxy_CSharp_CancelEventCallbackGameObject(uint64_t jarg1)
{
  Actual_CSharp_CancelEventCallbackGameObject(jarg1);
}
uint8_t Proxy_CSharp_ChannelBitToIndex(unsigned jarg1, unsigned jarg2)
{
  return Actual_CSharp_ChannelBitToIndex(jarg1, jarg2);
}
unsigned Proxy_CSharp_ChannelMaskFromNumChannels(unsigned jarg1)
{
  return Actual_CSharp_ChannelMaskFromNumChannels(jarg1);
}
uint8_t Proxy_CSharp_ChannelMaskToNumChannels(unsigned jarg1)
{
  return Actual_CSharp_ChannelMaskToNumChannels(jarg1);
}
int Proxy_CSharp_ClearBanks()
{
  return Actual_CSharp_ClearBanks();
}
int Proxy_CSharp_ClearPreparedEvents()
{
  return Actual_CSharp_ClearPreparedEvents();
}
void Proxy_CSharp_delete__ArrayPoolDefault(void* jarg1)
{
  Actual_CSharp_delete__ArrayPoolDefault(jarg1);
}
void Proxy_CSharp_delete__ArrayPoolLEngineDefault(void* jarg1)
{
  Actual_CSharp_delete__ArrayPoolLEngineDefault(jarg1);
}
void Proxy_CSharp_delete__ArrayPoolSpatialAudio(void* jarg1)
{
  Actual_CSharp_delete__ArrayPoolSpatialAudio(jarg1);
}
void Proxy_CSharp_delete_AkAudioFormat(void* jarg1)
{
  Actual_CSharp_delete_AkAudioFormat(jarg1);
}
void Proxy_CSharp_delete_AkAudioInterruptionCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkAudioInterruptionCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkAudioSettings(void* jarg1)
{
  Actual_CSharp_delete_AkAudioSettings(jarg1);
}
void Proxy_CSharp_delete_AkAudioSourceChangeCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkAudioSourceChangeCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkAuxSendValue(void* jarg1)
{
  Actual_CSharp_delete_AkAuxSendValue(jarg1);
}
void Proxy_CSharp_delete_AkBankCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkBankCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkCallbackSerializer(void* jarg1)
{
  Actual_CSharp_delete_AkCallbackSerializer(jarg1);
}
void Proxy_CSharp_delete_AkChannelConfig(void* jarg1)
{
  Actual_CSharp_delete_AkChannelConfig(jarg1);
}
void Proxy_CSharp_delete_AkChannelEmitter(void* jarg1)
{
  Actual_CSharp_delete_AkChannelEmitter(jarg1);
}
void Proxy_CSharp_delete_AkDeviceSettings(void* jarg1)
{
  Actual_CSharp_delete_AkDeviceSettings(jarg1);
}
void Proxy_CSharp_delete_AkDurationCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkDurationCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkDynamicSequenceItemCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkDynamicSequenceItemCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkEmitterSettings(void* jarg1)
{
  Actual_CSharp_delete_AkEmitterSettings(jarg1);
}
void Proxy_CSharp_delete_AkEventCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkEventCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkExternalSourceInfo(void* jarg1)
{
  Actual_CSharp_delete_AkExternalSourceInfo(jarg1);
}
void Proxy_CSharp_delete_AkImageSourceParams(void* jarg1)
{
  Actual_CSharp_delete_AkImageSourceParams(jarg1);
}
void Proxy_CSharp_delete_AkImageSourceSettings(void* jarg1)
{
  Actual_CSharp_delete_AkImageSourceSettings(jarg1);
}
void Proxy_CSharp_delete_AkInitSettings(void* jarg1)
{
  Actual_CSharp_delete_AkInitSettings(jarg1);
}
void Proxy_CSharp_delete_AkIterator(void* jarg1)
{
  Actual_CSharp_delete_AkIterator(jarg1);
}
void Proxy_CSharp_delete_AkMarkerCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkMarkerCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkMemSettings(void* jarg1)
{
  Actual_CSharp_delete_AkMemSettings(jarg1);
}
void Proxy_CSharp_delete_AkMIDIEvent(void* jarg1)
{
  Actual_CSharp_delete_AkMIDIEvent(jarg1);
}
void Proxy_CSharp_delete_AkMIDIEvent_tCc(void* jarg1)
{
  Actual_CSharp_delete_AkMIDIEvent_tCc(jarg1);
}
void Proxy_CSharp_delete_AkMIDIEvent_tChanAftertouch(void* jarg1)
{
  Actual_CSharp_delete_AkMIDIEvent_tChanAftertouch(jarg1);
}
void Proxy_CSharp_delete_AkMIDIEvent_tGen(void* jarg1)
{
  Actual_CSharp_delete_AkMIDIEvent_tGen(jarg1);
}
void Proxy_CSharp_delete_AkMIDIEvent_tNoteAftertouch(void* jarg1)
{
  Actual_CSharp_delete_AkMIDIEvent_tNoteAftertouch(jarg1);
}
void Proxy_CSharp_delete_AkMIDIEvent_tNoteOnOff(void* jarg1)
{
  Actual_CSharp_delete_AkMIDIEvent_tNoteOnOff(jarg1);
}
void Proxy_CSharp_delete_AkMIDIEvent_tPitchBend(void* jarg1)
{
  Actual_CSharp_delete_AkMIDIEvent_tPitchBend(jarg1);
}
void Proxy_CSharp_delete_AkMIDIEvent_tProgramChange(void* jarg1)
{
  Actual_CSharp_delete_AkMIDIEvent_tProgramChange(jarg1);
}
void Proxy_CSharp_delete_AkMIDIEventCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkMIDIEventCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkMIDIPost(void* jarg1)
{
  Actual_CSharp_delete_AkMIDIPost(jarg1);
}
void Proxy_CSharp_delete_AkMonitoringCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkMonitoringCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkMusicPlaylistCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkMusicPlaylistCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkMusicSettings(void* jarg1)
{
  Actual_CSharp_delete_AkMusicSettings(jarg1);
}
void Proxy_CSharp_delete_AkMusicSyncCallbackInfo(void* jarg1)
{
  Actual_CSharp_delete_AkMusicSyncCallbackInfo(jarg1);
}
void Proxy_CSharp_delete_AkObjectInfo(void* jarg1)
{
  Actual_CSharp_delete_AkObjectInfo(jarg1);
}
void Proxy_CSharp_delete_AkObstructionOcclusionValues(void* jarg1)
{
  Actual_CSharp_delete_AkObstructionOcclusionValues(jarg1);
}
void Proxy_CSharp_delete_AkOutputSettings(void* jarg1)
{
  Actual_CSharp_delete_AkOutputSettings(jarg1);
}
void Proxy_CSharp_delete_AkPlatformInitSettings(void* jarg1)
{
  Actual_CSharp_delete_AkPlatformInitSettings(jarg1);
}
void Proxy_CSharp_delete_AkPlaylist(void* jarg1)
{
  Actual_CSharp_delete_AkPlaylist(jarg1);
}
void Proxy_CSharp_delete_AkPlaylistArray(void* jarg1)
{
  Actual_CSharp_delete_AkPlaylistArray(jarg1);
}
void Proxy_CSharp_delete_AkPlaylistItem(void* jarg1)
{
  Actual_CSharp_delete_AkPlaylistItem(jarg1);
}
void Proxy_CSharp_delete_AkPositioningInfo(void* jarg1)
{
  Actual_CSharp_delete_AkPositioningInfo(jarg1);
}
void Proxy_CSharp_delete_AkPropagationPathInfo(void* jarg1)
{
  Actual_CSharp_delete_AkPropagationPathInfo(jarg1);
}
void Proxy_CSharp_delete_AkPropagationPathInfoProxy(void* jarg1)
{
  Actual_CSharp_delete_AkPropagationPathInfoProxy(jarg1);
}
void Proxy_CSharp_delete_AkRamp(void* jarg1)
{
  Actual_CSharp_delete_AkRamp(jarg1);
}
void Proxy_CSharp_delete_AkRoomParams(void* jarg1)
{
  Actual_CSharp_delete_AkRoomParams(jarg1);
}
void Proxy_CSharp_delete_AkSegmentInfo(void* jarg1)
{
  Actual_CSharp_delete_AkSegmentInfo(jarg1);
}
void Proxy_CSharp_delete_AkSerializedCallbackHeader(void* jarg1)
{
  Actual_CSharp_delete_AkSerializedCallbackHeader(jarg1);
}
void Proxy_CSharp_delete_AkSoundPathInfo(void* jarg1)
{
  Actual_CSharp_delete_AkSoundPathInfo(jarg1);
}
void Proxy_CSharp_delete_AkSoundPathInfoProxy(void* jarg1)
{
  Actual_CSharp_delete_AkSoundPathInfoProxy(jarg1);
}
void Proxy_CSharp_delete_AkSoundPropagationPathParams(void* jarg1)
{
  Actual_CSharp_delete_AkSoundPropagationPathParams(jarg1);
}
void Proxy_CSharp_delete_AkSourceSettings(void* jarg1)
{
  Actual_CSharp_delete_AkSourceSettings(jarg1);
}
void Proxy_CSharp_delete_AkSpatialAudioInitSettings(void* jarg1)
{
  Actual_CSharp_delete_AkSpatialAudioInitSettings(jarg1);
}
void Proxy_CSharp_delete_AkStreamMgrSettings(void* jarg1)
{
  Actual_CSharp_delete_AkStreamMgrSettings(jarg1);
}
void Proxy_CSharp_delete_AkThreadProperties(void* jarg1)
{
  Actual_CSharp_delete_AkThreadProperties(jarg1);
}
void Proxy_CSharp_delete_AkTransform(void* jarg1)
{
  Actual_CSharp_delete_AkTransform(jarg1);
}
void Proxy_CSharp_delete_AkTriangle(void* jarg1)
{
  Actual_CSharp_delete_AkTriangle(jarg1);
}
void Proxy_CSharp_delete_AkTriangleProxy(void* jarg1)
{
  Actual_CSharp_delete_AkTriangleProxy(jarg1);
}
void Proxy_CSharp_delete_AkVector(void* jarg1)
{
  Actual_CSharp_delete_AkVector(jarg1);
}
int Proxy_CSharp_DynamicSequenceBreak(unsigned jarg1)
{
  return Actual_CSharp_DynamicSequenceBreak(jarg1);
}
int Proxy_CSharp_DynamicSequenceClose(unsigned jarg1)
{
  return Actual_CSharp_DynamicSequenceClose(jarg1);
}
int Proxy_CSharp_DynamicSequenceGetPauseTimes(unsigned jarg1, unsigned& jarg2, unsigned& jarg3)
{
  return Actual_CSharp_DynamicSequenceGetPauseTimes(jarg1, jarg2, jarg3);
}
void* Proxy_CSharp_DynamicSequenceLockPlaylist(unsigned jarg1)
{
  return Actual_CSharp_DynamicSequenceLockPlaylist(jarg1);
}
unsigned Proxy_CSharp_DynamicSequenceOpen__SWIG_0(uint64_t jarg1, unsigned jarg2, void* jarg3, void* jarg4, int jarg5)
{
  return Actual_CSharp_DynamicSequenceOpen__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5);
}
unsigned Proxy_CSharp_DynamicSequenceOpen__SWIG_1(uint64_t jarg1, unsigned jarg2, void* jarg3, void* jarg4)
{
  return Actual_CSharp_DynamicSequenceOpen__SWIG_1(jarg1, jarg2, jarg3, jarg4);
}
unsigned Proxy_CSharp_DynamicSequenceOpen__SWIG_2(uint64_t jarg1, unsigned jarg2)
{
  return Actual_CSharp_DynamicSequenceOpen__SWIG_2(jarg1, jarg2);
}
unsigned Proxy_CSharp_DynamicSequenceOpen__SWIG_3(uint64_t jarg1)
{
  return Actual_CSharp_DynamicSequenceOpen__SWIG_3(jarg1);
}
int Proxy_CSharp_DynamicSequencePause__SWIG_0(unsigned jarg1, int jarg2, int jarg3)
{
  return Actual_CSharp_DynamicSequencePause__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_DynamicSequencePause__SWIG_1(unsigned jarg1, int jarg2)
{
  return Actual_CSharp_DynamicSequencePause__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_DynamicSequencePause__SWIG_2(unsigned jarg1)
{
  return Actual_CSharp_DynamicSequencePause__SWIG_2(jarg1);
}
int Proxy_CSharp_DynamicSequencePlay__SWIG_0(unsigned jarg1, int jarg2, int jarg3)
{
  return Actual_CSharp_DynamicSequencePlay__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_DynamicSequencePlay__SWIG_1(unsigned jarg1, int jarg2)
{
  return Actual_CSharp_DynamicSequencePlay__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_DynamicSequencePlay__SWIG_2(unsigned jarg1)
{
  return Actual_CSharp_DynamicSequencePlay__SWIG_2(jarg1);
}
int Proxy_CSharp_DynamicSequenceResume__SWIG_0(unsigned jarg1, int jarg2, int jarg3)
{
  return Actual_CSharp_DynamicSequenceResume__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_DynamicSequenceResume__SWIG_1(unsigned jarg1, int jarg2)
{
  return Actual_CSharp_DynamicSequenceResume__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_DynamicSequenceResume__SWIG_2(unsigned jarg1)
{
  return Actual_CSharp_DynamicSequenceResume__SWIG_2(jarg1);
}
int Proxy_CSharp_DynamicSequenceStop__SWIG_0(unsigned jarg1, int jarg2, int jarg3)
{
  return Actual_CSharp_DynamicSequenceStop__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_DynamicSequenceStop__SWIG_1(unsigned jarg1, int jarg2)
{
  return Actual_CSharp_DynamicSequenceStop__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_DynamicSequenceStop__SWIG_2(unsigned jarg1)
{
  return Actual_CSharp_DynamicSequenceStop__SWIG_2(jarg1);
}
int Proxy_CSharp_DynamicSequenceUnlockPlaylist(unsigned jarg1)
{
  return Actual_CSharp_DynamicSequenceUnlockPlaylist(jarg1);
}
int Proxy_CSharp_ExecuteActionOnEvent__SWIG_0(unsigned jarg1, int jarg2, uint64_t jarg3, int jarg4, int jarg5, unsigned jarg6)
{
  return Actual_CSharp_ExecuteActionOnEvent__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_ExecuteActionOnEvent__SWIG_1(unsigned jarg1, int jarg2, uint64_t jarg3, int jarg4, int jarg5)
{
  return Actual_CSharp_ExecuteActionOnEvent__SWIG_1(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_ExecuteActionOnEvent__SWIG_2(unsigned jarg1, int jarg2, uint64_t jarg3, int jarg4)
{
  return Actual_CSharp_ExecuteActionOnEvent__SWIG_2(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_ExecuteActionOnEvent__SWIG_3(unsigned jarg1, int jarg2, uint64_t jarg3)
{
  return Actual_CSharp_ExecuteActionOnEvent__SWIG_3(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_ExecuteActionOnEvent__SWIG_4(unsigned jarg1, int jarg2)
{
  return Actual_CSharp_ExecuteActionOnEvent__SWIG_4(jarg1, jarg2);
}
int Proxy_CSharp_ExecuteActionOnEvent__SWIG_5(const wchar_t* jarg1, int jarg2, uint64_t jarg3, int jarg4, int jarg5, unsigned jarg6)
{
  return Actual_CSharp_ExecuteActionOnEvent__SWIG_5(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_ExecuteActionOnEvent__SWIG_6(const wchar_t* jarg1, int jarg2, uint64_t jarg3, int jarg4, int jarg5)
{
  return Actual_CSharp_ExecuteActionOnEvent__SWIG_6(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_ExecuteActionOnEvent__SWIG_7(const wchar_t* jarg1, int jarg2, uint64_t jarg3, int jarg4)
{
  return Actual_CSharp_ExecuteActionOnEvent__SWIG_7(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_ExecuteActionOnEvent__SWIG_8(const wchar_t* jarg1, int jarg2, uint64_t jarg3)
{
  return Actual_CSharp_ExecuteActionOnEvent__SWIG_8(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_ExecuteActionOnEvent__SWIG_9(const wchar_t* jarg1, int jarg2)
{
  return Actual_CSharp_ExecuteActionOnEvent__SWIG_9(jarg1, jarg2);
}
int Proxy_CSharp_g_SpatialAudioPoolId_get()
{
  return Actual_CSharp_g_SpatialAudioPoolId_get();
}
void Proxy_CSharp_g_SpatialAudioPoolId_set(int jarg1)
{
  Actual_CSharp_g_SpatialAudioPoolId_set(jarg1);
}
int Proxy_CSharp_GetAudioSettings(void* jarg1)
{
  return Actual_CSharp_GetAudioSettings(jarg1);
}
int Proxy_CSharp_GetBackgroundMusicMute()
{
  return Actual_CSharp_GetBackgroundMusicMute();
}
int Proxy_CSharp_GetBufferStatusForPinnedEvent__SWIG_0(unsigned jarg1, float& jarg2, int& jarg3)
{
  return Actual_CSharp_GetBufferStatusForPinnedEvent__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_GetBufferStatusForPinnedEvent__SWIG_1(const char* jarg1, float& jarg2, int& jarg3)
{
  return Actual_CSharp_GetBufferStatusForPinnedEvent__SWIG_1(jarg1, jarg2, jarg3);
}
unsigned Proxy_CSharp_GetBufferTick()
{
  return Actual_CSharp_GetBufferTick();
}
void* Proxy_CSharp_GetCurrentLanguage()
{
  return Actual_CSharp_GetCurrentLanguage();
}
int Proxy_CSharp_GetCustomPropertyValue__SWIG_0(unsigned jarg1, unsigned jarg2, int& jarg3)
{
  return Actual_CSharp_GetCustomPropertyValue__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_GetCustomPropertyValue__SWIG_1(unsigned jarg1, unsigned jarg2, float& jarg3)
{
  return Actual_CSharp_GetCustomPropertyValue__SWIG_1(jarg1, jarg2, jarg3);
}
void Proxy_CSharp_GetDefaultDeviceSettings(void* jarg1)
{
  Actual_CSharp_GetDefaultDeviceSettings(jarg1);
}
void Proxy_CSharp_GetDefaultInitSettings(void* jarg1)
{
  Actual_CSharp_GetDefaultInitSettings(jarg1);
}
void Proxy_CSharp_GetDefaultMusicSettings(void* jarg1)
{
  Actual_CSharp_GetDefaultMusicSettings(jarg1);
}
void Proxy_CSharp_GetDefaultPlatformInitSettings(void* jarg1)
{
  Actual_CSharp_GetDefaultPlatformInitSettings(jarg1);
}
void Proxy_CSharp_GetDefaultStreamSettings(void* jarg1)
{
  Actual_CSharp_GetDefaultStreamSettings(jarg1);
}
unsigned Proxy_CSharp_GetDeviceIDFromName(const wchar_t* jarg1)
{
  return Actual_CSharp_GetDeviceIDFromName(jarg1);
}
int Proxy_CSharp_GetDialogueEventCustomPropertyValue__SWIG_0(unsigned jarg1, unsigned jarg2, int& jarg3)
{
  return Actual_CSharp_GetDialogueEventCustomPropertyValue__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_GetDialogueEventCustomPropertyValue__SWIG_1(unsigned jarg1, unsigned jarg2, float& jarg3)
{
  return Actual_CSharp_GetDialogueEventCustomPropertyValue__SWIG_1(jarg1, jarg2, jarg3);
}
unsigned Proxy_CSharp_GetEventIDFromPlayingID(unsigned jarg1)
{
  return Actual_CSharp_GetEventIDFromPlayingID(jarg1);
}
int Proxy_CSharp_GetGameObjectAuxSendValues(uint64_t jarg1, void* jarg2, unsigned& jarg3)
{
  return Actual_CSharp_GetGameObjectAuxSendValues(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_GetGameObjectDryLevelValue(uint64_t jarg1, uint64_t jarg2, float& jarg3)
{
  return Actual_CSharp_GetGameObjectDryLevelValue(jarg1, jarg2, jarg3);
}
uint64_t Proxy_CSharp_GetGameObjectFromPlayingID(unsigned jarg1)
{
  return Actual_CSharp_GetGameObjectFromPlayingID(jarg1);
}
unsigned Proxy_CSharp_GetIDFromString__SWIG_0(const wchar_t* jarg1)
{
  return Actual_CSharp_GetIDFromString__SWIG_0(jarg1);
}
int Proxy_CSharp_GetIsGameObjectActive(uint64_t jarg1)
{
  return Actual_CSharp_GetIsGameObjectActive(jarg1);
}
int Proxy_CSharp_GetListenerPosition(uint64_t jarg1, void* jarg2)
{
  return Actual_CSharp_GetListenerPosition(jarg1, jarg2);
}
unsigned Proxy_CSharp_GetMajorMinorVersion()
{
  return Actual_CSharp_GetMajorMinorVersion();
}
float Proxy_CSharp_GetMaxRadius(uint64_t jarg1)
{
  return Actual_CSharp_GetMaxRadius(jarg1);
}
unsigned Proxy_CSharp_GetNumNonZeroBits(unsigned jarg1)
{
  return Actual_CSharp_GetNumNonZeroBits(jarg1);
}
int Proxy_CSharp_GetObjectObstructionAndOcclusion(uint64_t jarg1, uint64_t jarg2, float& jarg3, float& jarg4)
{
  return Actual_CSharp_GetObjectObstructionAndOcclusion(jarg1, jarg2, jarg3, jarg4);
}
uint64_t Proxy_CSharp_GetOutputID__SWIG_0(unsigned jarg1, unsigned jarg2)
{
  return Actual_CSharp_GetOutputID__SWIG_0(jarg1, jarg2);
}
uint64_t Proxy_CSharp_GetOutputID__SWIG_1(const char* jarg1, unsigned jarg2)
{
  return Actual_CSharp_GetOutputID__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_GetPanningRule__SWIG_0(int& jarg1, uint64_t jarg2)
{
  return Actual_CSharp_GetPanningRule__SWIG_0(jarg1, jarg2);
}
int Proxy_CSharp_GetPanningRule__SWIG_1(int& jarg1)
{
  return Actual_CSharp_GetPanningRule__SWIG_1(jarg1);
}
int Proxy_CSharp_GetPlayingIDsFromGameObject(uint64_t jarg1, unsigned& jarg2, unsigned* jarg3)
{
  return Actual_CSharp_GetPlayingIDsFromGameObject(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_GetPlayingSegmentInfo__SWIG_0(unsigned jarg1, void* jarg2, int jarg3)
{
  return Actual_CSharp_GetPlayingSegmentInfo__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_GetPlayingSegmentInfo__SWIG_1(unsigned jarg1, void* jarg2)
{
  return Actual_CSharp_GetPlayingSegmentInfo__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_GetPoolID()
{
  return Actual_CSharp_GetPoolID();
}
int Proxy_CSharp_GetPosition(uint64_t jarg1, void* jarg2)
{
  return Actual_CSharp_GetPosition(jarg1, jarg2);
}
int Proxy_CSharp_GetPositioningInfo(unsigned jarg1, void* jarg2)
{
  return Actual_CSharp_GetPositioningInfo(jarg1, jarg2);
}
int Proxy_CSharp_GetRTPCValue__SWIG_0(unsigned jarg1, uint64_t jarg2, unsigned jarg3, float& jarg4, int& jarg5)
{
  return Actual_CSharp_GetRTPCValue__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_GetRTPCValue__SWIG_1(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3, float& jarg4, int& jarg5)
{
  return Actual_CSharp_GetRTPCValue__SWIG_1(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_GetSourceMultiplePlayPositions(unsigned jarg1, unsigned* jarg2, unsigned* jarg3, int* jarg4, unsigned& jarg5, int jarg6)
{
  return Actual_CSharp_GetSourceMultiplePlayPositions(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_GetSourcePlayPosition__SWIG_0(unsigned jarg1, int& jarg2, int jarg3)
{
  return Actual_CSharp_GetSourcePlayPosition__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_GetSourcePlayPosition__SWIG_1(unsigned jarg1, int& jarg2)
{
  return Actual_CSharp_GetSourcePlayPosition__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_GetSourceStreamBuffering(unsigned jarg1, int& jarg2, int& jarg3)
{
  return Actual_CSharp_GetSourceStreamBuffering(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_GetSpeakerAngles__SWIG_0(float* jarg1, unsigned& jarg2, float& jarg3, uint64_t jarg4)
{
  return Actual_CSharp_GetSpeakerAngles__SWIG_0(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_GetSpeakerAngles__SWIG_1(float* jarg1, unsigned& jarg2, float& jarg3)
{
  return Actual_CSharp_GetSpeakerAngles__SWIG_1(jarg1, jarg2, jarg3);
}
void* Proxy_CSharp_GetSpeakerConfiguration__SWIG_0(uint64_t jarg1)
{
  return Actual_CSharp_GetSpeakerConfiguration__SWIG_0(jarg1);
}
void* Proxy_CSharp_GetSpeakerConfiguration__SWIG_1()
{
  return Actual_CSharp_GetSpeakerConfiguration__SWIG_1();
}
int Proxy_CSharp_GetState__SWIG_0(unsigned jarg1, unsigned& jarg2)
{
  return Actual_CSharp_GetState__SWIG_0(jarg1, jarg2);
}
int Proxy_CSharp_GetState__SWIG_1(const wchar_t* jarg1, unsigned& jarg2)
{
  return Actual_CSharp_GetState__SWIG_1(jarg1, jarg2);
}
unsigned Proxy_CSharp_GetSubminorBuildVersion()
{
  return Actual_CSharp_GetSubminorBuildVersion();
}
int Proxy_CSharp_GetSwitch__SWIG_0(unsigned jarg1, uint64_t jarg2, unsigned& jarg3)
{
  return Actual_CSharp_GetSwitch__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_GetSwitch__SWIG_1(const wchar_t* jarg1, uint64_t jarg2, unsigned& jarg3)
{
  return Actual_CSharp_GetSwitch__SWIG_1(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_GetTimeStamp()
{
  return Actual_CSharp_GetTimeStamp();
}
void* Proxy_CSharp_GetWindowsDeviceName(int jarg1, unsigned& jarg2)
{
  return Actual_CSharp_GetWindowsDeviceName(jarg1, jarg2);
}
int Proxy_CSharp_HasHeightChannels(unsigned jarg1)
{
  return Actual_CSharp_HasHeightChannels(jarg1);
}
int Proxy_CSharp_HasSideAndRearChannels(unsigned jarg1)
{
  return Actual_CSharp_HasSideAndRearChannels(jarg1);
}
int Proxy_CSharp_HasStrictlyOnePairOfSurroundChannels(unsigned jarg1)
{
  return Actual_CSharp_HasStrictlyOnePairOfSurroundChannels(jarg1);
}
int Proxy_CSharp_HasSurroundChannels(unsigned jarg1)
{
  return Actual_CSharp_HasSurroundChannels(jarg1);
}
int Proxy_CSharp_Init(void* jarg1, void* jarg2, void* jarg3, void* jarg4, void* jarg5, void* jarg6, void* jarg7, unsigned jarg8)
{
  return Actual_CSharp_Init(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7, jarg8);
}
int Proxy_CSharp_IsInitialized()
{
  return Actual_CSharp_IsInitialized();
}
float Proxy_CSharp_kDefaultMaxPathLength_get()
{
  return Actual_CSharp_kDefaultMaxPathLength_get();
}
int Proxy_CSharp_LoadAndDecodeBank(const wchar_t* jarg1, int jarg2, unsigned& jarg3)
{
  return Actual_CSharp_LoadAndDecodeBank(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_LoadAndDecodeBankFromMemory(void* jarg1, unsigned jarg2, int jarg3, const wchar_t* jarg4, int jarg5, unsigned& jarg6)
{
  return Actual_CSharp_LoadAndDecodeBankFromMemory(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_LoadBank__SWIG_0(const wchar_t* jarg1, int jarg2, unsigned& jarg3)
{
  return Actual_CSharp_LoadBank__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_LoadBank__SWIG_1(unsigned jarg1, int jarg2)
{
  return Actual_CSharp_LoadBank__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_LoadBank__SWIG_2(void* jarg1, unsigned jarg2, unsigned& jarg3)
{
  return Actual_CSharp_LoadBank__SWIG_2(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_LoadBank__SWIG_3(void* jarg1, unsigned jarg2, int jarg3, unsigned& jarg4)
{
  return Actual_CSharp_LoadBank__SWIG_3(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_LoadBank__SWIG_4(const wchar_t* jarg1, void* jarg2, void* jarg3, int jarg4, unsigned& jarg5)
{
  return Actual_CSharp_LoadBank__SWIG_4(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_LoadBank__SWIG_5(unsigned jarg1, void* jarg2, void* jarg3, int jarg4)
{
  return Actual_CSharp_LoadBank__SWIG_5(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_LoadBank__SWIG_6(void* jarg1, unsigned jarg2, void* jarg3, void* jarg4, unsigned& jarg5)
{
  return Actual_CSharp_LoadBank__SWIG_6(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_LoadBank__SWIG_7(void* jarg1, unsigned jarg2, void* jarg3, void* jarg4, int jarg5, unsigned& jarg6)
{
  return Actual_CSharp_LoadBank__SWIG_7(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_LoadFilePackage(const wchar_t* jarg1, unsigned& jarg2, int jarg3)
{
  return Actual_CSharp_LoadFilePackage(jarg1, jarg2, jarg3);
}
void Proxy_CSharp_MuteBackgroundMusic(int jarg1)
{
  Actual_CSharp_MuteBackgroundMusic(jarg1);
}
void* Proxy_CSharp_new__ArrayPoolDefault()
{
  return Actual_CSharp_new__ArrayPoolDefault();
}
void* Proxy_CSharp_new__ArrayPoolLEngineDefault()
{
  return Actual_CSharp_new__ArrayPoolLEngineDefault();
}
void* Proxy_CSharp_new__ArrayPoolSpatialAudio()
{
  return Actual_CSharp_new__ArrayPoolSpatialAudio();
}
void* Proxy_CSharp_new_AkAudioFormat()
{
  return Actual_CSharp_new_AkAudioFormat();
}
void* Proxy_CSharp_new_AkAudioInterruptionCallbackInfo()
{
  return Actual_CSharp_new_AkAudioInterruptionCallbackInfo();
}
void* Proxy_CSharp_new_AkAudioSettings()
{
  return Actual_CSharp_new_AkAudioSettings();
}
void* Proxy_CSharp_new_AkAudioSourceChangeCallbackInfo()
{
  return Actual_CSharp_new_AkAudioSourceChangeCallbackInfo();
}
void* Proxy_CSharp_new_AkBankCallbackInfo()
{
  return Actual_CSharp_new_AkBankCallbackInfo();
}
void* Proxy_CSharp_new_AkCallbackInfo()
{
  return Actual_CSharp_new_AkCallbackInfo();
}
void* Proxy_CSharp_new_AkCallbackSerializer()
{
  return Actual_CSharp_new_AkCallbackSerializer();
}
void* Proxy_CSharp_new_AkChannelConfig__SWIG_0()
{
  return Actual_CSharp_new_AkChannelConfig__SWIG_0();
}
void* Proxy_CSharp_new_AkChannelConfig__SWIG_1(unsigned jarg1, unsigned jarg2)
{
  return Actual_CSharp_new_AkChannelConfig__SWIG_1(jarg1, jarg2);
}
void* Proxy_CSharp_new_AkChannelEmitter()
{
  return Actual_CSharp_new_AkChannelEmitter();
}
void* Proxy_CSharp_new_AkDeviceSettings()
{
  return Actual_CSharp_new_AkDeviceSettings();
}
void* Proxy_CSharp_new_AkDurationCallbackInfo()
{
  return Actual_CSharp_new_AkDurationCallbackInfo();
}
void* Proxy_CSharp_new_AkDynamicSequenceItemCallbackInfo()
{
  return Actual_CSharp_new_AkDynamicSequenceItemCallbackInfo();
}
void* Proxy_CSharp_new_AkEmitterSettings()
{
  return Actual_CSharp_new_AkEmitterSettings();
}
void* Proxy_CSharp_new_AkEventCallbackInfo()
{
  return Actual_CSharp_new_AkEventCallbackInfo();
}
void* Proxy_CSharp_new_AkExternalSourceInfo__SWIG_0()
{
  return Actual_CSharp_new_AkExternalSourceInfo__SWIG_0();
}
void* Proxy_CSharp_new_AkExternalSourceInfo__SWIG_1(void* jarg1, unsigned jarg2, unsigned jarg3, unsigned jarg4)
{
  return Actual_CSharp_new_AkExternalSourceInfo__SWIG_1(jarg1, jarg2, jarg3, jarg4);
}
void* Proxy_CSharp_new_AkExternalSourceInfo__SWIG_2(const wchar_t* jarg1, unsigned jarg2, unsigned jarg3)
{
  return Actual_CSharp_new_AkExternalSourceInfo__SWIG_2(jarg1, jarg2, jarg3);
}
void* Proxy_CSharp_new_AkExternalSourceInfo__SWIG_3(unsigned jarg1, unsigned jarg2, unsigned jarg3)
{
  return Actual_CSharp_new_AkExternalSourceInfo__SWIG_3(jarg1, jarg2, jarg3);
}
void* Proxy_CSharp_new_AkImageSourceParams__SWIG_0()
{
  return Actual_CSharp_new_AkImageSourceParams__SWIG_0();
}
void* Proxy_CSharp_new_AkImageSourceParams__SWIG_1(void* jarg1, float jarg2, float jarg3)
{
  return Actual_CSharp_new_AkImageSourceParams__SWIG_1(jarg1, jarg2, jarg3);
}
void* Proxy_CSharp_new_AkImageSourceSettings__SWIG_0()
{
  return Actual_CSharp_new_AkImageSourceSettings__SWIG_0();
}
void* Proxy_CSharp_new_AkImageSourceSettings__SWIG_1(void* jarg1, float jarg2, float jarg3)
{
  return Actual_CSharp_new_AkImageSourceSettings__SWIG_1(jarg1, jarg2, jarg3);
}
void* Proxy_CSharp_new_AkInitSettings()
{
  return Actual_CSharp_new_AkInitSettings();
}
void* Proxy_CSharp_new_AkIterator()
{
  return Actual_CSharp_new_AkIterator();
}
void* Proxy_CSharp_new_AkMarkerCallbackInfo()
{
  return Actual_CSharp_new_AkMarkerCallbackInfo();
}
void* Proxy_CSharp_new_AkMemSettings()
{
  return Actual_CSharp_new_AkMemSettings();
}
void* Proxy_CSharp_new_AkMIDIEvent()
{
  return Actual_CSharp_new_AkMIDIEvent();
}
void* Proxy_CSharp_new_AkMIDIEvent_tCc()
{
  return Actual_CSharp_new_AkMIDIEvent_tCc();
}
void* Proxy_CSharp_new_AkMIDIEvent_tChanAftertouch()
{
  return Actual_CSharp_new_AkMIDIEvent_tChanAftertouch();
}
void* Proxy_CSharp_new_AkMIDIEvent_tGen()
{
  return Actual_CSharp_new_AkMIDIEvent_tGen();
}
void* Proxy_CSharp_new_AkMIDIEvent_tNoteAftertouch()
{
  return Actual_CSharp_new_AkMIDIEvent_tNoteAftertouch();
}
void* Proxy_CSharp_new_AkMIDIEvent_tNoteOnOff()
{
  return Actual_CSharp_new_AkMIDIEvent_tNoteOnOff();
}
void* Proxy_CSharp_new_AkMIDIEvent_tPitchBend()
{
  return Actual_CSharp_new_AkMIDIEvent_tPitchBend();
}
void* Proxy_CSharp_new_AkMIDIEvent_tProgramChange()
{
  return Actual_CSharp_new_AkMIDIEvent_tProgramChange();
}
void* Proxy_CSharp_new_AkMIDIEventCallbackInfo()
{
  return Actual_CSharp_new_AkMIDIEventCallbackInfo();
}
void* Proxy_CSharp_new_AkMIDIPost()
{
  return Actual_CSharp_new_AkMIDIPost();
}
void* Proxy_CSharp_new_AkMonitoringCallbackInfo()
{
  return Actual_CSharp_new_AkMonitoringCallbackInfo();
}
void* Proxy_CSharp_new_AkMusicPlaylistCallbackInfo()
{
  return Actual_CSharp_new_AkMusicPlaylistCallbackInfo();
}
void* Proxy_CSharp_new_AkMusicSettings()
{
  return Actual_CSharp_new_AkMusicSettings();
}
void* Proxy_CSharp_new_AkMusicSyncCallbackInfo()
{
  return Actual_CSharp_new_AkMusicSyncCallbackInfo();
}
void* Proxy_CSharp_new_AkObjectInfo()
{
  return Actual_CSharp_new_AkObjectInfo();
}
void* Proxy_CSharp_new_AkObstructionOcclusionValues()
{
  return Actual_CSharp_new_AkObstructionOcclusionValues();
}
void* Proxy_CSharp_new_AkOutputSettings__SWIG_0()
{
  return Actual_CSharp_new_AkOutputSettings__SWIG_0();
}
void* Proxy_CSharp_new_AkOutputSettings__SWIG_1(const char* jarg1, unsigned jarg2, void* jarg3, int jarg4)
{
  return Actual_CSharp_new_AkOutputSettings__SWIG_1(jarg1, jarg2, jarg3, jarg4);
}
void* Proxy_CSharp_new_AkOutputSettings__SWIG_2(const char* jarg1, unsigned jarg2, void* jarg3)
{
  return Actual_CSharp_new_AkOutputSettings__SWIG_2(jarg1, jarg2, jarg3);
}
void* Proxy_CSharp_new_AkOutputSettings__SWIG_3(const char* jarg1, unsigned jarg2)
{
  return Actual_CSharp_new_AkOutputSettings__SWIG_3(jarg1, jarg2);
}
void* Proxy_CSharp_new_AkOutputSettings__SWIG_4(const char* jarg1)
{
  return Actual_CSharp_new_AkOutputSettings__SWIG_4(jarg1);
}
void* Proxy_CSharp_new_AkPlatformInitSettings()
{
  return Actual_CSharp_new_AkPlatformInitSettings();
}
void* Proxy_CSharp_new_AkPlaylist()
{
  return Actual_CSharp_new_AkPlaylist();
}
void* Proxy_CSharp_new_AkPlaylistArray()
{
  return Actual_CSharp_new_AkPlaylistArray();
}
void* Proxy_CSharp_new_AkPlaylistItem__SWIG_0()
{
  return Actual_CSharp_new_AkPlaylistItem__SWIG_0();
}
void* Proxy_CSharp_new_AkPlaylistItem__SWIG_1(void* jarg1)
{
  return Actual_CSharp_new_AkPlaylistItem__SWIG_1(jarg1);
}
void* Proxy_CSharp_new_AkPositioningInfo()
{
  return Actual_CSharp_new_AkPositioningInfo();
}
void* Proxy_CSharp_new_AkPropagationPathInfo()
{
  return Actual_CSharp_new_AkPropagationPathInfo();
}
void* Proxy_CSharp_new_AkPropagationPathInfoProxy()
{
  return Actual_CSharp_new_AkPropagationPathInfoProxy();
}
void* Proxy_CSharp_new_AkRamp__SWIG_0()
{
  return Actual_CSharp_new_AkRamp__SWIG_0();
}
void* Proxy_CSharp_new_AkRamp__SWIG_1(float jarg1, float jarg2)
{
  return Actual_CSharp_new_AkRamp__SWIG_1(jarg1, jarg2);
}
void* Proxy_CSharp_new_AkRoomParams()
{
  return Actual_CSharp_new_AkRoomParams();
}
void* Proxy_CSharp_new_AkSegmentInfo()
{
  return Actual_CSharp_new_AkSegmentInfo();
}
void* Proxy_CSharp_new_AkSerializedCallbackHeader()
{
  return Actual_CSharp_new_AkSerializedCallbackHeader();
}
void* Proxy_CSharp_new_AkSoundPathInfo()
{
  return Actual_CSharp_new_AkSoundPathInfo();
}
void* Proxy_CSharp_new_AkSoundPathInfoProxy()
{
  return Actual_CSharp_new_AkSoundPathInfoProxy();
}
void* Proxy_CSharp_new_AkSoundPropagationPathParams()
{
  return Actual_CSharp_new_AkSoundPropagationPathParams();
}
void* Proxy_CSharp_new_AkSourceSettings()
{
  return Actual_CSharp_new_AkSourceSettings();
}
void* Proxy_CSharp_new_AkSpatialAudioInitSettings()
{
  return Actual_CSharp_new_AkSpatialAudioInitSettings();
}
void* Proxy_CSharp_new_AkStreamMgrSettings()
{
  return Actual_CSharp_new_AkStreamMgrSettings();
}
void* Proxy_CSharp_new_AkThreadProperties()
{
  return Actual_CSharp_new_AkThreadProperties();
}
void* Proxy_CSharp_new_AkTransform()
{
  return Actual_CSharp_new_AkTransform();
}
void* Proxy_CSharp_new_AkTriangle()
{
  return Actual_CSharp_new_AkTriangle();
}
void* Proxy_CSharp_new_AkTriangleProxy()
{
  return Actual_CSharp_new_AkTriangleProxy();
}
void* Proxy_CSharp_new_AkVector()
{
  return Actual_CSharp_new_AkVector();
}
int Proxy_CSharp_PinEventInStreamCache__SWIG_0(unsigned jarg1, wchar_t jarg2, wchar_t jarg3)
{
  return Actual_CSharp_PinEventInStreamCache__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_PinEventInStreamCache__SWIG_1(const wchar_t* jarg1, wchar_t jarg2, wchar_t jarg3)
{
  return Actual_CSharp_PinEventInStreamCache__SWIG_1(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_PostCode__SWIG_0(int jarg1, int jarg2, unsigned jarg3, uint64_t jarg4, unsigned jarg5, int jarg6)
{
  return Actual_CSharp_PostCode__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_PostCode__SWIG_1(int jarg1, int jarg2, unsigned jarg3, uint64_t jarg4, unsigned jarg5)
{
  return Actual_CSharp_PostCode__SWIG_1(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_PostCode__SWIG_2(int jarg1, int jarg2, unsigned jarg3, uint64_t jarg4)
{
  return Actual_CSharp_PostCode__SWIG_2(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_PostCode__SWIG_3(int jarg1, int jarg2, unsigned jarg3)
{
  return Actual_CSharp_PostCode__SWIG_3(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_PostCode__SWIG_4(int jarg1, int jarg2)
{
  return Actual_CSharp_PostCode__SWIG_4(jarg1, jarg2);
}
unsigned Proxy_CSharp_PostEvent__SWIG_0(unsigned jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6, void* jarg7, unsigned jarg8)
{
  return Actual_CSharp_PostEvent__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7, jarg8);
}
unsigned Proxy_CSharp_PostEvent__SWIG_1(unsigned jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6, void* jarg7)
{
  return Actual_CSharp_PostEvent__SWIG_1(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
}
unsigned Proxy_CSharp_PostEvent__SWIG_10(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3)
{
  return Actual_CSharp_PostEvent__SWIG_10(jarg1, jarg2, jarg3);
}
unsigned Proxy_CSharp_PostEvent__SWIG_11(const wchar_t* jarg1, uint64_t jarg2)
{
  return Actual_CSharp_PostEvent__SWIG_11(jarg1, jarg2);
}
unsigned Proxy_CSharp_PostEvent__SWIG_2(unsigned jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6)
{
  return Actual_CSharp_PostEvent__SWIG_2(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
unsigned Proxy_CSharp_PostEvent__SWIG_3(unsigned jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5)
{
  return Actual_CSharp_PostEvent__SWIG_3(jarg1, jarg2, jarg3, jarg4, jarg5);
}
unsigned Proxy_CSharp_PostEvent__SWIG_4(unsigned jarg1, uint64_t jarg2, unsigned jarg3)
{
  return Actual_CSharp_PostEvent__SWIG_4(jarg1, jarg2, jarg3);
}
unsigned Proxy_CSharp_PostEvent__SWIG_5(unsigned jarg1, uint64_t jarg2)
{
  return Actual_CSharp_PostEvent__SWIG_5(jarg1, jarg2);
}
unsigned Proxy_CSharp_PostEvent__SWIG_6(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6, void* jarg7, unsigned jarg8)
{
  return Actual_CSharp_PostEvent__SWIG_6(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7, jarg8);
}
unsigned Proxy_CSharp_PostEvent__SWIG_7(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6, void* jarg7)
{
  return Actual_CSharp_PostEvent__SWIG_7(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
}
unsigned Proxy_CSharp_PostEvent__SWIG_8(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5, unsigned jarg6)
{
  return Actual_CSharp_PostEvent__SWIG_8(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
unsigned Proxy_CSharp_PostEvent__SWIG_9(const wchar_t* jarg1, uint64_t jarg2, unsigned jarg3, void* jarg4, void* jarg5)
{
  return Actual_CSharp_PostEvent__SWIG_9(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_PostMIDIOnEvent(unsigned jarg1, uint64_t jarg2, void* jarg3, uint16_t jarg4)
{
  return Actual_CSharp_PostMIDIOnEvent(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_PostString__SWIG_0(const wchar_t* jarg1, int jarg2, unsigned jarg3, uint64_t jarg4, unsigned jarg5, int jarg6)
{
  return Actual_CSharp_PostString__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_PostString__SWIG_1(const wchar_t* jarg1, int jarg2, unsigned jarg3, uint64_t jarg4, unsigned jarg5)
{
  return Actual_CSharp_PostString__SWIG_1(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_PostString__SWIG_2(const wchar_t* jarg1, int jarg2, unsigned jarg3, uint64_t jarg4)
{
  return Actual_CSharp_PostString__SWIG_2(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_PostString__SWIG_3(const wchar_t* jarg1, int jarg2, unsigned jarg3)
{
  return Actual_CSharp_PostString__SWIG_3(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_PostString__SWIG_4(const wchar_t* jarg1, int jarg2)
{
  return Actual_CSharp_PostString__SWIG_4(jarg1, jarg2);
}
int Proxy_CSharp_PostTrigger__SWIG_0(unsigned jarg1, uint64_t jarg2)
{
  return Actual_CSharp_PostTrigger__SWIG_0(jarg1, jarg2);
}
int Proxy_CSharp_PostTrigger__SWIG_1(const wchar_t* jarg1, uint64_t jarg2)
{
  return Actual_CSharp_PostTrigger__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_PrepareBank__SWIG_0(int jarg1, const wchar_t* jarg2, int jarg3)
{
  return Actual_CSharp_PrepareBank__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_PrepareBank__SWIG_1(int jarg1, const wchar_t* jarg2)
{
  return Actual_CSharp_PrepareBank__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_PrepareBank__SWIG_10(int jarg1, unsigned jarg2, void* jarg3, void* jarg4, int jarg5)
{
  return Actual_CSharp_PrepareBank__SWIG_10(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_PrepareBank__SWIG_11(int jarg1, unsigned jarg2, void* jarg3, void* jarg4)
{
  return Actual_CSharp_PrepareBank__SWIG_11(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_PrepareBank__SWIG_4(int jarg1, unsigned jarg2, int jarg3)
{
  return Actual_CSharp_PrepareBank__SWIG_4(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_PrepareBank__SWIG_5(int jarg1, unsigned jarg2)
{
  return Actual_CSharp_PrepareBank__SWIG_5(jarg1, jarg2);
}
int Proxy_CSharp_PrepareBank__SWIG_6(int jarg1, const wchar_t* jarg2, void* jarg3, void* jarg4, int jarg5)
{
  return Actual_CSharp_PrepareBank__SWIG_6(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_PrepareBank__SWIG_7(int jarg1, const wchar_t* jarg2, void* jarg3, void* jarg4)
{
  return Actual_CSharp_PrepareBank__SWIG_7(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_PrepareEvent__SWIG_0(int jarg1, void* jarg2, unsigned jarg3)
{
  return Actual_CSharp_PrepareEvent__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_PrepareEvent__SWIG_1(int jarg1, unsigned* jarg2, unsigned jarg3)
{
  return Actual_CSharp_PrepareEvent__SWIG_1(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_PrepareEvent__SWIG_2(int jarg1, void* jarg2, unsigned jarg3, void* jarg4, void* jarg5)
{
  return Actual_CSharp_PrepareEvent__SWIG_2(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_PrepareEvent__SWIG_3(int jarg1, unsigned* jarg2, unsigned jarg3, void* jarg4, void* jarg5)
{
  return Actual_CSharp_PrepareEvent__SWIG_3(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_PrepareGameSyncs__SWIG_0(int jarg1, int jarg2, const wchar_t* jarg3, void* jarg4, unsigned jarg5)
{
  return Actual_CSharp_PrepareGameSyncs__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_PrepareGameSyncs__SWIG_1(int jarg1, int jarg2, unsigned jarg3, unsigned* jarg4, unsigned jarg5)
{
  return Actual_CSharp_PrepareGameSyncs__SWIG_1(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_PrepareGameSyncs__SWIG_2(int jarg1, int jarg2, const wchar_t* jarg3, void* jarg4, unsigned jarg5, void* jarg6, void* jarg7)
{
  return Actual_CSharp_PrepareGameSyncs__SWIG_2(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
}
int Proxy_CSharp_PrepareGameSyncs__SWIG_3(int jarg1, int jarg2, unsigned jarg3, unsigned* jarg4, unsigned jarg5, void* jarg6, void* jarg7)
{
  return Actual_CSharp_PrepareGameSyncs__SWIG_3(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
}
int Proxy_CSharp_QueryAudioObjectIDs__SWIG_0(unsigned jarg1, unsigned& jarg2, void* jarg3)
{
  return Actual_CSharp_QueryAudioObjectIDs__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_QueryAudioObjectIDs__SWIG_1(const wchar_t* jarg1, unsigned& jarg2, void* jarg3)
{
  return Actual_CSharp_QueryAudioObjectIDs__SWIG_1(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_QueryIndirectPaths(uint64_t jarg1, void* jarg2, void* jarg3, unsigned jarg4)
{
  return Actual_CSharp_QueryIndirectPaths(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_QuerySoundPropagationPaths(uint64_t jarg1, void* jarg2, void* jarg3, unsigned jarg4)
{
  return Actual_CSharp_QuerySoundPropagationPaths(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_RegisterEmitter(uint64_t jarg1, void* jarg2)
{
  return Actual_CSharp_RegisterEmitter(jarg1, jarg2);
}
int Proxy_CSharp_RegisterGameObjInternal(uint64_t jarg1)
{
  return Actual_CSharp_RegisterGameObjInternal(jarg1);
}
int Proxy_CSharp_RegisterGameObjInternal_WithName(uint64_t jarg1, const wchar_t* jarg2)
{
  //return Actual_CSharp_RegisterGameObjInternal_WithName(jarg1, jarg2);
	//Register the GameObject without name to avoid crashing in foreign languages
  return Actual_CSharp_RegisterGameObjInternal(jarg1);
}
int Proxy_CSharp_RegisterPluginDLL(const wchar_t* jarg1)
{
  return Actual_CSharp_RegisterPluginDLL(jarg1);
}
int Proxy_CSharp_RegisterSpatialAudioListener(uint64_t jarg1)
{
  return Actual_CSharp_RegisterSpatialAudioListener(jarg1);
}
int Proxy_CSharp_RemoveDefaultListener(uint64_t jarg1)
{
  return Actual_CSharp_RemoveDefaultListener(jarg1);
}
int Proxy_CSharp_RemoveGeometry(uint64_t jarg1)
{
  return Actual_CSharp_RemoveGeometry(jarg1);
}
int Proxy_CSharp_RemoveImageSource__SWIG_0(unsigned jarg1, unsigned jarg2, uint64_t jarg3)
{
  return Actual_CSharp_RemoveImageSource__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_RemoveImageSource__SWIG_1(unsigned jarg1, unsigned jarg2)
{
  return Actual_CSharp_RemoveImageSource__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_RemoveListener(uint64_t jarg1, uint64_t jarg2)
{
  return Actual_CSharp_RemoveListener(jarg1, jarg2);
}
int Proxy_CSharp_RemoveOutput(uint64_t jarg1)
{
  return Actual_CSharp_RemoveOutput(jarg1);
}
int Proxy_CSharp_RemovePortal(uint64_t jarg1)
{
  return Actual_CSharp_RemovePortal(jarg1);
}
int Proxy_CSharp_RemoveRoom(uint64_t jarg1)
{
  return Actual_CSharp_RemoveRoom(jarg1);
}
int Proxy_CSharp_RenderAudio__SWIG_0(int jarg1)
{
  return Actual_CSharp_RenderAudio__SWIG_0(jarg1);
}
int Proxy_CSharp_RenderAudio__SWIG_1()
{
  return Actual_CSharp_RenderAudio__SWIG_1();
}
int Proxy_CSharp_ResetListenersToDefault(uint64_t jarg1)
{
  return Actual_CSharp_ResetListenersToDefault(jarg1);
}
int Proxy_CSharp_ResetRTPCValue__SWIG_0(unsigned jarg1, uint64_t jarg2, int jarg3, int jarg4, int jarg5)
{
  return Actual_CSharp_ResetRTPCValue__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_ResetRTPCValue__SWIG_1(unsigned jarg1, uint64_t jarg2, int jarg3, int jarg4)
{
  return Actual_CSharp_ResetRTPCValue__SWIG_1(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_ResetRTPCValue__SWIG_2(unsigned jarg1, uint64_t jarg2, int jarg3)
{
  return Actual_CSharp_ResetRTPCValue__SWIG_2(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_ResetRTPCValue__SWIG_3(unsigned jarg1, uint64_t jarg2)
{
  return Actual_CSharp_ResetRTPCValue__SWIG_3(jarg1, jarg2);
}
int Proxy_CSharp_ResetRTPCValue__SWIG_4(unsigned jarg1)
{
  return Actual_CSharp_ResetRTPCValue__SWIG_4(jarg1);
}
int Proxy_CSharp_ResetRTPCValue__SWIG_5(const wchar_t* jarg1, uint64_t jarg2, int jarg3, int jarg4, int jarg5)
{
  return Actual_CSharp_ResetRTPCValue__SWIG_5(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_ResetRTPCValue__SWIG_6(const wchar_t* jarg1, uint64_t jarg2, int jarg3, int jarg4)
{
  return Actual_CSharp_ResetRTPCValue__SWIG_6(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_ResetRTPCValue__SWIG_7(const wchar_t* jarg1, uint64_t jarg2, int jarg3)
{
  return Actual_CSharp_ResetRTPCValue__SWIG_7(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_ResetRTPCValue__SWIG_8(const wchar_t* jarg1, uint64_t jarg2)
{
  return Actual_CSharp_ResetRTPCValue__SWIG_8(jarg1, jarg2);
}
int Proxy_CSharp_ResetRTPCValue__SWIG_9(const wchar_t* jarg1)
{
  return Actual_CSharp_ResetRTPCValue__SWIG_9(jarg1);
}
unsigned Proxy_CSharp_ResolveDialogueEvent__SWIG_0(unsigned jarg1, unsigned* jarg2, unsigned jarg3, unsigned jarg4)
{
  return Actual_CSharp_ResolveDialogueEvent__SWIG_0(jarg1, jarg2, jarg3, jarg4);
}
unsigned Proxy_CSharp_ResolveDialogueEvent__SWIG_1(unsigned jarg1, unsigned* jarg2, unsigned jarg3)
{
  return Actual_CSharp_ResolveDialogueEvent__SWIG_1(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SeekOnEvent__SWIG_0(unsigned jarg1, uint64_t jarg2, int jarg3, int jarg4, unsigned jarg5)
{
  return Actual_CSharp_SeekOnEvent__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_SeekOnEvent__SWIG_1(unsigned jarg1, uint64_t jarg2, int jarg3, int jarg4)
{
  return Actual_CSharp_SeekOnEvent__SWIG_1(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SeekOnEvent__SWIG_10(unsigned jarg1, uint64_t jarg2, float jarg3, int jarg4)
{
  return Actual_CSharp_SeekOnEvent__SWIG_10(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SeekOnEvent__SWIG_11(unsigned jarg1, uint64_t jarg2, float jarg3)
{
  return Actual_CSharp_SeekOnEvent__SWIG_11(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SeekOnEvent__SWIG_12(const wchar_t* jarg1, uint64_t jarg2, float jarg3, int jarg4, unsigned jarg5)
{
  return Actual_CSharp_SeekOnEvent__SWIG_12(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_SeekOnEvent__SWIG_13(const wchar_t* jarg1, uint64_t jarg2, float jarg3, int jarg4)
{
  return Actual_CSharp_SeekOnEvent__SWIG_13(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SeekOnEvent__SWIG_14(const wchar_t* jarg1, uint64_t jarg2, float jarg3)
{
  return Actual_CSharp_SeekOnEvent__SWIG_14(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SeekOnEvent__SWIG_2(unsigned jarg1, uint64_t jarg2, int jarg3)
{
  return Actual_CSharp_SeekOnEvent__SWIG_2(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SeekOnEvent__SWIG_3(const wchar_t* jarg1, uint64_t jarg2, int jarg3, int jarg4, unsigned jarg5)
{
  return Actual_CSharp_SeekOnEvent__SWIG_3(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_SeekOnEvent__SWIG_4(const wchar_t* jarg1, uint64_t jarg2, int jarg3, int jarg4)
{
  return Actual_CSharp_SeekOnEvent__SWIG_4(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SeekOnEvent__SWIG_5(const wchar_t* jarg1, uint64_t jarg2, int jarg3)
{
  return Actual_CSharp_SeekOnEvent__SWIG_5(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SeekOnEvent__SWIG_9(unsigned jarg1, uint64_t jarg2, float jarg3, int jarg4, unsigned jarg5)
{
  return Actual_CSharp_SeekOnEvent__SWIG_9(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_SendPluginCustomGameData(unsigned jarg1, uint64_t jarg2, int jarg3, unsigned jarg4, unsigned jarg5, void* jarg6, unsigned jarg7)
{
  return Actual_CSharp_SendPluginCustomGameData(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7);
}
int Proxy_CSharp_SetActorMixerEffect(unsigned jarg1, unsigned jarg2, unsigned jarg3)
{
  return Actual_CSharp_SetActorMixerEffect(jarg1, jarg2, jarg3);
}
void Proxy_CSharp_SetAudioInputCallbacks(void* (*jarg1)(), void* (*jarg2)())
{
  Actual_CSharp_SetAudioInputCallbacks(jarg1, jarg2);
}
int Proxy_CSharp_SetBankLoadIOSettings(float jarg1, wchar_t jarg2)
{
  return Actual_CSharp_SetBankLoadIOSettings(jarg1, jarg2);
}
int Proxy_CSharp_SetBasePath(const wchar_t* jarg1)
{
  return Actual_CSharp_SetBasePath(jarg1);
}
int Proxy_CSharp_SetBusConfig__SWIG_0(unsigned jarg1, void* jarg2)
{
  return Actual_CSharp_SetBusConfig__SWIG_0(jarg1, jarg2);
}
int Proxy_CSharp_SetBusConfig__SWIG_1(const wchar_t* jarg1, void* jarg2)
{
  return Actual_CSharp_SetBusConfig__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_SetBusDevice__SWIG_0(unsigned jarg1, unsigned jarg2)
{
  return Actual_CSharp_SetBusDevice__SWIG_0(jarg1, jarg2);
}
int Proxy_CSharp_SetBusDevice__SWIG_1(const char* jarg1, const char* jarg2)
{
  return Actual_CSharp_SetBusDevice__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_SetBusEffect__SWIG_0(unsigned jarg1, unsigned jarg2, unsigned jarg3)
{
  return Actual_CSharp_SetBusEffect__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetBusEffect__SWIG_1(const wchar_t* jarg1, unsigned jarg2, unsigned jarg3)
{
  return Actual_CSharp_SetBusEffect__SWIG_1(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetCurrentLanguage(const wchar_t* jarg1)
{
  return Actual_CSharp_SetCurrentLanguage(jarg1);
}
int Proxy_CSharp_SetDecodedBankPath(const wchar_t* jarg1)
{
  return Actual_CSharp_SetDecodedBankPath(jarg1);
}
int Proxy_CSharp_SetDefaultListeners(uint64_t* jarg1, unsigned jarg2)
{
  return Actual_CSharp_SetDefaultListeners(jarg1, jarg2);
}
int Proxy_CSharp_SetEmitterAuxSendValues(uint64_t jarg1, void* jarg2, unsigned jarg3)
{
  return Actual_CSharp_SetEmitterAuxSendValues(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetEmitterObstruction(uint64_t jarg1, float jarg2)
{
  return Actual_CSharp_SetEmitterObstruction(jarg1, jarg2);
}
void Proxy_CSharp_SetErrorLogger__SWIG_0(void* (*jarg1)())
{
  Actual_CSharp_SetErrorLogger__SWIG_0(jarg1);
}
void Proxy_CSharp_SetErrorLogger__SWIG_1()
{
  Actual_CSharp_SetErrorLogger__SWIG_1();
}
int Proxy_CSharp_SetGameName(const wchar_t* jarg1)
{
  return Actual_CSharp_SetGameName(jarg1);
}
int Proxy_CSharp_SetGameObjectAuxSendValues(uint64_t jarg1, void* jarg2, unsigned jarg3)
{
  return Actual_CSharp_SetGameObjectAuxSendValues(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetGameObjectInRoom(uint64_t jarg1, uint64_t jarg2)
{
  return Actual_CSharp_SetGameObjectInRoom(jarg1, jarg2);
}
int Proxy_CSharp_SetGameObjectOutputBusVolume(uint64_t jarg1, uint64_t jarg2, float jarg3)
{
  return Actual_CSharp_SetGameObjectOutputBusVolume(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetGeometry(uint64_t jarg1, void* jarg2, unsigned jarg3)
{
  return Actual_CSharp_SetGeometry(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetImageSource__SWIG_0(unsigned jarg1, void* jarg2, unsigned jarg3, uint64_t jarg4, uint64_t jarg5)
{
  return Actual_CSharp_SetImageSource__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_SetImageSource__SWIG_1(unsigned jarg1, void* jarg2, unsigned jarg3, uint64_t jarg4)
{
  return Actual_CSharp_SetImageSource__SWIG_1(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SetListeners(uint64_t jarg1, uint64_t* jarg2, unsigned jarg3)
{
  return Actual_CSharp_SetListeners(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetListenerSpatialization__SWIG_0(uint64_t jarg1, int jarg2, void* jarg3, float* jarg4)
{
  return Actual_CSharp_SetListenerSpatialization__SWIG_0(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SetListenerSpatialization__SWIG_1(uint64_t jarg1, int jarg2, void* jarg3)
{
  return Actual_CSharp_SetListenerSpatialization__SWIG_1(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetMaxNumVoicesLimit(uint16_t jarg1)
{
  return Actual_CSharp_SetMaxNumVoicesLimit(jarg1);
}
int Proxy_CSharp_SetMedia(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_SetMedia(jarg1, jarg2);
}
int Proxy_CSharp_SetMixer__SWIG_0(unsigned jarg1, unsigned jarg2)
{
  return Actual_CSharp_SetMixer__SWIG_0(jarg1, jarg2);
}
int Proxy_CSharp_SetMixer__SWIG_1(const wchar_t* jarg1, unsigned jarg2)
{
  return Actual_CSharp_SetMixer__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_SetMultipleObstructionAndOcclusion(uint64_t jarg1, uint64_t jarg2, void* jarg3, unsigned jarg4)
{
  return Actual_CSharp_SetMultipleObstructionAndOcclusion(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SetMultiplePositions__SWIG_0(uint64_t jarg1, void* jarg2, uint16_t jarg3, int jarg4)
{
  return Actual_CSharp_SetMultiplePositions__SWIG_0(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SetMultiplePositions__SWIG_1(uint64_t jarg1, void* jarg2, uint16_t jarg3)
{
  return Actual_CSharp_SetMultiplePositions__SWIG_1(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetMultiplePositions__SWIG_2(uint64_t jarg1, void* jarg2, uint16_t jarg3, int jarg4)
{
  return Actual_CSharp_SetMultiplePositions__SWIG_2(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SetMultiplePositions__SWIG_3(uint64_t jarg1, void* jarg2, uint16_t jarg3)
{
  return Actual_CSharp_SetMultiplePositions__SWIG_3(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetObjectObstructionAndOcclusion(uint64_t jarg1, uint64_t jarg2, float jarg3, float jarg4)
{
  return Actual_CSharp_SetObjectObstructionAndOcclusion(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SetObjectPosition(uint64_t jarg1, float jarg2, float jarg3, float jarg4, float jarg5, float jarg6, float jarg7, float jarg8, float jarg9, float jarg10)
{
  return Actual_CSharp_SetObjectPosition(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6, jarg7, jarg8, jarg9, jarg10);
}
int Proxy_CSharp_SetOutputVolume(uint64_t jarg1, float jarg2)
{
  return Actual_CSharp_SetOutputVolume(jarg1, jarg2);
}
int Proxy_CSharp_SetPanningRule__SWIG_0(int jarg1, uint64_t jarg2)
{
  return Actual_CSharp_SetPanningRule__SWIG_0(jarg1, jarg2);
}
int Proxy_CSharp_SetPanningRule__SWIG_1(int jarg1)
{
  return Actual_CSharp_SetPanningRule__SWIG_1(jarg1);
}
int Proxy_CSharp_SetPortalObstruction(uint64_t jarg1, float jarg2)
{
  return Actual_CSharp_SetPortalObstruction(jarg1, jarg2);
}
void Proxy_CSharp_SetRandomSeed(unsigned jarg1)
{
  Actual_CSharp_SetRandomSeed(jarg1);
}
int Proxy_CSharp_SetRoom(uint64_t jarg1, void* jarg2, const char* jarg3)
{
  return Actual_CSharp_SetRoom(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetRoomPortal(uint64_t jarg1, void* jarg2, void* jarg3, int jarg4, uint64_t jarg5, uint64_t jarg6)
{
  return Actual_CSharp_SetRoomPortal(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_SetRTPCValue__SWIG_0(unsigned jarg1, float jarg2, uint64_t jarg3, int jarg4, int jarg5, int jarg6)
{
  return Actual_CSharp_SetRTPCValue__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_SetRTPCValue__SWIG_1(unsigned jarg1, float jarg2, uint64_t jarg3, int jarg4, int jarg5)
{
  return Actual_CSharp_SetRTPCValue__SWIG_1(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_SetRTPCValue__SWIG_2(unsigned jarg1, float jarg2, uint64_t jarg3, int jarg4)
{
  return Actual_CSharp_SetRTPCValue__SWIG_2(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SetRTPCValue__SWIG_3(unsigned jarg1, float jarg2, uint64_t jarg3)
{
  return Actual_CSharp_SetRTPCValue__SWIG_3(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetRTPCValue__SWIG_4(unsigned jarg1, float jarg2)
{
  return Actual_CSharp_SetRTPCValue__SWIG_4(jarg1, jarg2);
}
int Proxy_CSharp_SetRTPCValue__SWIG_5(const wchar_t* jarg1, float jarg2, uint64_t jarg3, int jarg4, int jarg5, int jarg6)
{
  return Actual_CSharp_SetRTPCValue__SWIG_5(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_SetRTPCValue__SWIG_6(const wchar_t* jarg1, float jarg2, uint64_t jarg3, int jarg4, int jarg5)
{
  return Actual_CSharp_SetRTPCValue__SWIG_6(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_SetRTPCValue__SWIG_7(const wchar_t* jarg1, float jarg2, uint64_t jarg3, int jarg4)
{
  return Actual_CSharp_SetRTPCValue__SWIG_7(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SetRTPCValue__SWIG_8(const wchar_t* jarg1, float jarg2, uint64_t jarg3)
{
  return Actual_CSharp_SetRTPCValue__SWIG_8(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetRTPCValue__SWIG_9(const wchar_t* jarg1, float jarg2)
{
  return Actual_CSharp_SetRTPCValue__SWIG_9(jarg1, jarg2);
}
int Proxy_CSharp_SetRTPCValueByPlayingID__SWIG_0(unsigned jarg1, float jarg2, unsigned jarg3, int jarg4, int jarg5, int jarg6)
{
  return Actual_CSharp_SetRTPCValueByPlayingID__SWIG_0(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_SetRTPCValueByPlayingID__SWIG_1(unsigned jarg1, float jarg2, unsigned jarg3, int jarg4, int jarg5)
{
  return Actual_CSharp_SetRTPCValueByPlayingID__SWIG_1(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_SetRTPCValueByPlayingID__SWIG_2(unsigned jarg1, float jarg2, unsigned jarg3, int jarg4)
{
  return Actual_CSharp_SetRTPCValueByPlayingID__SWIG_2(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SetRTPCValueByPlayingID__SWIG_3(unsigned jarg1, float jarg2, unsigned jarg3)
{
  return Actual_CSharp_SetRTPCValueByPlayingID__SWIG_3(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetRTPCValueByPlayingID__SWIG_4(const wchar_t* jarg1, float jarg2, unsigned jarg3, int jarg4, int jarg5, int jarg6)
{
  return Actual_CSharp_SetRTPCValueByPlayingID__SWIG_4(jarg1, jarg2, jarg3, jarg4, jarg5, jarg6);
}
int Proxy_CSharp_SetRTPCValueByPlayingID__SWIG_5(const wchar_t* jarg1, float jarg2, unsigned jarg3, int jarg4, int jarg5)
{
  return Actual_CSharp_SetRTPCValueByPlayingID__SWIG_5(jarg1, jarg2, jarg3, jarg4, jarg5);
}
int Proxy_CSharp_SetRTPCValueByPlayingID__SWIG_6(const wchar_t* jarg1, float jarg2, unsigned jarg3, int jarg4)
{
  return Actual_CSharp_SetRTPCValueByPlayingID__SWIG_6(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SetRTPCValueByPlayingID__SWIG_7(const wchar_t* jarg1, float jarg2, unsigned jarg3)
{
  return Actual_CSharp_SetRTPCValueByPlayingID__SWIG_7(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetScalingFactor(uint64_t jarg1, float jarg2)
{
  return Actual_CSharp_SetScalingFactor(jarg1, jarg2);
}
int Proxy_CSharp_SetSpeakerAngles__SWIG_0(float* jarg1, unsigned jarg2, float jarg3, uint64_t jarg4)
{
  return Actual_CSharp_SetSpeakerAngles__SWIG_0(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_SetSpeakerAngles__SWIG_1(float* jarg1, unsigned jarg2, float jarg3)
{
  return Actual_CSharp_SetSpeakerAngles__SWIG_1(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetState__SWIG_0(unsigned jarg1, unsigned jarg2)
{
  return Actual_CSharp_SetState__SWIG_0(jarg1, jarg2);
}
int Proxy_CSharp_SetState__SWIG_1(const wchar_t* jarg1, const wchar_t* jarg2)
{
  return Actual_CSharp_SetState__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_SetSwitch__SWIG_0(unsigned jarg1, unsigned jarg2, uint64_t jarg3)
{
  return Actual_CSharp_SetSwitch__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetSwitch__SWIG_1(const wchar_t* jarg1, const wchar_t* jarg2, uint64_t jarg3)
{
  return Actual_CSharp_SetSwitch__SWIG_1(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_SetVolumeThreshold(float jarg1)
{
  return Actual_CSharp_SetVolumeThreshold(jarg1);
}
int Proxy_CSharp_StartOutputCapture(const wchar_t* jarg1)
{
  return Actual_CSharp_StartOutputCapture(jarg1);
}
int Proxy_CSharp_StartProfilerCapture(const wchar_t* jarg1)
{
  return Actual_CSharp_StartProfilerCapture(jarg1);
}
unsigned Proxy_CSharp_StdChannelIndexToDisplayIndex(int jarg1, unsigned jarg2, unsigned jarg3)
{
  return Actual_CSharp_StdChannelIndexToDisplayIndex(jarg1, jarg2, jarg3);
}
void Proxy_CSharp_StopAll__SWIG_0(uint64_t jarg1)
{
  Actual_CSharp_StopAll__SWIG_0(jarg1);
}
void Proxy_CSharp_StopAll__SWIG_1()
{
  Actual_CSharp_StopAll__SWIG_1();
}
int Proxy_CSharp_StopMIDIOnEvent__SWIG_0(unsigned jarg1, uint64_t jarg2)
{
  return Actual_CSharp_StopMIDIOnEvent__SWIG_0(jarg1, jarg2);
}
int Proxy_CSharp_StopMIDIOnEvent__SWIG_1(unsigned jarg1)
{
  return Actual_CSharp_StopMIDIOnEvent__SWIG_1(jarg1);
}
int Proxy_CSharp_StopMIDIOnEvent__SWIG_2()
{
  return Actual_CSharp_StopMIDIOnEvent__SWIG_2();
}
int Proxy_CSharp_StopOutputCapture()
{
  return Actual_CSharp_StopOutputCapture();
}
void Proxy_CSharp_StopPlayingID__SWIG_0(unsigned jarg1, int jarg2, int jarg3)
{
  Actual_CSharp_StopPlayingID__SWIG_0(jarg1, jarg2, jarg3);
}
void Proxy_CSharp_StopPlayingID__SWIG_1(unsigned jarg1, int jarg2)
{
  Actual_CSharp_StopPlayingID__SWIG_1(jarg1, jarg2);
}
void Proxy_CSharp_StopPlayingID__SWIG_2(unsigned jarg1)
{
  Actual_CSharp_StopPlayingID__SWIG_2(jarg1);
}
int Proxy_CSharp_StopProfilerCapture()
{
  return Actual_CSharp_StopProfilerCapture();
}
int Proxy_CSharp_Suspend__SWIG_0(int jarg1)
{
  return Actual_CSharp_Suspend__SWIG_0(jarg1);
}
int Proxy_CSharp_Suspend__SWIG_1()
{
  return Actual_CSharp_Suspend__SWIG_1();
}
void Proxy_CSharp_Term()
{
  Actual_CSharp_Term();
}
int Proxy_CSharp_UnloadAllFilePackages()
{
  return Actual_CSharp_UnloadAllFilePackages();
}
int Proxy_CSharp_UnloadBank__SWIG_0(const wchar_t* jarg1, void* jarg2, int& jarg3)
{
  return Actual_CSharp_UnloadBank__SWIG_0(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_UnloadBank__SWIG_1(const wchar_t* jarg1, void* jarg2)
{
  return Actual_CSharp_UnloadBank__SWIG_1(jarg1, jarg2);
}
int Proxy_CSharp_UnloadBank__SWIG_4(unsigned jarg1, void* jarg2, int& jarg3)
{
  return Actual_CSharp_UnloadBank__SWIG_4(jarg1, jarg2, jarg3);
}
int Proxy_CSharp_UnloadBank__SWIG_5(unsigned jarg1, void* jarg2)
{
  return Actual_CSharp_UnloadBank__SWIG_5(jarg1, jarg2);
}
int Proxy_CSharp_UnloadBank__SWIG_6(const wchar_t* jarg1, void* jarg2, void* jarg3, void* jarg4)
{
  return Actual_CSharp_UnloadBank__SWIG_6(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_UnloadBank__SWIG_8(unsigned jarg1, void* jarg2, void* jarg3, void* jarg4)
{
  return Actual_CSharp_UnloadBank__SWIG_8(jarg1, jarg2, jarg3, jarg4);
}
int Proxy_CSharp_UnloadFilePackage(unsigned jarg1)
{
  return Actual_CSharp_UnloadFilePackage(jarg1);
}
int Proxy_CSharp_UnpinEventInStreamCache__SWIG_0(unsigned jarg1)
{
  return Actual_CSharp_UnpinEventInStreamCache__SWIG_0(jarg1);
}
int Proxy_CSharp_UnpinEventInStreamCache__SWIG_1(const wchar_t* jarg1)
{
  return Actual_CSharp_UnpinEventInStreamCache__SWIG_1(jarg1);
}
int Proxy_CSharp_UnregisterAllGameObj()
{
  return Actual_CSharp_UnregisterAllGameObj();
}
int Proxy_CSharp_UnregisterEmitter(uint64_t jarg1)
{
  return Actual_CSharp_UnregisterEmitter(jarg1);
}
int Proxy_CSharp_UnregisterGameObjInternal(uint64_t jarg1)
{
  return Actual_CSharp_UnregisterGameObjInternal(jarg1);
}
int Proxy_CSharp_UnregisterSpatialAudioListener(uint64_t jarg1)
{
  return Actual_CSharp_UnregisterSpatialAudioListener(jarg1);
}
int Proxy_CSharp_UnsetMedia(void* jarg1, unsigned jarg2)
{
  return Actual_CSharp_UnsetMedia(jarg1, jarg2);
}
int Proxy_CSharp_WakeupFromSuspend()
{
  return Actual_CSharp_WakeupFromSuspend();
}

} //extern "C"


void Init(HMODULE hDll)
{
  (FARPROC&)Actual_CSharp__ArrayPoolDefault_Get = GetProcAddress(hDll, "CSharp__ArrayPoolDefault_Get");
  (FARPROC&)Actual_CSharp__ArrayPoolLEngineDefault_Get = GetProcAddress(hDll, "CSharp__ArrayPoolLEngineDefault_Get");
  (FARPROC&)Actual_CSharp__ArrayPoolSpatialAudio_Get = GetProcAddress(hDll, "CSharp__ArrayPoolSpatialAudio_Get");
  (FARPROC&)Actual_CSharp_AddBasePath = GetProcAddress(hDll, "CSharp_AddBasePath");
  (FARPROC&)Actual_CSharp_AddDefaultListener = GetProcAddress(hDll, "CSharp_AddDefaultListener");
  (FARPROC&)Actual_CSharp_AddListener = GetProcAddress(hDll, "CSharp_AddListener");
  (FARPROC&)Actual_CSharp_AddOutput = GetProcAddress(hDll, "CSharp_AddOutput");
  (FARPROC&)Actual_CSharp_AddOutputCaptureMarker = GetProcAddress(hDll, "CSharp_AddOutputCaptureMarker");
  (FARPROC&)Actual_CSharp_AK_FLOAT_get = GetProcAddress(hDll, "CSharp_AK_FLOAT_get");
  (FARPROC&)Actual_CSharp_AK_INT_get = GetProcAddress(hDll, "CSharp_AK_INT_get");
  (FARPROC&)Actual_CSharp_AK_INTERLEAVED_get = GetProcAddress(hDll, "CSharp_AK_INTERLEAVED_get");
  (FARPROC&)Actual_CSharp_AK_INVALID_MIDI_CHANNEL_get = GetProcAddress(hDll, "CSharp_AK_INVALID_MIDI_CHANNEL_get");
  (FARPROC&)Actual_CSharp_AK_INVALID_MIDI_NOTE_get = GetProcAddress(hDll, "CSharp_AK_INVALID_MIDI_NOTE_get");
  (FARPROC&)Actual_CSharp_AK_LE_NATIVE_BITSPERSAMPLE_get = GetProcAddress(hDll, "CSharp_AK_LE_NATIVE_BITSPERSAMPLE_get");
  (FARPROC&)Actual_CSharp_AK_LE_NATIVE_INTERLEAVE_get = GetProcAddress(hDll, "CSharp_AK_LE_NATIVE_INTERLEAVE_get");
  (FARPROC&)Actual_CSharp_AK_LE_NATIVE_SAMPLETYPE_get = GetProcAddress(hDll, "CSharp_AK_LE_NATIVE_SAMPLETYPE_get");
  (FARPROC&)Actual_CSharp_AK_NONINTERLEAVED_get = GetProcAddress(hDll, "CSharp_AK_NONINTERLEAVED_get");
  (FARPROC&)Actual_CSharp_AK_SOUNDBANK_VERSION_get = GetProcAddress(hDll, "CSharp_AK_SOUNDBANK_VERSION_get");
  (FARPROC&)Actual_CSharp_AK_SPEAKER_SETUP_CONVERT_TO_SUPPORTED = GetProcAddress(hDll, "CSharp_AK_SPEAKER_SETUP_CONVERT_TO_SUPPORTED");
  (FARPROC&)Actual_CSharp_AK_SPEAKER_SETUP_FIX_LEFT_TO_CENTER = GetProcAddress(hDll, "CSharp_AK_SPEAKER_SETUP_FIX_LEFT_TO_CENTER");
  (FARPROC&)Actual_CSharp_AK_SPEAKER_SETUP_FIX_REAR_TO_SIDE = GetProcAddress(hDll, "CSharp_AK_SPEAKER_SETUP_FIX_REAR_TO_SIDE");
  (FARPROC&)Actual_CSharp_AkAudioFormat_channelConfig_get = GetProcAddress(hDll, "CSharp_AkAudioFormat_channelConfig_get");
  (FARPROC&)Actual_CSharp_AkAudioFormat_channelConfig_set = GetProcAddress(hDll, "CSharp_AkAudioFormat_channelConfig_set");
  (FARPROC&)Actual_CSharp_AkAudioFormat_GetBitsPerSample = GetProcAddress(hDll, "CSharp_AkAudioFormat_GetBitsPerSample");
  (FARPROC&)Actual_CSharp_AkAudioFormat_GetBlockAlign = GetProcAddress(hDll, "CSharp_AkAudioFormat_GetBlockAlign");
  (FARPROC&)Actual_CSharp_AkAudioFormat_GetInterleaveID = GetProcAddress(hDll, "CSharp_AkAudioFormat_GetInterleaveID");
  (FARPROC&)Actual_CSharp_AkAudioFormat_GetNumChannels = GetProcAddress(hDll, "CSharp_AkAudioFormat_GetNumChannels");
  (FARPROC&)Actual_CSharp_AkAudioFormat_GetTypeID = GetProcAddress(hDll, "CSharp_AkAudioFormat_GetTypeID");
  (FARPROC&)Actual_CSharp_AkAudioFormat_IsChannelConfigSupported = GetProcAddress(hDll, "CSharp_AkAudioFormat_IsChannelConfigSupported");
  (FARPROC&)Actual_CSharp_AkAudioFormat_SetAll = GetProcAddress(hDll, "CSharp_AkAudioFormat_SetAll");
  (FARPROC&)Actual_CSharp_AkAudioFormat_uBitsPerSample_get = GetProcAddress(hDll, "CSharp_AkAudioFormat_uBitsPerSample_get");
  (FARPROC&)Actual_CSharp_AkAudioFormat_uBitsPerSample_set = GetProcAddress(hDll, "CSharp_AkAudioFormat_uBitsPerSample_set");
  (FARPROC&)Actual_CSharp_AkAudioFormat_uBlockAlign_get = GetProcAddress(hDll, "CSharp_AkAudioFormat_uBlockAlign_get");
  (FARPROC&)Actual_CSharp_AkAudioFormat_uBlockAlign_set = GetProcAddress(hDll, "CSharp_AkAudioFormat_uBlockAlign_set");
  (FARPROC&)Actual_CSharp_AkAudioFormat_uInterleaveID_get = GetProcAddress(hDll, "CSharp_AkAudioFormat_uInterleaveID_get");
  (FARPROC&)Actual_CSharp_AkAudioFormat_uInterleaveID_set = GetProcAddress(hDll, "CSharp_AkAudioFormat_uInterleaveID_set");
  (FARPROC&)Actual_CSharp_AkAudioFormat_uSampleRate_get = GetProcAddress(hDll, "CSharp_AkAudioFormat_uSampleRate_get");
  (FARPROC&)Actual_CSharp_AkAudioFormat_uSampleRate_set = GetProcAddress(hDll, "CSharp_AkAudioFormat_uSampleRate_set");
  (FARPROC&)Actual_CSharp_AkAudioFormat_uTypeID_get = GetProcAddress(hDll, "CSharp_AkAudioFormat_uTypeID_get");
  (FARPROC&)Actual_CSharp_AkAudioFormat_uTypeID_set = GetProcAddress(hDll, "CSharp_AkAudioFormat_uTypeID_set");
  (FARPROC&)Actual_CSharp_AkAudioInterruptionCallbackInfo_bEnterInterruption_get = GetProcAddress(hDll, "CSharp_AkAudioInterruptionCallbackInfo_bEnterInterruption_get");
  (FARPROC&)Actual_CSharp_AkAudioSettings_uNumSamplesPerFrame_get = GetProcAddress(hDll, "CSharp_AkAudioSettings_uNumSamplesPerFrame_get");
  (FARPROC&)Actual_CSharp_AkAudioSettings_uNumSamplesPerFrame_set = GetProcAddress(hDll, "CSharp_AkAudioSettings_uNumSamplesPerFrame_set");
  (FARPROC&)Actual_CSharp_AkAudioSettings_uNumSamplesPerSecond_get = GetProcAddress(hDll, "CSharp_AkAudioSettings_uNumSamplesPerSecond_get");
  (FARPROC&)Actual_CSharp_AkAudioSettings_uNumSamplesPerSecond_set = GetProcAddress(hDll, "CSharp_AkAudioSettings_uNumSamplesPerSecond_set");
  (FARPROC&)Actual_CSharp_AkAudioSourceChangeCallbackInfo_bOtherAudioPlaying_get = GetProcAddress(hDll, "CSharp_AkAudioSourceChangeCallbackInfo_bOtherAudioPlaying_get");
  (FARPROC&)Actual_CSharp_AkAuxSendValue_auxBusID_get = GetProcAddress(hDll, "CSharp_AkAuxSendValue_auxBusID_get");
  (FARPROC&)Actual_CSharp_AkAuxSendValue_auxBusID_set = GetProcAddress(hDll, "CSharp_AkAuxSendValue_auxBusID_set");
  (FARPROC&)Actual_CSharp_AkAuxSendValue_fControlValue_get = GetProcAddress(hDll, "CSharp_AkAuxSendValue_fControlValue_get");
  (FARPROC&)Actual_CSharp_AkAuxSendValue_fControlValue_set = GetProcAddress(hDll, "CSharp_AkAuxSendValue_fControlValue_set");
  (FARPROC&)Actual_CSharp_AkAuxSendValue_GetGameObjectAuxSendValues = GetProcAddress(hDll, "CSharp_AkAuxSendValue_GetGameObjectAuxSendValues");
  (FARPROC&)Actual_CSharp_AkAuxSendValue_GetSizeOf = GetProcAddress(hDll, "CSharp_AkAuxSendValue_GetSizeOf");
  (FARPROC&)Actual_CSharp_AkAuxSendValue_IsSame = GetProcAddress(hDll, "CSharp_AkAuxSendValue_IsSame");
  (FARPROC&)Actual_CSharp_AkAuxSendValue_listenerID_get = GetProcAddress(hDll, "CSharp_AkAuxSendValue_listenerID_get");
  (FARPROC&)Actual_CSharp_AkAuxSendValue_listenerID_set = GetProcAddress(hDll, "CSharp_AkAuxSendValue_listenerID_set");
  (FARPROC&)Actual_CSharp_AkAuxSendValue_Set = GetProcAddress(hDll, "CSharp_AkAuxSendValue_Set");
  (FARPROC&)Actual_CSharp_AkAuxSendValue_SetGameObjectAuxSendValues = GetProcAddress(hDll, "CSharp_AkAuxSendValue_SetGameObjectAuxSendValues");
  (FARPROC&)Actual_CSharp_AkBankCallbackInfo_bankID_get = GetProcAddress(hDll, "CSharp_AkBankCallbackInfo_bankID_get");
  (FARPROC&)Actual_CSharp_AkBankCallbackInfo_inMemoryBankPtr_get = GetProcAddress(hDll, "CSharp_AkBankCallbackInfo_inMemoryBankPtr_get");
  (FARPROC&)Actual_CSharp_AkBankCallbackInfo_loadResult_get = GetProcAddress(hDll, "CSharp_AkBankCallbackInfo_loadResult_get");
  (FARPROC&)Actual_CSharp_AkBankCallbackInfo_memPoolId_get = GetProcAddress(hDll, "CSharp_AkBankCallbackInfo_memPoolId_get");
  (FARPROC&)Actual_CSharp_AkCallbackInfo_gameObjID_get = GetProcAddress(hDll, "CSharp_AkCallbackInfo_gameObjID_get");
  (FARPROC&)Actual_CSharp_AkCallbackInfo_pCookie_get = GetProcAddress(hDll, "CSharp_AkCallbackInfo_pCookie_get");
  (FARPROC&)Actual_CSharp_AkCallbackSerializer_AudioSourceChangeCallbackFunc = GetProcAddress(hDll, "CSharp_AkCallbackSerializer_AudioSourceChangeCallbackFunc");
  (FARPROC&)Actual_CSharp_AkCallbackSerializer_Init = GetProcAddress(hDll, "CSharp_AkCallbackSerializer_Init");
  (FARPROC&)Actual_CSharp_AkCallbackSerializer_Lock = GetProcAddress(hDll, "CSharp_AkCallbackSerializer_Lock");
  (FARPROC&)Actual_CSharp_AkCallbackSerializer_SetLocalOutput = GetProcAddress(hDll, "CSharp_AkCallbackSerializer_SetLocalOutput");
  (FARPROC&)Actual_CSharp_AkCallbackSerializer_Term = GetProcAddress(hDll, "CSharp_AkCallbackSerializer_Term");
  (FARPROC&)Actual_CSharp_AkCallbackSerializer_Unlock = GetProcAddress(hDll, "CSharp_AkCallbackSerializer_Unlock");
  (FARPROC&)Actual_CSharp_AkChannelConfig_Clear = GetProcAddress(hDll, "CSharp_AkChannelConfig_Clear");
  (FARPROC&)Actual_CSharp_AkChannelConfig_Deserialize = GetProcAddress(hDll, "CSharp_AkChannelConfig_Deserialize");
  (FARPROC&)Actual_CSharp_AkChannelConfig_eConfigType_get = GetProcAddress(hDll, "CSharp_AkChannelConfig_eConfigType_get");
  (FARPROC&)Actual_CSharp_AkChannelConfig_eConfigType_set = GetProcAddress(hDll, "CSharp_AkChannelConfig_eConfigType_set");
  (FARPROC&)Actual_CSharp_AkChannelConfig_IsChannelConfigSupported = GetProcAddress(hDll, "CSharp_AkChannelConfig_IsChannelConfigSupported");
  (FARPROC&)Actual_CSharp_AkChannelConfig_IsValid = GetProcAddress(hDll, "CSharp_AkChannelConfig_IsValid");
  (FARPROC&)Actual_CSharp_AkChannelConfig_RemoveCenter = GetProcAddress(hDll, "CSharp_AkChannelConfig_RemoveCenter");
  (FARPROC&)Actual_CSharp_AkChannelConfig_RemoveLFE = GetProcAddress(hDll, "CSharp_AkChannelConfig_RemoveLFE");
  (FARPROC&)Actual_CSharp_AkChannelConfig_Serialize = GetProcAddress(hDll, "CSharp_AkChannelConfig_Serialize");
  (FARPROC&)Actual_CSharp_AkChannelConfig_SetAmbisonic = GetProcAddress(hDll, "CSharp_AkChannelConfig_SetAmbisonic");
  (FARPROC&)Actual_CSharp_AkChannelConfig_SetAnonymous = GetProcAddress(hDll, "CSharp_AkChannelConfig_SetAnonymous");
  (FARPROC&)Actual_CSharp_AkChannelConfig_SetStandard = GetProcAddress(hDll, "CSharp_AkChannelConfig_SetStandard");
  (FARPROC&)Actual_CSharp_AkChannelConfig_SetStandardOrAnonymous = GetProcAddress(hDll, "CSharp_AkChannelConfig_SetStandardOrAnonymous");
  (FARPROC&)Actual_CSharp_AkChannelConfig_uChannelMask_get = GetProcAddress(hDll, "CSharp_AkChannelConfig_uChannelMask_get");
  (FARPROC&)Actual_CSharp_AkChannelConfig_uChannelMask_set = GetProcAddress(hDll, "CSharp_AkChannelConfig_uChannelMask_set");
  (FARPROC&)Actual_CSharp_AkChannelConfig_uNumChannels_get = GetProcAddress(hDll, "CSharp_AkChannelConfig_uNumChannels_get");
  (FARPROC&)Actual_CSharp_AkChannelConfig_uNumChannels_set = GetProcAddress(hDll, "CSharp_AkChannelConfig_uNumChannels_set");
  (FARPROC&)Actual_CSharp_AkChannelEmitter_position_get = GetProcAddress(hDll, "CSharp_AkChannelEmitter_position_get");
  (FARPROC&)Actual_CSharp_AkChannelEmitter_position_set = GetProcAddress(hDll, "CSharp_AkChannelEmitter_position_set");
  (FARPROC&)Actual_CSharp_AkChannelEmitter_uInputChannels_get = GetProcAddress(hDll, "CSharp_AkChannelEmitter_uInputChannels_get");
  (FARPROC&)Actual_CSharp_AkChannelEmitter_uInputChannels_set = GetProcAddress(hDll, "CSharp_AkChannelEmitter_uInputChannels_set");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_bUseStreamCache_get = GetProcAddress(hDll, "CSharp_AkDeviceSettings_bUseStreamCache_get");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_bUseStreamCache_set = GetProcAddress(hDll, "CSharp_AkDeviceSettings_bUseStreamCache_set");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_ePoolAttributes_get = GetProcAddress(hDll, "CSharp_AkDeviceSettings_ePoolAttributes_get");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_ePoolAttributes_set = GetProcAddress(hDll, "CSharp_AkDeviceSettings_ePoolAttributes_set");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_get = GetProcAddress(hDll, "CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_get");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_set = GetProcAddress(hDll, "CSharp_AkDeviceSettings_fTargetAutoStmBufferLength_set");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_pIOMemory_get = GetProcAddress(hDll, "CSharp_AkDeviceSettings_pIOMemory_get");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_pIOMemory_set = GetProcAddress(hDll, "CSharp_AkDeviceSettings_pIOMemory_set");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_threadProperties_get = GetProcAddress(hDll, "CSharp_AkDeviceSettings_threadProperties_get");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_threadProperties_set = GetProcAddress(hDll, "CSharp_AkDeviceSettings_threadProperties_set");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uGranularity_get = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uGranularity_get");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uGranularity_set = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uGranularity_set");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uIOMemoryAlignment_get = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uIOMemoryAlignment_get");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uIOMemoryAlignment_set = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uIOMemoryAlignment_set");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uIOMemorySize_get = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uIOMemorySize_get");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uIOMemorySize_set = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uIOMemorySize_set");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uMaxCachePinnedBytes_get = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uMaxCachePinnedBytes_get");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uMaxCachePinnedBytes_set = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uMaxCachePinnedBytes_set");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uMaxConcurrentIO_get = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uMaxConcurrentIO_get");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uMaxConcurrentIO_set = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uMaxConcurrentIO_set");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uSchedulerTypeFlags_get = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uSchedulerTypeFlags_get");
  (FARPROC&)Actual_CSharp_AkDeviceSettings_uSchedulerTypeFlags_set = GetProcAddress(hDll, "CSharp_AkDeviceSettings_uSchedulerTypeFlags_set");
  (FARPROC&)Actual_CSharp_AkDurationCallbackInfo_audioNodeID_get = GetProcAddress(hDll, "CSharp_AkDurationCallbackInfo_audioNodeID_get");
  (FARPROC&)Actual_CSharp_AkDurationCallbackInfo_bStreaming_get = GetProcAddress(hDll, "CSharp_AkDurationCallbackInfo_bStreaming_get");
  (FARPROC&)Actual_CSharp_AkDurationCallbackInfo_fDuration_get = GetProcAddress(hDll, "CSharp_AkDurationCallbackInfo_fDuration_get");
  (FARPROC&)Actual_CSharp_AkDurationCallbackInfo_fEstimatedDuration_get = GetProcAddress(hDll, "CSharp_AkDurationCallbackInfo_fEstimatedDuration_get");
  (FARPROC&)Actual_CSharp_AkDurationCallbackInfo_mediaID_get = GetProcAddress(hDll, "CSharp_AkDurationCallbackInfo_mediaID_get");
  (FARPROC&)Actual_CSharp_AkDurationCallbackInfo_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkDurationCallbackInfo_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkDynamicSequenceItemCallbackInfo_audioNodeID_get = GetProcAddress(hDll, "CSharp_AkDynamicSequenceItemCallbackInfo_audioNodeID_get");
  (FARPROC&)Actual_CSharp_AkDynamicSequenceItemCallbackInfo_pCustomInfo_get = GetProcAddress(hDll, "CSharp_AkDynamicSequenceItemCallbackInfo_pCustomInfo_get");
  (FARPROC&)Actual_CSharp_AkDynamicSequenceItemCallbackInfo_playingID_get = GetProcAddress(hDll, "CSharp_AkDynamicSequenceItemCallbackInfo_playingID_get");
  (FARPROC&)Actual_CSharp_AkDynamicSequenceItemCallbackInfo_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkDynamicSequenceItemCallbackInfo_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_reflectAuxBusID_get = GetProcAddress(hDll, "CSharp_AkEmitterSettings_reflectAuxBusID_get");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_reflectAuxBusID_set = GetProcAddress(hDll, "CSharp_AkEmitterSettings_reflectAuxBusID_set");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_reflectionMaxPathLength_get = GetProcAddress(hDll, "CSharp_AkEmitterSettings_reflectionMaxPathLength_get");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_reflectionMaxPathLength_set = GetProcAddress(hDll, "CSharp_AkEmitterSettings_reflectionMaxPathLength_set");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_reflectionsAuxBusGain_get = GetProcAddress(hDll, "CSharp_AkEmitterSettings_reflectionsAuxBusGain_get");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_reflectionsAuxBusGain_set = GetProcAddress(hDll, "CSharp_AkEmitterSettings_reflectionsAuxBusGain_set");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_reflectionsOrder_get = GetProcAddress(hDll, "CSharp_AkEmitterSettings_reflectionsOrder_get");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_reflectionsOrder_set = GetProcAddress(hDll, "CSharp_AkEmitterSettings_reflectionsOrder_set");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_reflectorFilterMask_get = GetProcAddress(hDll, "CSharp_AkEmitterSettings_reflectorFilterMask_get");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_reflectorFilterMask_set = GetProcAddress(hDll, "CSharp_AkEmitterSettings_reflectorFilterMask_set");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_roomReverbAuxBusGain_get = GetProcAddress(hDll, "CSharp_AkEmitterSettings_roomReverbAuxBusGain_get");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_roomReverbAuxBusGain_set = GetProcAddress(hDll, "CSharp_AkEmitterSettings_roomReverbAuxBusGain_set");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_useImageSources_get = GetProcAddress(hDll, "CSharp_AkEmitterSettings_useImageSources_get");
  (FARPROC&)Actual_CSharp_AkEmitterSettings_useImageSources_set = GetProcAddress(hDll, "CSharp_AkEmitterSettings_useImageSources_set");
  (FARPROC&)Actual_CSharp_AkEventCallbackInfo_eventID_get = GetProcAddress(hDll, "CSharp_AkEventCallbackInfo_eventID_get");
  (FARPROC&)Actual_CSharp_AkEventCallbackInfo_playingID_get = GetProcAddress(hDll, "CSharp_AkEventCallbackInfo_playingID_get");
  (FARPROC&)Actual_CSharp_AkEventCallbackInfo_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkEventCallbackInfo_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_idCodec_get = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_idCodec_get");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_idCodec_set = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_idCodec_set");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_idFile_get = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_idFile_get");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_idFile_set = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_idFile_set");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_iExternalSrcCookie_get = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_iExternalSrcCookie_get");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_iExternalSrcCookie_set = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_iExternalSrcCookie_set");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_pInMemory_get = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_pInMemory_get");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_pInMemory_set = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_pInMemory_set");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_szFile_get = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_szFile_get");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_szFile_set = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_szFile_set");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_uiMemorySize_get = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_uiMemorySize_get");
  (FARPROC&)Actual_CSharp_AkExternalSourceInfo_uiMemorySize_set = GetProcAddress(hDll, "CSharp_AkExternalSourceInfo_uiMemorySize_set");
  (FARPROC&)Actual_CSharp_AkImageSourceParams_fDistanceScalingFactor_get = GetProcAddress(hDll, "CSharp_AkImageSourceParams_fDistanceScalingFactor_get");
  (FARPROC&)Actual_CSharp_AkImageSourceParams_fDistanceScalingFactor_set = GetProcAddress(hDll, "CSharp_AkImageSourceParams_fDistanceScalingFactor_set");
  (FARPROC&)Actual_CSharp_AkImageSourceParams_fLevel_get = GetProcAddress(hDll, "CSharp_AkImageSourceParams_fLevel_get");
  (FARPROC&)Actual_CSharp_AkImageSourceParams_fLevel_set = GetProcAddress(hDll, "CSharp_AkImageSourceParams_fLevel_set");
  (FARPROC&)Actual_CSharp_AkImageSourceParams_sourcePosition_get = GetProcAddress(hDll, "CSharp_AkImageSourceParams_sourcePosition_get");
  (FARPROC&)Actual_CSharp_AkImageSourceParams_sourcePosition_set = GetProcAddress(hDll, "CSharp_AkImageSourceParams_sourcePosition_set");
  (FARPROC&)Actual_CSharp_AkImageSourceSettings_params__get = GetProcAddress(hDll, "CSharp_AkImageSourceSettings_params__get");
  (FARPROC&)Actual_CSharp_AkImageSourceSettings_params__set = GetProcAddress(hDll, "CSharp_AkImageSourceSettings_params__set");
  (FARPROC&)Actual_CSharp_AkImageSourceSettings_SetName = GetProcAddress(hDll, "CSharp_AkImageSourceSettings_SetName");
  (FARPROC&)Actual_CSharp_AkImageSourceSettings_SetOneTexture = GetProcAddress(hDll, "CSharp_AkImageSourceSettings_SetOneTexture");
  (FARPROC&)Actual_CSharp_AkInitSettings_bEnableGameSyncPreparation_get = GetProcAddress(hDll, "CSharp_AkInitSettings_bEnableGameSyncPreparation_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_bEnableGameSyncPreparation_set = GetProcAddress(hDll, "CSharp_AkInitSettings_bEnableGameSyncPreparation_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_bUseLEngineThread_get = GetProcAddress(hDll, "CSharp_AkInitSettings_bUseLEngineThread_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_bUseLEngineThread_set = GetProcAddress(hDll, "CSharp_AkInitSettings_bUseLEngineThread_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_bUseSoundBankMgrThread_get = GetProcAddress(hDll, "CSharp_AkInitSettings_bUseSoundBankMgrThread_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_bUseSoundBankMgrThread_set = GetProcAddress(hDll, "CSharp_AkInitSettings_bUseSoundBankMgrThread_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_fDefaultPoolRatioThreshold_get = GetProcAddress(hDll, "CSharp_AkInitSettings_fDefaultPoolRatioThreshold_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_fDefaultPoolRatioThreshold_set = GetProcAddress(hDll, "CSharp_AkInitSettings_fDefaultPoolRatioThreshold_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_pfnAssertHook_get = GetProcAddress(hDll, "CSharp_AkInitSettings_pfnAssertHook_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_pfnAssertHook_set = GetProcAddress(hDll, "CSharp_AkInitSettings_pfnAssertHook_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_settingsMainOutput_get = GetProcAddress(hDll, "CSharp_AkInitSettings_settingsMainOutput_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_settingsMainOutput_set = GetProcAddress(hDll, "CSharp_AkInitSettings_settingsMainOutput_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_szPluginDLLPath_get = GetProcAddress(hDll, "CSharp_AkInitSettings_szPluginDLLPath_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_szPluginDLLPath_set = GetProcAddress(hDll, "CSharp_AkInitSettings_szPluginDLLPath_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_uCommandQueueSize_get = GetProcAddress(hDll, "CSharp_AkInitSettings_uCommandQueueSize_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_uCommandQueueSize_set = GetProcAddress(hDll, "CSharp_AkInitSettings_uCommandQueueSize_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_uContinuousPlaybackLookAhead_get = GetProcAddress(hDll, "CSharp_AkInitSettings_uContinuousPlaybackLookAhead_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_uContinuousPlaybackLookAhead_set = GetProcAddress(hDll, "CSharp_AkInitSettings_uContinuousPlaybackLookAhead_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_uDefaultPoolSize_get = GetProcAddress(hDll, "CSharp_AkInitSettings_uDefaultPoolSize_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_uDefaultPoolSize_set = GetProcAddress(hDll, "CSharp_AkInitSettings_uDefaultPoolSize_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_uMaxHardwareTimeoutMs_get = GetProcAddress(hDll, "CSharp_AkInitSettings_uMaxHardwareTimeoutMs_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_uMaxHardwareTimeoutMs_set = GetProcAddress(hDll, "CSharp_AkInitSettings_uMaxHardwareTimeoutMs_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_uMaxNumPaths_get = GetProcAddress(hDll, "CSharp_AkInitSettings_uMaxNumPaths_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_uMaxNumPaths_set = GetProcAddress(hDll, "CSharp_AkInitSettings_uMaxNumPaths_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_uMonitorPoolSize_get = GetProcAddress(hDll, "CSharp_AkInitSettings_uMonitorPoolSize_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_uMonitorPoolSize_set = GetProcAddress(hDll, "CSharp_AkInitSettings_uMonitorPoolSize_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_uMonitorQueuePoolSize_get = GetProcAddress(hDll, "CSharp_AkInitSettings_uMonitorQueuePoolSize_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_uMonitorQueuePoolSize_set = GetProcAddress(hDll, "CSharp_AkInitSettings_uMonitorQueuePoolSize_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_uNumSamplesPerFrame_get = GetProcAddress(hDll, "CSharp_AkInitSettings_uNumSamplesPerFrame_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_uNumSamplesPerFrame_set = GetProcAddress(hDll, "CSharp_AkInitSettings_uNumSamplesPerFrame_set");
  (FARPROC&)Actual_CSharp_AkInitSettings_uPrepareEventMemoryPoolID_get = GetProcAddress(hDll, "CSharp_AkInitSettings_uPrepareEventMemoryPoolID_get");
  (FARPROC&)Actual_CSharp_AkInitSettings_uPrepareEventMemoryPoolID_set = GetProcAddress(hDll, "CSharp_AkInitSettings_uPrepareEventMemoryPoolID_set");
  (FARPROC&)Actual_CSharp_AkIterator_GetItem = GetProcAddress(hDll, "CSharp_AkIterator_GetItem");
  (FARPROC&)Actual_CSharp_AkIterator_IsDifferentFrom = GetProcAddress(hDll, "CSharp_AkIterator_IsDifferentFrom");
  (FARPROC&)Actual_CSharp_AkIterator_IsEqualTo = GetProcAddress(hDll, "CSharp_AkIterator_IsEqualTo");
  (FARPROC&)Actual_CSharp_AkIterator_NextIter = GetProcAddress(hDll, "CSharp_AkIterator_NextIter");
  (FARPROC&)Actual_CSharp_AkIterator_pItem_get = GetProcAddress(hDll, "CSharp_AkIterator_pItem_get");
  (FARPROC&)Actual_CSharp_AkIterator_pItem_set = GetProcAddress(hDll, "CSharp_AkIterator_pItem_set");
  (FARPROC&)Actual_CSharp_AkIterator_PrevIter = GetProcAddress(hDll, "CSharp_AkIterator_PrevIter");
  (FARPROC&)Actual_CSharp_AkMarkerCallbackInfo_strLabel_get = GetProcAddress(hDll, "CSharp_AkMarkerCallbackInfo_strLabel_get");
  (FARPROC&)Actual_CSharp_AkMarkerCallbackInfo_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkMarkerCallbackInfo_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkMarkerCallbackInfo_uIdentifier_get = GetProcAddress(hDll, "CSharp_AkMarkerCallbackInfo_uIdentifier_get");
  (FARPROC&)Actual_CSharp_AkMarkerCallbackInfo_uPosition_get = GetProcAddress(hDll, "CSharp_AkMarkerCallbackInfo_uPosition_get");
  (FARPROC&)Actual_CSharp_AkMemSettings_uDebugFlags_get = GetProcAddress(hDll, "CSharp_AkMemSettings_uDebugFlags_get");
  (FARPROC&)Actual_CSharp_AkMemSettings_uDebugFlags_set = GetProcAddress(hDll, "CSharp_AkMemSettings_uDebugFlags_set");
  (FARPROC&)Actual_CSharp_AkMemSettings_uMaxNumPools_get = GetProcAddress(hDll, "CSharp_AkMemSettings_uMaxNumPools_get");
  (FARPROC&)Actual_CSharp_AkMemSettings_uMaxNumPools_set = GetProcAddress(hDll, "CSharp_AkMemSettings_uMaxNumPools_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byAftertouchNote_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byAftertouchNote_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byAftertouchNote_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byAftertouchNote_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byCc_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byCc_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byCc_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byCc_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byCcValue_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byCcValue_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byCcValue_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byCcValue_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byChan_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byChan_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byChan_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byChan_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byChanAftertouchValue_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byChanAftertouchValue_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byChanAftertouchValue_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byChanAftertouchValue_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byNoteAftertouchValue_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byNoteAftertouchValue_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byNoteAftertouchValue_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byNoteAftertouchValue_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byOnOffNote_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byOnOffNote_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byOnOffNote_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byOnOffNote_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byProgramNum_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byProgramNum_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byProgramNum_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byProgramNum_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byType_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byType_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byType_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byType_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byValueLsb_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byValueLsb_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byValueLsb_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byValueLsb_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byValueMsb_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byValueMsb_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byValueMsb_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byValueMsb_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byVelocity_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byVelocity_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_byVelocity_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_byVelocity_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_Cc_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_Cc_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_Cc_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_Cc_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_ChanAftertouch_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_ChanAftertouch_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_ChanAftertouch_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_ChanAftertouch_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_Gen_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_Gen_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_Gen_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_Gen_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_NoteAftertouch_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_NoteAftertouch_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_NoteAftertouch_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_NoteAftertouch_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_NoteOnOff_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_NoteOnOff_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_NoteOnOff_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_NoteOnOff_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_PitchBend_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_PitchBend_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_PitchBend_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_PitchBend_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_ProgramChange_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_ProgramChange_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_ProgramChange_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_ProgramChange_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tCc_byCc_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tCc_byCc_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tCc_byCc_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tCc_byCc_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tCc_byValue_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tCc_byValue_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tCc_byValue_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tCc_byValue_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tChanAftertouch_byValue_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tChanAftertouch_byValue_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tChanAftertouch_byValue_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tChanAftertouch_byValue_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tGen_byParam1_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tGen_byParam1_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tGen_byParam1_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tGen_byParam1_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tGen_byParam2_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tGen_byParam2_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tGen_byParam2_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tGen_byParam2_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byNote_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tNoteAftertouch_byNote_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byNote_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tNoteAftertouch_byNote_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byValue_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tNoteAftertouch_byValue_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tNoteAftertouch_byValue_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tNoteAftertouch_byValue_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tNoteOnOff_byNote_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tNoteOnOff_byNote_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tNoteOnOff_byNote_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tNoteOnOff_byNote_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tNoteOnOff_byVelocity_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tPitchBend_byValueLsb_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tPitchBend_byValueLsb_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tPitchBend_byValueLsb_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tPitchBend_byValueLsb_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tPitchBend_byValueMsb_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tPitchBend_byValueMsb_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tPitchBend_byValueMsb_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tPitchBend_byValueMsb_set");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tProgramChange_byProgramNum_get = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tProgramChange_byProgramNum_get");
  (FARPROC&)Actual_CSharp_AkMIDIEvent_tProgramChange_byProgramNum_set = GetProcAddress(hDll, "CSharp_AkMIDIEvent_tProgramChange_byProgramNum_set");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byAftertouchNote_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byAftertouchNote_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byCc_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byCc_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byCcValue_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byCcValue_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byChan_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byChan_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byChanAftertouchValue_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byChanAftertouchValue_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byNoteAftertouchValue_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byNoteAftertouchValue_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byOnOffNote_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byOnOffNote_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byParam1_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byParam1_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byParam2_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byParam2_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byProgramNum_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byProgramNum_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byType_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byType_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byValueLsb_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byValueLsb_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byValueMsb_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byValueMsb_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_byVelocity_get = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_byVelocity_get");
  (FARPROC&)Actual_CSharp_AkMIDIEventCallbackInfo_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkMIDIEventCallbackInfo_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkMIDIPost_Clone = GetProcAddress(hDll, "CSharp_AkMIDIPost_Clone");
  (FARPROC&)Actual_CSharp_AkMIDIPost_GetSizeOf = GetProcAddress(hDll, "CSharp_AkMIDIPost_GetSizeOf");
  (FARPROC&)Actual_CSharp_AkMIDIPost_PostOnEvent = GetProcAddress(hDll, "CSharp_AkMIDIPost_PostOnEvent");
  (FARPROC&)Actual_CSharp_AkMIDIPost_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkMIDIPost_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkMIDIPost_uOffset_get = GetProcAddress(hDll, "CSharp_AkMIDIPost_uOffset_get");
  (FARPROC&)Actual_CSharp_AkMIDIPost_uOffset_set = GetProcAddress(hDll, "CSharp_AkMIDIPost_uOffset_set");
  (FARPROC&)Actual_CSharp_AkMonitoringCallbackInfo_errorCode_get = GetProcAddress(hDll, "CSharp_AkMonitoringCallbackInfo_errorCode_get");
  (FARPROC&)Actual_CSharp_AkMonitoringCallbackInfo_errorLevel_get = GetProcAddress(hDll, "CSharp_AkMonitoringCallbackInfo_errorLevel_get");
  (FARPROC&)Actual_CSharp_AkMonitoringCallbackInfo_gameObjID_get = GetProcAddress(hDll, "CSharp_AkMonitoringCallbackInfo_gameObjID_get");
  (FARPROC&)Actual_CSharp_AkMonitoringCallbackInfo_message_get = GetProcAddress(hDll, "CSharp_AkMonitoringCallbackInfo_message_get");
  (FARPROC&)Actual_CSharp_AkMonitoringCallbackInfo_playingID_get = GetProcAddress(hDll, "CSharp_AkMonitoringCallbackInfo_playingID_get");
  (FARPROC&)Actual_CSharp_AkMusicPlaylistCallbackInfo_playlistID_get = GetProcAddress(hDll, "CSharp_AkMusicPlaylistCallbackInfo_playlistID_get");
  (FARPROC&)Actual_CSharp_AkMusicPlaylistCallbackInfo_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkMusicPlaylistCallbackInfo_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkMusicPlaylistCallbackInfo_uNumPlaylistItems_get = GetProcAddress(hDll, "CSharp_AkMusicPlaylistCallbackInfo_uNumPlaylistItems_get");
  (FARPROC&)Actual_CSharp_AkMusicPlaylistCallbackInfo_uPlaylistItemDone_get = GetProcAddress(hDll, "CSharp_AkMusicPlaylistCallbackInfo_uPlaylistItemDone_get");
  (FARPROC&)Actual_CSharp_AkMusicPlaylistCallbackInfo_uPlaylistSelection_get = GetProcAddress(hDll, "CSharp_AkMusicPlaylistCallbackInfo_uPlaylistSelection_get");
  (FARPROC&)Actual_CSharp_AkMusicSettings_fStreamingLookAheadRatio_get = GetProcAddress(hDll, "CSharp_AkMusicSettings_fStreamingLookAheadRatio_get");
  (FARPROC&)Actual_CSharp_AkMusicSettings_fStreamingLookAheadRatio_set = GetProcAddress(hDll, "CSharp_AkMusicSettings_fStreamingLookAheadRatio_set");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_musicSyncType_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_musicSyncType_get");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_playingID_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_playingID_get");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBarDuration_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBarDuration_get");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBeatDuration_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_segmentInfo_fBeatDuration_get");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridDuration_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridDuration_get");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridOffset_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_segmentInfo_fGridOffset_get");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iActiveDuration_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_segmentInfo_iActiveDuration_get");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iCurrentPosition_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_segmentInfo_iCurrentPosition_get");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPostExitDuration_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPostExitDuration_get");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPreEntryDuration_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_segmentInfo_iPreEntryDuration_get");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_segmentInfo_iRemainingLookAheadTime_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_segmentInfo_iRemainingLookAheadTime_get");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkMusicSyncCallbackInfo_userCueName_get = GetProcAddress(hDll, "CSharp_AkMusicSyncCallbackInfo_userCueName_get");
  (FARPROC&)Actual_CSharp_AkObjectInfo_iDepth_get = GetProcAddress(hDll, "CSharp_AkObjectInfo_iDepth_get");
  (FARPROC&)Actual_CSharp_AkObjectInfo_iDepth_set = GetProcAddress(hDll, "CSharp_AkObjectInfo_iDepth_set");
  (FARPROC&)Actual_CSharp_AkObjectInfo_objID_get = GetProcAddress(hDll, "CSharp_AkObjectInfo_objID_get");
  (FARPROC&)Actual_CSharp_AkObjectInfo_objID_set = GetProcAddress(hDll, "CSharp_AkObjectInfo_objID_set");
  (FARPROC&)Actual_CSharp_AkObjectInfo_parentID_get = GetProcAddress(hDll, "CSharp_AkObjectInfo_parentID_get");
  (FARPROC&)Actual_CSharp_AkObjectInfo_parentID_set = GetProcAddress(hDll, "CSharp_AkObjectInfo_parentID_set");
  (FARPROC&)Actual_CSharp_AkObstructionOcclusionValues_obstruction_get = GetProcAddress(hDll, "CSharp_AkObstructionOcclusionValues_obstruction_get");
  (FARPROC&)Actual_CSharp_AkObstructionOcclusionValues_obstruction_set = GetProcAddress(hDll, "CSharp_AkObstructionOcclusionValues_obstruction_set");
  (FARPROC&)Actual_CSharp_AkObstructionOcclusionValues_occlusion_get = GetProcAddress(hDll, "CSharp_AkObstructionOcclusionValues_occlusion_get");
  (FARPROC&)Actual_CSharp_AkObstructionOcclusionValues_occlusion_set = GetProcAddress(hDll, "CSharp_AkObstructionOcclusionValues_occlusion_set");
  (FARPROC&)Actual_CSharp_AkOutputSettings_audioDeviceShareset_get = GetProcAddress(hDll, "CSharp_AkOutputSettings_audioDeviceShareset_get");
  (FARPROC&)Actual_CSharp_AkOutputSettings_audioDeviceShareset_set = GetProcAddress(hDll, "CSharp_AkOutputSettings_audioDeviceShareset_set");
  (FARPROC&)Actual_CSharp_AkOutputSettings_channelConfig_get = GetProcAddress(hDll, "CSharp_AkOutputSettings_channelConfig_get");
  (FARPROC&)Actual_CSharp_AkOutputSettings_channelConfig_set = GetProcAddress(hDll, "CSharp_AkOutputSettings_channelConfig_set");
  (FARPROC&)Actual_CSharp_AkOutputSettings_ePanningRule_get = GetProcAddress(hDll, "CSharp_AkOutputSettings_ePanningRule_get");
  (FARPROC&)Actual_CSharp_AkOutputSettings_ePanningRule_set = GetProcAddress(hDll, "CSharp_AkOutputSettings_ePanningRule_set");
  (FARPROC&)Actual_CSharp_AkOutputSettings_idDevice_get = GetProcAddress(hDll, "CSharp_AkOutputSettings_idDevice_get");
  (FARPROC&)Actual_CSharp_AkOutputSettings_idDevice_set = GetProcAddress(hDll, "CSharp_AkOutputSettings_idDevice_set");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_bGlobalFocus_get = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_bGlobalFocus_get");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_bGlobalFocus_set = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_bGlobalFocus_set");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_eAudioAPI_get = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_eAudioAPI_get");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_eAudioAPI_set = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_eAudioAPI_set");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_get = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_get");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_set = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_fLEngineDefaultPoolRatioThreshold_set");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_threadBankManager_get = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_threadBankManager_get");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_threadBankManager_set = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_threadBankManager_set");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_threadLEngine_get = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_threadLEngine_get");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_threadLEngine_set = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_threadLEngine_set");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_threadMonitor_get = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_threadMonitor_get");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_threadMonitor_set = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_threadMonitor_set");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_get = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_get");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_set = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_uLEngineDefaultPoolSize_set");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_uNumRefillsInVoice_get = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_uNumRefillsInVoice_get");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_uNumRefillsInVoice_set = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_uNumRefillsInVoice_set");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_uSampleRate_get = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_uSampleRate_get");
  (FARPROC&)Actual_CSharp_AkPlatformInitSettings_uSampleRate_set = GetProcAddress(hDll, "CSharp_AkPlatformInitSettings_uSampleRate_set");
  (FARPROC&)Actual_CSharp_AkPlaylist_Enqueue__SWIG_0 = GetProcAddress(hDll, "CSharp_AkPlaylist_Enqueue__SWIG_0");
  (FARPROC&)Actual_CSharp_AkPlaylist_Enqueue__SWIG_1 = GetProcAddress(hDll, "CSharp_AkPlaylist_Enqueue__SWIG_1");
  (FARPROC&)Actual_CSharp_AkPlaylist_Enqueue__SWIG_2 = GetProcAddress(hDll, "CSharp_AkPlaylist_Enqueue__SWIG_2");
  (FARPROC&)Actual_CSharp_AkPlaylist_Enqueue__SWIG_3 = GetProcAddress(hDll, "CSharp_AkPlaylist_Enqueue__SWIG_3");
  (FARPROC&)Actual_CSharp_AkPlaylist_Enqueue__SWIG_4 = GetProcAddress(hDll, "CSharp_AkPlaylist_Enqueue__SWIG_4");
  (FARPROC&)Actual_CSharp_AkPlaylist_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkPlaylist_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_AddLast__SWIG_0 = GetProcAddress(hDll, "CSharp_AkPlaylistArray_AddLast__SWIG_0");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_AddLast__SWIG_1 = GetProcAddress(hDll, "CSharp_AkPlaylistArray_AddLast__SWIG_1");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Begin = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Begin");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Copy = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Copy");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_End = GetProcAddress(hDll, "CSharp_AkPlaylistArray_End");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Erase__SWIG_0 = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Erase__SWIG_0");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Erase__SWIG_1 = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Erase__SWIG_1");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_EraseSwap = GetProcAddress(hDll, "CSharp_AkPlaylistArray_EraseSwap");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Exists = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Exists");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_FindEx = GetProcAddress(hDll, "CSharp_AkPlaylistArray_FindEx");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_GrowArray__SWIG_0 = GetProcAddress(hDll, "CSharp_AkPlaylistArray_GrowArray__SWIG_0");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_GrowArray__SWIG_1 = GetProcAddress(hDll, "CSharp_AkPlaylistArray_GrowArray__SWIG_1");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Insert = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Insert");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_IsEmpty = GetProcAddress(hDll, "CSharp_AkPlaylistArray_IsEmpty");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_ItemAtIndex = GetProcAddress(hDll, "CSharp_AkPlaylistArray_ItemAtIndex");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Last = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Last");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Length = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Length");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Remove = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Remove");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_RemoveAll = GetProcAddress(hDll, "CSharp_AkPlaylistArray_RemoveAll");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_RemoveLast = GetProcAddress(hDll, "CSharp_AkPlaylistArray_RemoveLast");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_RemoveSwap = GetProcAddress(hDll, "CSharp_AkPlaylistArray_RemoveSwap");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Reserve = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Reserve");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Reserved = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Reserved");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Resize = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Resize");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Term = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Term");
  (FARPROC&)Actual_CSharp_AkPlaylistArray_Transfer = GetProcAddress(hDll, "CSharp_AkPlaylistArray_Transfer");
  (FARPROC&)Actual_CSharp_AkPlaylistItem_Assign = GetProcAddress(hDll, "CSharp_AkPlaylistItem_Assign");
  (FARPROC&)Actual_CSharp_AkPlaylistItem_audioNodeID_get = GetProcAddress(hDll, "CSharp_AkPlaylistItem_audioNodeID_get");
  (FARPROC&)Actual_CSharp_AkPlaylistItem_audioNodeID_set = GetProcAddress(hDll, "CSharp_AkPlaylistItem_audioNodeID_set");
  (FARPROC&)Actual_CSharp_AkPlaylistItem_IsEqualTo = GetProcAddress(hDll, "CSharp_AkPlaylistItem_IsEqualTo");
  (FARPROC&)Actual_CSharp_AkPlaylistItem_msDelay_get = GetProcAddress(hDll, "CSharp_AkPlaylistItem_msDelay_get");
  (FARPROC&)Actual_CSharp_AkPlaylistItem_msDelay_set = GetProcAddress(hDll, "CSharp_AkPlaylistItem_msDelay_set");
  (FARPROC&)Actual_CSharp_AkPlaylistItem_pCustomInfo_get = GetProcAddress(hDll, "CSharp_AkPlaylistItem_pCustomInfo_get");
  (FARPROC&)Actual_CSharp_AkPlaylistItem_pCustomInfo_set = GetProcAddress(hDll, "CSharp_AkPlaylistItem_pCustomInfo_set");
  (FARPROC&)Actual_CSharp_AkPlaylistItem_SetExternalSources = GetProcAddress(hDll, "CSharp_AkPlaylistItem_SetExternalSources");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_bUpdateEachFrame_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_bUpdateEachFrame_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_bUpdateEachFrame_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_bUpdateEachFrame_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_bUseAttenuation_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_bUseAttenuation_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_bUseAttenuation_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_bUseAttenuation_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_bUseConeAttenuation_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_bUseConeAttenuation_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_bUseConeAttenuation_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_bUseConeAttenuation_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_e3DSpatializationMode_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_e3DSpatializationMode_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_e3DSpatializationMode_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_e3DSpatializationMode_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fCenterPct_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fCenterPct_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fCenterPct_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fCenterPct_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fConeMaxAttenuation_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fConeMaxAttenuation_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fConeMaxAttenuation_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fConeMaxAttenuation_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fInnerAngle_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fInnerAngle_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fInnerAngle_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fInnerAngle_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fMaxDistance_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fMaxDistance_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fMaxDistance_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fMaxDistance_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fOuterAngle_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fOuterAngle_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fOuterAngle_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fOuterAngle_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fVolAuxGameDefAtMaxDist_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fVolAuxUserDefAtMaxDist_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fVolDryAtMaxDist_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fVolDryAtMaxDist_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_fVolDryAtMaxDist_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_fVolDryAtMaxDist_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_HPFCone_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_HPFCone_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_HPFCone_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_HPFCone_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_HPFValueAtMaxDist_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_HPFValueAtMaxDist_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_HPFValueAtMaxDist_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_HPFValueAtMaxDist_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_LPFCone_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_LPFCone_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_LPFCone_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_LPFCone_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_LPFValueAtMaxDist_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_LPFValueAtMaxDist_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_LPFValueAtMaxDist_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_LPFValueAtMaxDist_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_pannerType_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_pannerType_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_pannerType_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_pannerType_set");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_posSourceType_get = GetProcAddress(hDll, "CSharp_AkPositioningInfo_posSourceType_get");
  (FARPROC&)Actual_CSharp_AkPositioningInfo_posSourceType_set = GetProcAddress(hDll, "CSharp_AkPositioningInfo_posSourceType_set");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_dryDiffractionAngle_get = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_dryDiffractionAngle_get");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_dryDiffractionAngle_set = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_dryDiffractionAngle_set");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_gain_get = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_gain_get");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_gain_set = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_gain_set");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_length_get = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_length_get");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_length_set = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_length_set");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_nodePoint_get = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_nodePoint_get");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_nodePoint_set = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_nodePoint_set");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_numNodes_get = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_numNodes_get");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_numNodes_set = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_numNodes_set");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_wetDiffractionAngle_get = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_wetDiffractionAngle_get");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfo_wetDiffractionAngle_set = GetProcAddress(hDll, "CSharp_AkPropagationPathInfo_wetDiffractionAngle_set");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfoProxy_GetNodePoint = GetProcAddress(hDll, "CSharp_AkPropagationPathInfoProxy_GetNodePoint");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfoProxy_GetSizeOf = GetProcAddress(hDll, "CSharp_AkPropagationPathInfoProxy_GetSizeOf");
  (FARPROC&)Actual_CSharp_AkPropagationPathInfoProxy_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkPropagationPathInfoProxy_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkRamp_fNext_get = GetProcAddress(hDll, "CSharp_AkRamp_fNext_get");
  (FARPROC&)Actual_CSharp_AkRamp_fNext_set = GetProcAddress(hDll, "CSharp_AkRamp_fNext_set");
  (FARPROC&)Actual_CSharp_AkRamp_fPrev_get = GetProcAddress(hDll, "CSharp_AkRamp_fPrev_get");
  (FARPROC&)Actual_CSharp_AkRamp_fPrev_set = GetProcAddress(hDll, "CSharp_AkRamp_fPrev_set");
  (FARPROC&)Actual_CSharp_AkRoomParams_Front_get = GetProcAddress(hDll, "CSharp_AkRoomParams_Front_get");
  (FARPROC&)Actual_CSharp_AkRoomParams_Front_set = GetProcAddress(hDll, "CSharp_AkRoomParams_Front_set");
  (FARPROC&)Actual_CSharp_AkRoomParams_Priority_get = GetProcAddress(hDll, "CSharp_AkRoomParams_Priority_get");
  (FARPROC&)Actual_CSharp_AkRoomParams_Priority_set = GetProcAddress(hDll, "CSharp_AkRoomParams_Priority_set");
  (FARPROC&)Actual_CSharp_AkRoomParams_ReverbAuxBus_get = GetProcAddress(hDll, "CSharp_AkRoomParams_ReverbAuxBus_get");
  (FARPROC&)Actual_CSharp_AkRoomParams_ReverbAuxBus_set = GetProcAddress(hDll, "CSharp_AkRoomParams_ReverbAuxBus_set");
  (FARPROC&)Actual_CSharp_AkRoomParams_ReverbLevel_get = GetProcAddress(hDll, "CSharp_AkRoomParams_ReverbLevel_get");
  (FARPROC&)Actual_CSharp_AkRoomParams_ReverbLevel_set = GetProcAddress(hDll, "CSharp_AkRoomParams_ReverbLevel_set");
  (FARPROC&)Actual_CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_get = GetProcAddress(hDll, "CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_get");
  (FARPROC&)Actual_CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_set = GetProcAddress(hDll, "CSharp_AkRoomParams_RoomGameObj_AuxSendLevelToSelf_set");
  (FARPROC&)Actual_CSharp_AkRoomParams_RoomGameObj_KeepRegistered_get = GetProcAddress(hDll, "CSharp_AkRoomParams_RoomGameObj_KeepRegistered_get");
  (FARPROC&)Actual_CSharp_AkRoomParams_RoomGameObj_KeepRegistered_set = GetProcAddress(hDll, "CSharp_AkRoomParams_RoomGameObj_KeepRegistered_set");
  (FARPROC&)Actual_CSharp_AkRoomParams_Up_get = GetProcAddress(hDll, "CSharp_AkRoomParams_Up_get");
  (FARPROC&)Actual_CSharp_AkRoomParams_Up_set = GetProcAddress(hDll, "CSharp_AkRoomParams_Up_set");
  (FARPROC&)Actual_CSharp_AkRoomParams_WallOcclusion_get = GetProcAddress(hDll, "CSharp_AkRoomParams_WallOcclusion_get");
  (FARPROC&)Actual_CSharp_AkRoomParams_WallOcclusion_set = GetProcAddress(hDll, "CSharp_AkRoomParams_WallOcclusion_set");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_fBarDuration_get = GetProcAddress(hDll, "CSharp_AkSegmentInfo_fBarDuration_get");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_fBarDuration_set = GetProcAddress(hDll, "CSharp_AkSegmentInfo_fBarDuration_set");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_fBeatDuration_get = GetProcAddress(hDll, "CSharp_AkSegmentInfo_fBeatDuration_get");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_fBeatDuration_set = GetProcAddress(hDll, "CSharp_AkSegmentInfo_fBeatDuration_set");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_fGridDuration_get = GetProcAddress(hDll, "CSharp_AkSegmentInfo_fGridDuration_get");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_fGridDuration_set = GetProcAddress(hDll, "CSharp_AkSegmentInfo_fGridDuration_set");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_fGridOffset_get = GetProcAddress(hDll, "CSharp_AkSegmentInfo_fGridOffset_get");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_fGridOffset_set = GetProcAddress(hDll, "CSharp_AkSegmentInfo_fGridOffset_set");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_iActiveDuration_get = GetProcAddress(hDll, "CSharp_AkSegmentInfo_iActiveDuration_get");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_iActiveDuration_set = GetProcAddress(hDll, "CSharp_AkSegmentInfo_iActiveDuration_set");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_iCurrentPosition_get = GetProcAddress(hDll, "CSharp_AkSegmentInfo_iCurrentPosition_get");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_iCurrentPosition_set = GetProcAddress(hDll, "CSharp_AkSegmentInfo_iCurrentPosition_set");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_iPostExitDuration_get = GetProcAddress(hDll, "CSharp_AkSegmentInfo_iPostExitDuration_get");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_iPostExitDuration_set = GetProcAddress(hDll, "CSharp_AkSegmentInfo_iPostExitDuration_set");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_iPreEntryDuration_get = GetProcAddress(hDll, "CSharp_AkSegmentInfo_iPreEntryDuration_get");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_iPreEntryDuration_set = GetProcAddress(hDll, "CSharp_AkSegmentInfo_iPreEntryDuration_set");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_iRemainingLookAheadTime_get = GetProcAddress(hDll, "CSharp_AkSegmentInfo_iRemainingLookAheadTime_get");
  (FARPROC&)Actual_CSharp_AkSegmentInfo_iRemainingLookAheadTime_set = GetProcAddress(hDll, "CSharp_AkSegmentInfo_iRemainingLookAheadTime_set");
  (FARPROC&)Actual_CSharp_AkSerializedCallbackHeader_eType_get = GetProcAddress(hDll, "CSharp_AkSerializedCallbackHeader_eType_get");
  (FARPROC&)Actual_CSharp_AkSerializedCallbackHeader_GetData = GetProcAddress(hDll, "CSharp_AkSerializedCallbackHeader_GetData");
  (FARPROC&)Actual_CSharp_AkSerializedCallbackHeader_pNext_get = GetProcAddress(hDll, "CSharp_AkSerializedCallbackHeader_pNext_get");
  (FARPROC&)Actual_CSharp_AkSerializedCallbackHeader_pPackage_get = GetProcAddress(hDll, "CSharp_AkSerializedCallbackHeader_pPackage_get");
  (FARPROC&)Actual_CSharp_AkSoundPathInfo_imageSource_get = GetProcAddress(hDll, "CSharp_AkSoundPathInfo_imageSource_get");
  (FARPROC&)Actual_CSharp_AkSoundPathInfo_imageSource_set = GetProcAddress(hDll, "CSharp_AkSoundPathInfo_imageSource_set");
  (FARPROC&)Actual_CSharp_AkSoundPathInfo_isOccluded_get = GetProcAddress(hDll, "CSharp_AkSoundPathInfo_isOccluded_get");
  (FARPROC&)Actual_CSharp_AkSoundPathInfo_isOccluded_set = GetProcAddress(hDll, "CSharp_AkSoundPathInfo_isOccluded_set");
  (FARPROC&)Actual_CSharp_AkSoundPathInfo_numReflections_get = GetProcAddress(hDll, "CSharp_AkSoundPathInfo_numReflections_get");
  (FARPROC&)Actual_CSharp_AkSoundPathInfo_numReflections_set = GetProcAddress(hDll, "CSharp_AkSoundPathInfo_numReflections_set");
  (FARPROC&)Actual_CSharp_AkSoundPathInfo_occlusionPoint_get = GetProcAddress(hDll, "CSharp_AkSoundPathInfo_occlusionPoint_get");
  (FARPROC&)Actual_CSharp_AkSoundPathInfo_occlusionPoint_set = GetProcAddress(hDll, "CSharp_AkSoundPathInfo_occlusionPoint_set");
  (FARPROC&)Actual_CSharp_AkSoundPathInfoProxy_GetReflectionPoint = GetProcAddress(hDll, "CSharp_AkSoundPathInfoProxy_GetReflectionPoint");
  (FARPROC&)Actual_CSharp_AkSoundPathInfoProxy_GetSizeOf = GetProcAddress(hDll, "CSharp_AkSoundPathInfoProxy_GetSizeOf");
  (FARPROC&)Actual_CSharp_AkSoundPathInfoProxy_GetTriangle = GetProcAddress(hDll, "CSharp_AkSoundPathInfoProxy_GetTriangle");
  (FARPROC&)Actual_CSharp_AkSoundPathInfoProxy_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkSoundPathInfoProxy_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkSoundPropagationPathParams_emitterPos_get = GetProcAddress(hDll, "CSharp_AkSoundPropagationPathParams_emitterPos_get");
  (FARPROC&)Actual_CSharp_AkSoundPropagationPathParams_emitterPos_set = GetProcAddress(hDll, "CSharp_AkSoundPropagationPathParams_emitterPos_set");
  (FARPROC&)Actual_CSharp_AkSoundPropagationPathParams_listenerPos_get = GetProcAddress(hDll, "CSharp_AkSoundPropagationPathParams_listenerPos_get");
  (FARPROC&)Actual_CSharp_AkSoundPropagationPathParams_listenerPos_set = GetProcAddress(hDll, "CSharp_AkSoundPropagationPathParams_listenerPos_set");
  (FARPROC&)Actual_CSharp_AkSoundPropagationPathParams_numValidPaths_get = GetProcAddress(hDll, "CSharp_AkSoundPropagationPathParams_numValidPaths_get");
  (FARPROC&)Actual_CSharp_AkSoundPropagationPathParams_numValidPaths_set = GetProcAddress(hDll, "CSharp_AkSoundPropagationPathParams_numValidPaths_set");
  (FARPROC&)Actual_CSharp_AkSourceSettings_pMediaMemory_get = GetProcAddress(hDll, "CSharp_AkSourceSettings_pMediaMemory_get");
  (FARPROC&)Actual_CSharp_AkSourceSettings_pMediaMemory_set = GetProcAddress(hDll, "CSharp_AkSourceSettings_pMediaMemory_set");
  (FARPROC&)Actual_CSharp_AkSourceSettings_sourceID_get = GetProcAddress(hDll, "CSharp_AkSourceSettings_sourceID_get");
  (FARPROC&)Actual_CSharp_AkSourceSettings_sourceID_set = GetProcAddress(hDll, "CSharp_AkSourceSettings_sourceID_set");
  (FARPROC&)Actual_CSharp_AkSourceSettings_uMediaSize_get = GetProcAddress(hDll, "CSharp_AkSourceSettings_uMediaSize_get");
  (FARPROC&)Actual_CSharp_AkSourceSettings_uMediaSize_set = GetProcAddress(hDll, "CSharp_AkSourceSettings_uMediaSize_set");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_get = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_get");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_set = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_fDiffractionShadowAttenFactor_set");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_get = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_get");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_set = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_fDiffractionShadowDegrees_set");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_get = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_get");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_set = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_uDiffractionFlags_set");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_get = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_get");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_set = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_uMaxSoundPropagationDepth_set");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_uPoolID_get = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_uPoolID_get");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_uPoolID_set = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_uPoolID_set");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_uPoolSize_get = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_uPoolSize_get");
  (FARPROC&)Actual_CSharp_AkSpatialAudioInitSettings_uPoolSize_set = GetProcAddress(hDll, "CSharp_AkSpatialAudioInitSettings_uPoolSize_set");
  (FARPROC&)Actual_CSharp_AkStreamMgrSettings_uMemorySize_get = GetProcAddress(hDll, "CSharp_AkStreamMgrSettings_uMemorySize_get");
  (FARPROC&)Actual_CSharp_AkStreamMgrSettings_uMemorySize_set = GetProcAddress(hDll, "CSharp_AkStreamMgrSettings_uMemorySize_set");
  (FARPROC&)Actual_CSharp_AkThreadProperties_dwAffinityMask_get = GetProcAddress(hDll, "CSharp_AkThreadProperties_dwAffinityMask_get");
  (FARPROC&)Actual_CSharp_AkThreadProperties_dwAffinityMask_set = GetProcAddress(hDll, "CSharp_AkThreadProperties_dwAffinityMask_set");
  (FARPROC&)Actual_CSharp_AkThreadProperties_nPriority_get = GetProcAddress(hDll, "CSharp_AkThreadProperties_nPriority_get");
  (FARPROC&)Actual_CSharp_AkThreadProperties_nPriority_set = GetProcAddress(hDll, "CSharp_AkThreadProperties_nPriority_set");
  (FARPROC&)Actual_CSharp_AkThreadProperties_uStackSize_get = GetProcAddress(hDll, "CSharp_AkThreadProperties_uStackSize_get");
  (FARPROC&)Actual_CSharp_AkThreadProperties_uStackSize_set = GetProcAddress(hDll, "CSharp_AkThreadProperties_uStackSize_set");
  (FARPROC&)Actual_CSharp_AkTransform_OrientationFront = GetProcAddress(hDll, "CSharp_AkTransform_OrientationFront");
  (FARPROC&)Actual_CSharp_AkTransform_OrientationTop = GetProcAddress(hDll, "CSharp_AkTransform_OrientationTop");
  (FARPROC&)Actual_CSharp_AkTransform_Position = GetProcAddress(hDll, "CSharp_AkTransform_Position");
  (FARPROC&)Actual_CSharp_AkTransform_Set__SWIG_0 = GetProcAddress(hDll, "CSharp_AkTransform_Set__SWIG_0");
  (FARPROC&)Actual_CSharp_AkTransform_Set__SWIG_1 = GetProcAddress(hDll, "CSharp_AkTransform_Set__SWIG_1");
  (FARPROC&)Actual_CSharp_AkTransform_SetOrientation__SWIG_0 = GetProcAddress(hDll, "CSharp_AkTransform_SetOrientation__SWIG_0");
  (FARPROC&)Actual_CSharp_AkTransform_SetOrientation__SWIG_1 = GetProcAddress(hDll, "CSharp_AkTransform_SetOrientation__SWIG_1");
  (FARPROC&)Actual_CSharp_AkTransform_SetPosition__SWIG_0 = GetProcAddress(hDll, "CSharp_AkTransform_SetPosition__SWIG_0");
  (FARPROC&)Actual_CSharp_AkTransform_SetPosition__SWIG_1 = GetProcAddress(hDll, "CSharp_AkTransform_SetPosition__SWIG_1");
  (FARPROC&)Actual_CSharp_AkTriangle_point0_get = GetProcAddress(hDll, "CSharp_AkTriangle_point0_get");
  (FARPROC&)Actual_CSharp_AkTriangle_point0_set = GetProcAddress(hDll, "CSharp_AkTriangle_point0_set");
  (FARPROC&)Actual_CSharp_AkTriangle_point1_get = GetProcAddress(hDll, "CSharp_AkTriangle_point1_get");
  (FARPROC&)Actual_CSharp_AkTriangle_point1_set = GetProcAddress(hDll, "CSharp_AkTriangle_point1_set");
  (FARPROC&)Actual_CSharp_AkTriangle_point2_get = GetProcAddress(hDll, "CSharp_AkTriangle_point2_get");
  (FARPROC&)Actual_CSharp_AkTriangle_point2_set = GetProcAddress(hDll, "CSharp_AkTriangle_point2_set");
  (FARPROC&)Actual_CSharp_AkTriangle_reflectorChannelMask_get = GetProcAddress(hDll, "CSharp_AkTriangle_reflectorChannelMask_get");
  (FARPROC&)Actual_CSharp_AkTriangle_reflectorChannelMask_set = GetProcAddress(hDll, "CSharp_AkTriangle_reflectorChannelMask_set");
  (FARPROC&)Actual_CSharp_AkTriangle_strName_get = GetProcAddress(hDll, "CSharp_AkTriangle_strName_get");
  (FARPROC&)Actual_CSharp_AkTriangle_strName_set = GetProcAddress(hDll, "CSharp_AkTriangle_strName_set");
  (FARPROC&)Actual_CSharp_AkTriangle_textureID_get = GetProcAddress(hDll, "CSharp_AkTriangle_textureID_get");
  (FARPROC&)Actual_CSharp_AkTriangle_textureID_set = GetProcAddress(hDll, "CSharp_AkTriangle_textureID_set");
  (FARPROC&)Actual_CSharp_AkTriangleProxy_Clear = GetProcAddress(hDll, "CSharp_AkTriangleProxy_Clear");
  (FARPROC&)Actual_CSharp_AkTriangleProxy_DeleteName = GetProcAddress(hDll, "CSharp_AkTriangleProxy_DeleteName");
  (FARPROC&)Actual_CSharp_AkTriangleProxy_GetSizeOf = GetProcAddress(hDll, "CSharp_AkTriangleProxy_GetSizeOf");
  (FARPROC&)Actual_CSharp_AkTriangleProxy_SWIGUpcast = GetProcAddress(hDll, "CSharp_AkTriangleProxy_SWIGUpcast");
  (FARPROC&)Actual_CSharp_AkVector_X_get = GetProcAddress(hDll, "CSharp_AkVector_X_get");
  (FARPROC&)Actual_CSharp_AkVector_X_set = GetProcAddress(hDll, "CSharp_AkVector_X_set");
  (FARPROC&)Actual_CSharp_AkVector_Y_get = GetProcAddress(hDll, "CSharp_AkVector_Y_get");
  (FARPROC&)Actual_CSharp_AkVector_Y_set = GetProcAddress(hDll, "CSharp_AkVector_Y_set");
  (FARPROC&)Actual_CSharp_AkVector_Z_get = GetProcAddress(hDll, "CSharp_AkVector_Z_get");
  (FARPROC&)Actual_CSharp_AkVector_Z_set = GetProcAddress(hDll, "CSharp_AkVector_Z_set");
  (FARPROC&)Actual_CSharp_AkVector_Zero = GetProcAddress(hDll, "CSharp_AkVector_Zero");
  (FARPROC&)Actual_CSharp_BackToSideChannels = GetProcAddress(hDll, "CSharp_BackToSideChannels");
  (FARPROC&)Actual_CSharp_CancelBankCallbackCookie = GetProcAddress(hDll, "CSharp_CancelBankCallbackCookie");
  (FARPROC&)Actual_CSharp_CancelEventCallback = GetProcAddress(hDll, "CSharp_CancelEventCallback");
  (FARPROC&)Actual_CSharp_CancelEventCallbackCookie = GetProcAddress(hDll, "CSharp_CancelEventCallbackCookie");
  (FARPROC&)Actual_CSharp_CancelEventCallbackGameObject = GetProcAddress(hDll, "CSharp_CancelEventCallbackGameObject");
  (FARPROC&)Actual_CSharp_ChannelBitToIndex = GetProcAddress(hDll, "CSharp_ChannelBitToIndex");
  (FARPROC&)Actual_CSharp_ChannelMaskFromNumChannels = GetProcAddress(hDll, "CSharp_ChannelMaskFromNumChannels");
  (FARPROC&)Actual_CSharp_ChannelMaskToNumChannels = GetProcAddress(hDll, "CSharp_ChannelMaskToNumChannels");
  (FARPROC&)Actual_CSharp_ClearBanks = GetProcAddress(hDll, "CSharp_ClearBanks");
  (FARPROC&)Actual_CSharp_ClearPreparedEvents = GetProcAddress(hDll, "CSharp_ClearPreparedEvents");
  (FARPROC&)Actual_CSharp_delete__ArrayPoolDefault = GetProcAddress(hDll, "CSharp_delete__ArrayPoolDefault");
  (FARPROC&)Actual_CSharp_delete__ArrayPoolLEngineDefault = GetProcAddress(hDll, "CSharp_delete__ArrayPoolLEngineDefault");
  (FARPROC&)Actual_CSharp_delete__ArrayPoolSpatialAudio = GetProcAddress(hDll, "CSharp_delete__ArrayPoolSpatialAudio");
  (FARPROC&)Actual_CSharp_delete_AkAudioFormat = GetProcAddress(hDll, "CSharp_delete_AkAudioFormat");
  (FARPROC&)Actual_CSharp_delete_AkAudioInterruptionCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkAudioInterruptionCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkAudioSettings = GetProcAddress(hDll, "CSharp_delete_AkAudioSettings");
  (FARPROC&)Actual_CSharp_delete_AkAudioSourceChangeCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkAudioSourceChangeCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkAuxSendValue = GetProcAddress(hDll, "CSharp_delete_AkAuxSendValue");
  (FARPROC&)Actual_CSharp_delete_AkBankCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkBankCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkCallbackSerializer = GetProcAddress(hDll, "CSharp_delete_AkCallbackSerializer");
  (FARPROC&)Actual_CSharp_delete_AkChannelConfig = GetProcAddress(hDll, "CSharp_delete_AkChannelConfig");
  (FARPROC&)Actual_CSharp_delete_AkChannelEmitter = GetProcAddress(hDll, "CSharp_delete_AkChannelEmitter");
  (FARPROC&)Actual_CSharp_delete_AkDeviceSettings = GetProcAddress(hDll, "CSharp_delete_AkDeviceSettings");
  (FARPROC&)Actual_CSharp_delete_AkDurationCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkDurationCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkDynamicSequenceItemCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkDynamicSequenceItemCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkEmitterSettings = GetProcAddress(hDll, "CSharp_delete_AkEmitterSettings");
  (FARPROC&)Actual_CSharp_delete_AkEventCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkEventCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkExternalSourceInfo = GetProcAddress(hDll, "CSharp_delete_AkExternalSourceInfo");
  (FARPROC&)Actual_CSharp_delete_AkImageSourceParams = GetProcAddress(hDll, "CSharp_delete_AkImageSourceParams");
  (FARPROC&)Actual_CSharp_delete_AkImageSourceSettings = GetProcAddress(hDll, "CSharp_delete_AkImageSourceSettings");
  (FARPROC&)Actual_CSharp_delete_AkInitSettings = GetProcAddress(hDll, "CSharp_delete_AkInitSettings");
  (FARPROC&)Actual_CSharp_delete_AkIterator = GetProcAddress(hDll, "CSharp_delete_AkIterator");
  (FARPROC&)Actual_CSharp_delete_AkMarkerCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkMarkerCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkMemSettings = GetProcAddress(hDll, "CSharp_delete_AkMemSettings");
  (FARPROC&)Actual_CSharp_delete_AkMIDIEvent = GetProcAddress(hDll, "CSharp_delete_AkMIDIEvent");
  (FARPROC&)Actual_CSharp_delete_AkMIDIEvent_tCc = GetProcAddress(hDll, "CSharp_delete_AkMIDIEvent_tCc");
  (FARPROC&)Actual_CSharp_delete_AkMIDIEvent_tChanAftertouch = GetProcAddress(hDll, "CSharp_delete_AkMIDIEvent_tChanAftertouch");
  (FARPROC&)Actual_CSharp_delete_AkMIDIEvent_tGen = GetProcAddress(hDll, "CSharp_delete_AkMIDIEvent_tGen");
  (FARPROC&)Actual_CSharp_delete_AkMIDIEvent_tNoteAftertouch = GetProcAddress(hDll, "CSharp_delete_AkMIDIEvent_tNoteAftertouch");
  (FARPROC&)Actual_CSharp_delete_AkMIDIEvent_tNoteOnOff = GetProcAddress(hDll, "CSharp_delete_AkMIDIEvent_tNoteOnOff");
  (FARPROC&)Actual_CSharp_delete_AkMIDIEvent_tPitchBend = GetProcAddress(hDll, "CSharp_delete_AkMIDIEvent_tPitchBend");
  (FARPROC&)Actual_CSharp_delete_AkMIDIEvent_tProgramChange = GetProcAddress(hDll, "CSharp_delete_AkMIDIEvent_tProgramChange");
  (FARPROC&)Actual_CSharp_delete_AkMIDIEventCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkMIDIEventCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkMIDIPost = GetProcAddress(hDll, "CSharp_delete_AkMIDIPost");
  (FARPROC&)Actual_CSharp_delete_AkMonitoringCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkMonitoringCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkMusicPlaylistCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkMusicPlaylistCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkMusicSettings = GetProcAddress(hDll, "CSharp_delete_AkMusicSettings");
  (FARPROC&)Actual_CSharp_delete_AkMusicSyncCallbackInfo = GetProcAddress(hDll, "CSharp_delete_AkMusicSyncCallbackInfo");
  (FARPROC&)Actual_CSharp_delete_AkObjectInfo = GetProcAddress(hDll, "CSharp_delete_AkObjectInfo");
  (FARPROC&)Actual_CSharp_delete_AkObstructionOcclusionValues = GetProcAddress(hDll, "CSharp_delete_AkObstructionOcclusionValues");
  (FARPROC&)Actual_CSharp_delete_AkOutputSettings = GetProcAddress(hDll, "CSharp_delete_AkOutputSettings");
  (FARPROC&)Actual_CSharp_delete_AkPlatformInitSettings = GetProcAddress(hDll, "CSharp_delete_AkPlatformInitSettings");
  (FARPROC&)Actual_CSharp_delete_AkPlaylist = GetProcAddress(hDll, "CSharp_delete_AkPlaylist");
  (FARPROC&)Actual_CSharp_delete_AkPlaylistArray = GetProcAddress(hDll, "CSharp_delete_AkPlaylistArray");
  (FARPROC&)Actual_CSharp_delete_AkPlaylistItem = GetProcAddress(hDll, "CSharp_delete_AkPlaylistItem");
  (FARPROC&)Actual_CSharp_delete_AkPositioningInfo = GetProcAddress(hDll, "CSharp_delete_AkPositioningInfo");
  (FARPROC&)Actual_CSharp_delete_AkPropagationPathInfo = GetProcAddress(hDll, "CSharp_delete_AkPropagationPathInfo");
  (FARPROC&)Actual_CSharp_delete_AkPropagationPathInfoProxy = GetProcAddress(hDll, "CSharp_delete_AkPropagationPathInfoProxy");
  (FARPROC&)Actual_CSharp_delete_AkRamp = GetProcAddress(hDll, "CSharp_delete_AkRamp");
  (FARPROC&)Actual_CSharp_delete_AkRoomParams = GetProcAddress(hDll, "CSharp_delete_AkRoomParams");
  (FARPROC&)Actual_CSharp_delete_AkSegmentInfo = GetProcAddress(hDll, "CSharp_delete_AkSegmentInfo");
  (FARPROC&)Actual_CSharp_delete_AkSerializedCallbackHeader = GetProcAddress(hDll, "CSharp_delete_AkSerializedCallbackHeader");
  (FARPROC&)Actual_CSharp_delete_AkSoundPathInfo = GetProcAddress(hDll, "CSharp_delete_AkSoundPathInfo");
  (FARPROC&)Actual_CSharp_delete_AkSoundPathInfoProxy = GetProcAddress(hDll, "CSharp_delete_AkSoundPathInfoProxy");
  (FARPROC&)Actual_CSharp_delete_AkSoundPropagationPathParams = GetProcAddress(hDll, "CSharp_delete_AkSoundPropagationPathParams");
  (FARPROC&)Actual_CSharp_delete_AkSourceSettings = GetProcAddress(hDll, "CSharp_delete_AkSourceSettings");
  (FARPROC&)Actual_CSharp_delete_AkSpatialAudioInitSettings = GetProcAddress(hDll, "CSharp_delete_AkSpatialAudioInitSettings");
  (FARPROC&)Actual_CSharp_delete_AkStreamMgrSettings = GetProcAddress(hDll, "CSharp_delete_AkStreamMgrSettings");
  (FARPROC&)Actual_CSharp_delete_AkThreadProperties = GetProcAddress(hDll, "CSharp_delete_AkThreadProperties");
  (FARPROC&)Actual_CSharp_delete_AkTransform = GetProcAddress(hDll, "CSharp_delete_AkTransform");
  (FARPROC&)Actual_CSharp_delete_AkTriangle = GetProcAddress(hDll, "CSharp_delete_AkTriangle");
  (FARPROC&)Actual_CSharp_delete_AkTriangleProxy = GetProcAddress(hDll, "CSharp_delete_AkTriangleProxy");
  (FARPROC&)Actual_CSharp_delete_AkVector = GetProcAddress(hDll, "CSharp_delete_AkVector");
  (FARPROC&)Actual_CSharp_DynamicSequenceBreak = GetProcAddress(hDll, "CSharp_DynamicSequenceBreak");
  (FARPROC&)Actual_CSharp_DynamicSequenceClose = GetProcAddress(hDll, "CSharp_DynamicSequenceClose");
  (FARPROC&)Actual_CSharp_DynamicSequenceGetPauseTimes = GetProcAddress(hDll, "CSharp_DynamicSequenceGetPauseTimes");
  (FARPROC&)Actual_CSharp_DynamicSequenceLockPlaylist = GetProcAddress(hDll, "CSharp_DynamicSequenceLockPlaylist");
  (FARPROC&)Actual_CSharp_DynamicSequenceOpen__SWIG_0 = GetProcAddress(hDll, "CSharp_DynamicSequenceOpen__SWIG_0");
  (FARPROC&)Actual_CSharp_DynamicSequenceOpen__SWIG_1 = GetProcAddress(hDll, "CSharp_DynamicSequenceOpen__SWIG_1");
  (FARPROC&)Actual_CSharp_DynamicSequenceOpen__SWIG_2 = GetProcAddress(hDll, "CSharp_DynamicSequenceOpen__SWIG_2");
  (FARPROC&)Actual_CSharp_DynamicSequenceOpen__SWIG_3 = GetProcAddress(hDll, "CSharp_DynamicSequenceOpen__SWIG_3");
  (FARPROC&)Actual_CSharp_DynamicSequencePause__SWIG_0 = GetProcAddress(hDll, "CSharp_DynamicSequencePause__SWIG_0");
  (FARPROC&)Actual_CSharp_DynamicSequencePause__SWIG_1 = GetProcAddress(hDll, "CSharp_DynamicSequencePause__SWIG_1");
  (FARPROC&)Actual_CSharp_DynamicSequencePause__SWIG_2 = GetProcAddress(hDll, "CSharp_DynamicSequencePause__SWIG_2");
  (FARPROC&)Actual_CSharp_DynamicSequencePlay__SWIG_0 = GetProcAddress(hDll, "CSharp_DynamicSequencePlay__SWIG_0");
  (FARPROC&)Actual_CSharp_DynamicSequencePlay__SWIG_1 = GetProcAddress(hDll, "CSharp_DynamicSequencePlay__SWIG_1");
  (FARPROC&)Actual_CSharp_DynamicSequencePlay__SWIG_2 = GetProcAddress(hDll, "CSharp_DynamicSequencePlay__SWIG_2");
  (FARPROC&)Actual_CSharp_DynamicSequenceResume__SWIG_0 = GetProcAddress(hDll, "CSharp_DynamicSequenceResume__SWIG_0");
  (FARPROC&)Actual_CSharp_DynamicSequenceResume__SWIG_1 = GetProcAddress(hDll, "CSharp_DynamicSequenceResume__SWIG_1");
  (FARPROC&)Actual_CSharp_DynamicSequenceResume__SWIG_2 = GetProcAddress(hDll, "CSharp_DynamicSequenceResume__SWIG_2");
  (FARPROC&)Actual_CSharp_DynamicSequenceStop__SWIG_0 = GetProcAddress(hDll, "CSharp_DynamicSequenceStop__SWIG_0");
  (FARPROC&)Actual_CSharp_DynamicSequenceStop__SWIG_1 = GetProcAddress(hDll, "CSharp_DynamicSequenceStop__SWIG_1");
  (FARPROC&)Actual_CSharp_DynamicSequenceStop__SWIG_2 = GetProcAddress(hDll, "CSharp_DynamicSequenceStop__SWIG_2");
  (FARPROC&)Actual_CSharp_DynamicSequenceUnlockPlaylist = GetProcAddress(hDll, "CSharp_DynamicSequenceUnlockPlaylist");
  (FARPROC&)Actual_CSharp_ExecuteActionOnEvent__SWIG_0 = GetProcAddress(hDll, "CSharp_ExecuteActionOnEvent__SWIG_0");
  (FARPROC&)Actual_CSharp_ExecuteActionOnEvent__SWIG_1 = GetProcAddress(hDll, "CSharp_ExecuteActionOnEvent__SWIG_1");
  (FARPROC&)Actual_CSharp_ExecuteActionOnEvent__SWIG_2 = GetProcAddress(hDll, "CSharp_ExecuteActionOnEvent__SWIG_2");
  (FARPROC&)Actual_CSharp_ExecuteActionOnEvent__SWIG_3 = GetProcAddress(hDll, "CSharp_ExecuteActionOnEvent__SWIG_3");
  (FARPROC&)Actual_CSharp_ExecuteActionOnEvent__SWIG_4 = GetProcAddress(hDll, "CSharp_ExecuteActionOnEvent__SWIG_4");
  (FARPROC&)Actual_CSharp_ExecuteActionOnEvent__SWIG_5 = GetProcAddress(hDll, "CSharp_ExecuteActionOnEvent__SWIG_5");
  (FARPROC&)Actual_CSharp_ExecuteActionOnEvent__SWIG_6 = GetProcAddress(hDll, "CSharp_ExecuteActionOnEvent__SWIG_6");
  (FARPROC&)Actual_CSharp_ExecuteActionOnEvent__SWIG_7 = GetProcAddress(hDll, "CSharp_ExecuteActionOnEvent__SWIG_7");
  (FARPROC&)Actual_CSharp_ExecuteActionOnEvent__SWIG_8 = GetProcAddress(hDll, "CSharp_ExecuteActionOnEvent__SWIG_8");
  (FARPROC&)Actual_CSharp_ExecuteActionOnEvent__SWIG_9 = GetProcAddress(hDll, "CSharp_ExecuteActionOnEvent__SWIG_9");
  (FARPROC&)Actual_CSharp_g_SpatialAudioPoolId_get = GetProcAddress(hDll, "CSharp_g_SpatialAudioPoolId_get");
  (FARPROC&)Actual_CSharp_g_SpatialAudioPoolId_set = GetProcAddress(hDll, "CSharp_g_SpatialAudioPoolId_set");
  (FARPROC&)Actual_CSharp_GetAudioSettings = GetProcAddress(hDll, "CSharp_GetAudioSettings");
  (FARPROC&)Actual_CSharp_GetBackgroundMusicMute = GetProcAddress(hDll, "CSharp_GetBackgroundMusicMute");
  (FARPROC&)Actual_CSharp_GetBufferStatusForPinnedEvent__SWIG_0 = GetProcAddress(hDll, "CSharp_GetBufferStatusForPinnedEvent__SWIG_0");
  (FARPROC&)Actual_CSharp_GetBufferStatusForPinnedEvent__SWIG_1 = GetProcAddress(hDll, "CSharp_GetBufferStatusForPinnedEvent__SWIG_1");
  (FARPROC&)Actual_CSharp_GetBufferTick = GetProcAddress(hDll, "CSharp_GetBufferTick");
  (FARPROC&)Actual_CSharp_GetCurrentLanguage = GetProcAddress(hDll, "CSharp_GetCurrentLanguage");
  (FARPROC&)Actual_CSharp_GetCustomPropertyValue__SWIG_0 = GetProcAddress(hDll, "CSharp_GetCustomPropertyValue__SWIG_0");
  (FARPROC&)Actual_CSharp_GetCustomPropertyValue__SWIG_1 = GetProcAddress(hDll, "CSharp_GetCustomPropertyValue__SWIG_1");
  (FARPROC&)Actual_CSharp_GetDefaultDeviceSettings = GetProcAddress(hDll, "CSharp_GetDefaultDeviceSettings");
  (FARPROC&)Actual_CSharp_GetDefaultInitSettings = GetProcAddress(hDll, "CSharp_GetDefaultInitSettings");
  (FARPROC&)Actual_CSharp_GetDefaultMusicSettings = GetProcAddress(hDll, "CSharp_GetDefaultMusicSettings");
  (FARPROC&)Actual_CSharp_GetDefaultPlatformInitSettings = GetProcAddress(hDll, "CSharp_GetDefaultPlatformInitSettings");
  (FARPROC&)Actual_CSharp_GetDefaultStreamSettings = GetProcAddress(hDll, "CSharp_GetDefaultStreamSettings");
  (FARPROC&)Actual_CSharp_GetDeviceIDFromName = GetProcAddress(hDll, "CSharp_GetDeviceIDFromName");
  (FARPROC&)Actual_CSharp_GetDialogueEventCustomPropertyValue__SWIG_0 = GetProcAddress(hDll, "CSharp_GetDialogueEventCustomPropertyValue__SWIG_0");
  (FARPROC&)Actual_CSharp_GetDialogueEventCustomPropertyValue__SWIG_1 = GetProcAddress(hDll, "CSharp_GetDialogueEventCustomPropertyValue__SWIG_1");
  (FARPROC&)Actual_CSharp_GetEventIDFromPlayingID = GetProcAddress(hDll, "CSharp_GetEventIDFromPlayingID");
  (FARPROC&)Actual_CSharp_GetGameObjectAuxSendValues = GetProcAddress(hDll, "CSharp_GetGameObjectAuxSendValues");
  (FARPROC&)Actual_CSharp_GetGameObjectDryLevelValue = GetProcAddress(hDll, "CSharp_GetGameObjectDryLevelValue");
  (FARPROC&)Actual_CSharp_GetGameObjectFromPlayingID = GetProcAddress(hDll, "CSharp_GetGameObjectFromPlayingID");
  (FARPROC&)Actual_CSharp_GetIDFromString__SWIG_0 = GetProcAddress(hDll, "CSharp_GetIDFromString__SWIG_0");
  (FARPROC&)Actual_CSharp_GetIsGameObjectActive = GetProcAddress(hDll, "CSharp_GetIsGameObjectActive");
  (FARPROC&)Actual_CSharp_GetListenerPosition = GetProcAddress(hDll, "CSharp_GetListenerPosition");
  (FARPROC&)Actual_CSharp_GetMajorMinorVersion = GetProcAddress(hDll, "CSharp_GetMajorMinorVersion");
  (FARPROC&)Actual_CSharp_GetMaxRadius = GetProcAddress(hDll, "CSharp_GetMaxRadius");
  (FARPROC&)Actual_CSharp_GetNumNonZeroBits = GetProcAddress(hDll, "CSharp_GetNumNonZeroBits");
  (FARPROC&)Actual_CSharp_GetObjectObstructionAndOcclusion = GetProcAddress(hDll, "CSharp_GetObjectObstructionAndOcclusion");
  (FARPROC&)Actual_CSharp_GetOutputID__SWIG_0 = GetProcAddress(hDll, "CSharp_GetOutputID__SWIG_0");
  (FARPROC&)Actual_CSharp_GetOutputID__SWIG_1 = GetProcAddress(hDll, "CSharp_GetOutputID__SWIG_1");
  (FARPROC&)Actual_CSharp_GetPanningRule__SWIG_0 = GetProcAddress(hDll, "CSharp_GetPanningRule__SWIG_0");
  (FARPROC&)Actual_CSharp_GetPanningRule__SWIG_1 = GetProcAddress(hDll, "CSharp_GetPanningRule__SWIG_1");
  (FARPROC&)Actual_CSharp_GetPlayingIDsFromGameObject = GetProcAddress(hDll, "CSharp_GetPlayingIDsFromGameObject");
  (FARPROC&)Actual_CSharp_GetPlayingSegmentInfo__SWIG_0 = GetProcAddress(hDll, "CSharp_GetPlayingSegmentInfo__SWIG_0");
  (FARPROC&)Actual_CSharp_GetPlayingSegmentInfo__SWIG_1 = GetProcAddress(hDll, "CSharp_GetPlayingSegmentInfo__SWIG_1");
  (FARPROC&)Actual_CSharp_GetPoolID = GetProcAddress(hDll, "CSharp_GetPoolID");
  (FARPROC&)Actual_CSharp_GetPosition = GetProcAddress(hDll, "CSharp_GetPosition");
  (FARPROC&)Actual_CSharp_GetPositioningInfo = GetProcAddress(hDll, "CSharp_GetPositioningInfo");
  (FARPROC&)Actual_CSharp_GetRTPCValue__SWIG_0 = GetProcAddress(hDll, "CSharp_GetRTPCValue__SWIG_0");
  (FARPROC&)Actual_CSharp_GetRTPCValue__SWIG_1 = GetProcAddress(hDll, "CSharp_GetRTPCValue__SWIG_1");
  (FARPROC&)Actual_CSharp_GetSourceMultiplePlayPositions = GetProcAddress(hDll, "CSharp_GetSourceMultiplePlayPositions");
  (FARPROC&)Actual_CSharp_GetSourcePlayPosition__SWIG_0 = GetProcAddress(hDll, "CSharp_GetSourcePlayPosition__SWIG_0");
  (FARPROC&)Actual_CSharp_GetSourcePlayPosition__SWIG_1 = GetProcAddress(hDll, "CSharp_GetSourcePlayPosition__SWIG_1");
  (FARPROC&)Actual_CSharp_GetSourceStreamBuffering = GetProcAddress(hDll, "CSharp_GetSourceStreamBuffering");
  (FARPROC&)Actual_CSharp_GetSpeakerAngles__SWIG_0 = GetProcAddress(hDll, "CSharp_GetSpeakerAngles__SWIG_0");
  (FARPROC&)Actual_CSharp_GetSpeakerAngles__SWIG_1 = GetProcAddress(hDll, "CSharp_GetSpeakerAngles__SWIG_1");
  (FARPROC&)Actual_CSharp_GetSpeakerConfiguration__SWIG_0 = GetProcAddress(hDll, "CSharp_GetSpeakerConfiguration__SWIG_0");
  (FARPROC&)Actual_CSharp_GetSpeakerConfiguration__SWIG_1 = GetProcAddress(hDll, "CSharp_GetSpeakerConfiguration__SWIG_1");
  (FARPROC&)Actual_CSharp_GetState__SWIG_0 = GetProcAddress(hDll, "CSharp_GetState__SWIG_0");
  (FARPROC&)Actual_CSharp_GetState__SWIG_1 = GetProcAddress(hDll, "CSharp_GetState__SWIG_1");
  (FARPROC&)Actual_CSharp_GetSubminorBuildVersion = GetProcAddress(hDll, "CSharp_GetSubminorBuildVersion");
  (FARPROC&)Actual_CSharp_GetSwitch__SWIG_0 = GetProcAddress(hDll, "CSharp_GetSwitch__SWIG_0");
  (FARPROC&)Actual_CSharp_GetSwitch__SWIG_1 = GetProcAddress(hDll, "CSharp_GetSwitch__SWIG_1");
  (FARPROC&)Actual_CSharp_GetTimeStamp = GetProcAddress(hDll, "CSharp_GetTimeStamp");
  (FARPROC&)Actual_CSharp_GetWindowsDeviceName = GetProcAddress(hDll, "CSharp_GetWindowsDeviceName");
  (FARPROC&)Actual_CSharp_HasHeightChannels = GetProcAddress(hDll, "CSharp_HasHeightChannels");
  (FARPROC&)Actual_CSharp_HasSideAndRearChannels = GetProcAddress(hDll, "CSharp_HasSideAndRearChannels");
  (FARPROC&)Actual_CSharp_HasStrictlyOnePairOfSurroundChannels = GetProcAddress(hDll, "CSharp_HasStrictlyOnePairOfSurroundChannels");
  (FARPROC&)Actual_CSharp_HasSurroundChannels = GetProcAddress(hDll, "CSharp_HasSurroundChannels");
  (FARPROC&)Actual_CSharp_Init = GetProcAddress(hDll, "CSharp_Init");
  (FARPROC&)Actual_CSharp_IsInitialized = GetProcAddress(hDll, "CSharp_IsInitialized");
  (FARPROC&)Actual_CSharp_kDefaultMaxPathLength_get = GetProcAddress(hDll, "CSharp_kDefaultMaxPathLength_get");
  (FARPROC&)Actual_CSharp_LoadAndDecodeBank = GetProcAddress(hDll, "CSharp_LoadAndDecodeBank");
  (FARPROC&)Actual_CSharp_LoadAndDecodeBankFromMemory = GetProcAddress(hDll, "CSharp_LoadAndDecodeBankFromMemory");
  (FARPROC&)Actual_CSharp_LoadBank__SWIG_0 = GetProcAddress(hDll, "CSharp_LoadBank__SWIG_0");
  (FARPROC&)Actual_CSharp_LoadBank__SWIG_1 = GetProcAddress(hDll, "CSharp_LoadBank__SWIG_1");
  (FARPROC&)Actual_CSharp_LoadBank__SWIG_2 = GetProcAddress(hDll, "CSharp_LoadBank__SWIG_2");
  (FARPROC&)Actual_CSharp_LoadBank__SWIG_3 = GetProcAddress(hDll, "CSharp_LoadBank__SWIG_3");
  (FARPROC&)Actual_CSharp_LoadBank__SWIG_4 = GetProcAddress(hDll, "CSharp_LoadBank__SWIG_4");
  (FARPROC&)Actual_CSharp_LoadBank__SWIG_5 = GetProcAddress(hDll, "CSharp_LoadBank__SWIG_5");
  (FARPROC&)Actual_CSharp_LoadBank__SWIG_6 = GetProcAddress(hDll, "CSharp_LoadBank__SWIG_6");
  (FARPROC&)Actual_CSharp_LoadBank__SWIG_7 = GetProcAddress(hDll, "CSharp_LoadBank__SWIG_7");
  (FARPROC&)Actual_CSharp_LoadFilePackage = GetProcAddress(hDll, "CSharp_LoadFilePackage");
  (FARPROC&)Actual_CSharp_MuteBackgroundMusic = GetProcAddress(hDll, "CSharp_MuteBackgroundMusic");
  (FARPROC&)Actual_CSharp_new__ArrayPoolDefault = GetProcAddress(hDll, "CSharp_new__ArrayPoolDefault");
  (FARPROC&)Actual_CSharp_new__ArrayPoolLEngineDefault = GetProcAddress(hDll, "CSharp_new__ArrayPoolLEngineDefault");
  (FARPROC&)Actual_CSharp_new__ArrayPoolSpatialAudio = GetProcAddress(hDll, "CSharp_new__ArrayPoolSpatialAudio");
  (FARPROC&)Actual_CSharp_new_AkAudioFormat = GetProcAddress(hDll, "CSharp_new_AkAudioFormat");
  (FARPROC&)Actual_CSharp_new_AkAudioInterruptionCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkAudioInterruptionCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkAudioSettings = GetProcAddress(hDll, "CSharp_new_AkAudioSettings");
  (FARPROC&)Actual_CSharp_new_AkAudioSourceChangeCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkAudioSourceChangeCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkBankCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkBankCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkCallbackSerializer = GetProcAddress(hDll, "CSharp_new_AkCallbackSerializer");
  (FARPROC&)Actual_CSharp_new_AkChannelConfig__SWIG_0 = GetProcAddress(hDll, "CSharp_new_AkChannelConfig__SWIG_0");
  (FARPROC&)Actual_CSharp_new_AkChannelConfig__SWIG_1 = GetProcAddress(hDll, "CSharp_new_AkChannelConfig__SWIG_1");
  (FARPROC&)Actual_CSharp_new_AkChannelEmitter = GetProcAddress(hDll, "CSharp_new_AkChannelEmitter");
  (FARPROC&)Actual_CSharp_new_AkDeviceSettings = GetProcAddress(hDll, "CSharp_new_AkDeviceSettings");
  (FARPROC&)Actual_CSharp_new_AkDurationCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkDurationCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkDynamicSequenceItemCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkDynamicSequenceItemCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkEmitterSettings = GetProcAddress(hDll, "CSharp_new_AkEmitterSettings");
  (FARPROC&)Actual_CSharp_new_AkEventCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkEventCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkExternalSourceInfo__SWIG_0 = GetProcAddress(hDll, "CSharp_new_AkExternalSourceInfo__SWIG_0");
  (FARPROC&)Actual_CSharp_new_AkExternalSourceInfo__SWIG_1 = GetProcAddress(hDll, "CSharp_new_AkExternalSourceInfo__SWIG_1");
  (FARPROC&)Actual_CSharp_new_AkExternalSourceInfo__SWIG_2 = GetProcAddress(hDll, "CSharp_new_AkExternalSourceInfo__SWIG_2");
  (FARPROC&)Actual_CSharp_new_AkExternalSourceInfo__SWIG_3 = GetProcAddress(hDll, "CSharp_new_AkExternalSourceInfo__SWIG_3");
  (FARPROC&)Actual_CSharp_new_AkImageSourceParams__SWIG_0 = GetProcAddress(hDll, "CSharp_new_AkImageSourceParams__SWIG_0");
  (FARPROC&)Actual_CSharp_new_AkImageSourceParams__SWIG_1 = GetProcAddress(hDll, "CSharp_new_AkImageSourceParams__SWIG_1");
  (FARPROC&)Actual_CSharp_new_AkImageSourceSettings__SWIG_0 = GetProcAddress(hDll, "CSharp_new_AkImageSourceSettings__SWIG_0");
  (FARPROC&)Actual_CSharp_new_AkImageSourceSettings__SWIG_1 = GetProcAddress(hDll, "CSharp_new_AkImageSourceSettings__SWIG_1");
  (FARPROC&)Actual_CSharp_new_AkInitSettings = GetProcAddress(hDll, "CSharp_new_AkInitSettings");
  (FARPROC&)Actual_CSharp_new_AkIterator = GetProcAddress(hDll, "CSharp_new_AkIterator");
  (FARPROC&)Actual_CSharp_new_AkMarkerCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkMarkerCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkMemSettings = GetProcAddress(hDll, "CSharp_new_AkMemSettings");
  (FARPROC&)Actual_CSharp_new_AkMIDIEvent = GetProcAddress(hDll, "CSharp_new_AkMIDIEvent");
  (FARPROC&)Actual_CSharp_new_AkMIDIEvent_tCc = GetProcAddress(hDll, "CSharp_new_AkMIDIEvent_tCc");
  (FARPROC&)Actual_CSharp_new_AkMIDIEvent_tChanAftertouch = GetProcAddress(hDll, "CSharp_new_AkMIDIEvent_tChanAftertouch");
  (FARPROC&)Actual_CSharp_new_AkMIDIEvent_tGen = GetProcAddress(hDll, "CSharp_new_AkMIDIEvent_tGen");
  (FARPROC&)Actual_CSharp_new_AkMIDIEvent_tNoteAftertouch = GetProcAddress(hDll, "CSharp_new_AkMIDIEvent_tNoteAftertouch");
  (FARPROC&)Actual_CSharp_new_AkMIDIEvent_tNoteOnOff = GetProcAddress(hDll, "CSharp_new_AkMIDIEvent_tNoteOnOff");
  (FARPROC&)Actual_CSharp_new_AkMIDIEvent_tPitchBend = GetProcAddress(hDll, "CSharp_new_AkMIDIEvent_tPitchBend");
  (FARPROC&)Actual_CSharp_new_AkMIDIEvent_tProgramChange = GetProcAddress(hDll, "CSharp_new_AkMIDIEvent_tProgramChange");
  (FARPROC&)Actual_CSharp_new_AkMIDIEventCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkMIDIEventCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkMIDIPost = GetProcAddress(hDll, "CSharp_new_AkMIDIPost");
  (FARPROC&)Actual_CSharp_new_AkMonitoringCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkMonitoringCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkMusicPlaylistCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkMusicPlaylistCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkMusicSettings = GetProcAddress(hDll, "CSharp_new_AkMusicSettings");
  (FARPROC&)Actual_CSharp_new_AkMusicSyncCallbackInfo = GetProcAddress(hDll, "CSharp_new_AkMusicSyncCallbackInfo");
  (FARPROC&)Actual_CSharp_new_AkObjectInfo = GetProcAddress(hDll, "CSharp_new_AkObjectInfo");
  (FARPROC&)Actual_CSharp_new_AkObstructionOcclusionValues = GetProcAddress(hDll, "CSharp_new_AkObstructionOcclusionValues");
  (FARPROC&)Actual_CSharp_new_AkOutputSettings__SWIG_0 = GetProcAddress(hDll, "CSharp_new_AkOutputSettings__SWIG_0");
  (FARPROC&)Actual_CSharp_new_AkOutputSettings__SWIG_1 = GetProcAddress(hDll, "CSharp_new_AkOutputSettings__SWIG_1");
  (FARPROC&)Actual_CSharp_new_AkOutputSettings__SWIG_2 = GetProcAddress(hDll, "CSharp_new_AkOutputSettings__SWIG_2");
  (FARPROC&)Actual_CSharp_new_AkOutputSettings__SWIG_3 = GetProcAddress(hDll, "CSharp_new_AkOutputSettings__SWIG_3");
  (FARPROC&)Actual_CSharp_new_AkOutputSettings__SWIG_4 = GetProcAddress(hDll, "CSharp_new_AkOutputSettings__SWIG_4");
  (FARPROC&)Actual_CSharp_new_AkPlatformInitSettings = GetProcAddress(hDll, "CSharp_new_AkPlatformInitSettings");
  (FARPROC&)Actual_CSharp_new_AkPlaylist = GetProcAddress(hDll, "CSharp_new_AkPlaylist");
  (FARPROC&)Actual_CSharp_new_AkPlaylistArray = GetProcAddress(hDll, "CSharp_new_AkPlaylistArray");
  (FARPROC&)Actual_CSharp_new_AkPlaylistItem__SWIG_0 = GetProcAddress(hDll, "CSharp_new_AkPlaylistItem__SWIG_0");
  (FARPROC&)Actual_CSharp_new_AkPlaylistItem__SWIG_1 = GetProcAddress(hDll, "CSharp_new_AkPlaylistItem__SWIG_1");
  (FARPROC&)Actual_CSharp_new_AkPositioningInfo = GetProcAddress(hDll, "CSharp_new_AkPositioningInfo");
  (FARPROC&)Actual_CSharp_new_AkPropagationPathInfo = GetProcAddress(hDll, "CSharp_new_AkPropagationPathInfo");
  (FARPROC&)Actual_CSharp_new_AkPropagationPathInfoProxy = GetProcAddress(hDll, "CSharp_new_AkPropagationPathInfoProxy");
  (FARPROC&)Actual_CSharp_new_AkRamp__SWIG_0 = GetProcAddress(hDll, "CSharp_new_AkRamp__SWIG_0");
  (FARPROC&)Actual_CSharp_new_AkRamp__SWIG_1 = GetProcAddress(hDll, "CSharp_new_AkRamp__SWIG_1");
  (FARPROC&)Actual_CSharp_new_AkRoomParams = GetProcAddress(hDll, "CSharp_new_AkRoomParams");
  (FARPROC&)Actual_CSharp_new_AkSegmentInfo = GetProcAddress(hDll, "CSharp_new_AkSegmentInfo");
  (FARPROC&)Actual_CSharp_new_AkSerializedCallbackHeader = GetProcAddress(hDll, "CSharp_new_AkSerializedCallbackHeader");
  (FARPROC&)Actual_CSharp_new_AkSoundPathInfo = GetProcAddress(hDll, "CSharp_new_AkSoundPathInfo");
  (FARPROC&)Actual_CSharp_new_AkSoundPathInfoProxy = GetProcAddress(hDll, "CSharp_new_AkSoundPathInfoProxy");
  (FARPROC&)Actual_CSharp_new_AkSoundPropagationPathParams = GetProcAddress(hDll, "CSharp_new_AkSoundPropagationPathParams");
  (FARPROC&)Actual_CSharp_new_AkSourceSettings = GetProcAddress(hDll, "CSharp_new_AkSourceSettings");
  (FARPROC&)Actual_CSharp_new_AkSpatialAudioInitSettings = GetProcAddress(hDll, "CSharp_new_AkSpatialAudioInitSettings");
  (FARPROC&)Actual_CSharp_new_AkStreamMgrSettings = GetProcAddress(hDll, "CSharp_new_AkStreamMgrSettings");
  (FARPROC&)Actual_CSharp_new_AkThreadProperties = GetProcAddress(hDll, "CSharp_new_AkThreadProperties");
  (FARPROC&)Actual_CSharp_new_AkTransform = GetProcAddress(hDll, "CSharp_new_AkTransform");
  (FARPROC&)Actual_CSharp_new_AkTriangle = GetProcAddress(hDll, "CSharp_new_AkTriangle");
  (FARPROC&)Actual_CSharp_new_AkTriangleProxy = GetProcAddress(hDll, "CSharp_new_AkTriangleProxy");
  (FARPROC&)Actual_CSharp_new_AkVector = GetProcAddress(hDll, "CSharp_new_AkVector");
  (FARPROC&)Actual_CSharp_PinEventInStreamCache__SWIG_0 = GetProcAddress(hDll, "CSharp_PinEventInStreamCache__SWIG_0");
  (FARPROC&)Actual_CSharp_PinEventInStreamCache__SWIG_1 = GetProcAddress(hDll, "CSharp_PinEventInStreamCache__SWIG_1");
  (FARPROC&)Actual_CSharp_PostCode__SWIG_0 = GetProcAddress(hDll, "CSharp_PostCode__SWIG_0");
  (FARPROC&)Actual_CSharp_PostCode__SWIG_1 = GetProcAddress(hDll, "CSharp_PostCode__SWIG_1");
  (FARPROC&)Actual_CSharp_PostCode__SWIG_2 = GetProcAddress(hDll, "CSharp_PostCode__SWIG_2");
  (FARPROC&)Actual_CSharp_PostCode__SWIG_3 = GetProcAddress(hDll, "CSharp_PostCode__SWIG_3");
  (FARPROC&)Actual_CSharp_PostCode__SWIG_4 = GetProcAddress(hDll, "CSharp_PostCode__SWIG_4");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_0 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_0");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_1 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_1");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_10 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_10");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_11 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_11");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_2 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_2");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_3 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_3");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_4 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_4");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_5 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_5");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_6 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_6");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_7 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_7");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_8 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_8");
  (FARPROC&)Actual_CSharp_PostEvent__SWIG_9 = GetProcAddress(hDll, "CSharp_PostEvent__SWIG_9");
  (FARPROC&)Actual_CSharp_PostMIDIOnEvent = GetProcAddress(hDll, "CSharp_PostMIDIOnEvent");
  (FARPROC&)Actual_CSharp_PostString__SWIG_0 = GetProcAddress(hDll, "CSharp_PostString__SWIG_0");
  (FARPROC&)Actual_CSharp_PostString__SWIG_1 = GetProcAddress(hDll, "CSharp_PostString__SWIG_1");
  (FARPROC&)Actual_CSharp_PostString__SWIG_2 = GetProcAddress(hDll, "CSharp_PostString__SWIG_2");
  (FARPROC&)Actual_CSharp_PostString__SWIG_3 = GetProcAddress(hDll, "CSharp_PostString__SWIG_3");
  (FARPROC&)Actual_CSharp_PostString__SWIG_4 = GetProcAddress(hDll, "CSharp_PostString__SWIG_4");
  (FARPROC&)Actual_CSharp_PostTrigger__SWIG_0 = GetProcAddress(hDll, "CSharp_PostTrigger__SWIG_0");
  (FARPROC&)Actual_CSharp_PostTrigger__SWIG_1 = GetProcAddress(hDll, "CSharp_PostTrigger__SWIG_1");
  (FARPROC&)Actual_CSharp_PrepareBank__SWIG_0 = GetProcAddress(hDll, "CSharp_PrepareBank__SWIG_0");
  (FARPROC&)Actual_CSharp_PrepareBank__SWIG_1 = GetProcAddress(hDll, "CSharp_PrepareBank__SWIG_1");
  (FARPROC&)Actual_CSharp_PrepareBank__SWIG_10 = GetProcAddress(hDll, "CSharp_PrepareBank__SWIG_10");
  (FARPROC&)Actual_CSharp_PrepareBank__SWIG_11 = GetProcAddress(hDll, "CSharp_PrepareBank__SWIG_11");
  (FARPROC&)Actual_CSharp_PrepareBank__SWIG_4 = GetProcAddress(hDll, "CSharp_PrepareBank__SWIG_4");
  (FARPROC&)Actual_CSharp_PrepareBank__SWIG_5 = GetProcAddress(hDll, "CSharp_PrepareBank__SWIG_5");
  (FARPROC&)Actual_CSharp_PrepareBank__SWIG_6 = GetProcAddress(hDll, "CSharp_PrepareBank__SWIG_6");
  (FARPROC&)Actual_CSharp_PrepareBank__SWIG_7 = GetProcAddress(hDll, "CSharp_PrepareBank__SWIG_7");
  (FARPROC&)Actual_CSharp_PrepareEvent__SWIG_0 = GetProcAddress(hDll, "CSharp_PrepareEvent__SWIG_0");
  (FARPROC&)Actual_CSharp_PrepareEvent__SWIG_1 = GetProcAddress(hDll, "CSharp_PrepareEvent__SWIG_1");
  (FARPROC&)Actual_CSharp_PrepareEvent__SWIG_2 = GetProcAddress(hDll, "CSharp_PrepareEvent__SWIG_2");
  (FARPROC&)Actual_CSharp_PrepareEvent__SWIG_3 = GetProcAddress(hDll, "CSharp_PrepareEvent__SWIG_3");
  (FARPROC&)Actual_CSharp_PrepareGameSyncs__SWIG_0 = GetProcAddress(hDll, "CSharp_PrepareGameSyncs__SWIG_0");
  (FARPROC&)Actual_CSharp_PrepareGameSyncs__SWIG_1 = GetProcAddress(hDll, "CSharp_PrepareGameSyncs__SWIG_1");
  (FARPROC&)Actual_CSharp_PrepareGameSyncs__SWIG_2 = GetProcAddress(hDll, "CSharp_PrepareGameSyncs__SWIG_2");
  (FARPROC&)Actual_CSharp_PrepareGameSyncs__SWIG_3 = GetProcAddress(hDll, "CSharp_PrepareGameSyncs__SWIG_3");
  (FARPROC&)Actual_CSharp_QueryAudioObjectIDs__SWIG_0 = GetProcAddress(hDll, "CSharp_QueryAudioObjectIDs__SWIG_0");
  (FARPROC&)Actual_CSharp_QueryAudioObjectIDs__SWIG_1 = GetProcAddress(hDll, "CSharp_QueryAudioObjectIDs__SWIG_1");
  (FARPROC&)Actual_CSharp_QueryIndirectPaths = GetProcAddress(hDll, "CSharp_QueryIndirectPaths");
  (FARPROC&)Actual_CSharp_QuerySoundPropagationPaths = GetProcAddress(hDll, "CSharp_QuerySoundPropagationPaths");
  (FARPROC&)Actual_CSharp_RegisterEmitter = GetProcAddress(hDll, "CSharp_RegisterEmitter");
  (FARPROC&)Actual_CSharp_RegisterGameObjInternal = GetProcAddress(hDll, "CSharp_RegisterGameObjInternal");
  (FARPROC&)Actual_CSharp_RegisterGameObjInternal_WithName = GetProcAddress(hDll, "CSharp_RegisterGameObjInternal_WithName");
  (FARPROC&)Actual_CSharp_RegisterPluginDLL = GetProcAddress(hDll, "CSharp_RegisterPluginDLL");
  (FARPROC&)Actual_CSharp_RegisterSpatialAudioListener = GetProcAddress(hDll, "CSharp_RegisterSpatialAudioListener");
  (FARPROC&)Actual_CSharp_RemoveDefaultListener = GetProcAddress(hDll, "CSharp_RemoveDefaultListener");
  (FARPROC&)Actual_CSharp_RemoveGeometry = GetProcAddress(hDll, "CSharp_RemoveGeometry");
  (FARPROC&)Actual_CSharp_RemoveImageSource__SWIG_0 = GetProcAddress(hDll, "CSharp_RemoveImageSource__SWIG_0");
  (FARPROC&)Actual_CSharp_RemoveImageSource__SWIG_1 = GetProcAddress(hDll, "CSharp_RemoveImageSource__SWIG_1");
  (FARPROC&)Actual_CSharp_RemoveListener = GetProcAddress(hDll, "CSharp_RemoveListener");
  (FARPROC&)Actual_CSharp_RemoveOutput = GetProcAddress(hDll, "CSharp_RemoveOutput");
  (FARPROC&)Actual_CSharp_RemovePortal = GetProcAddress(hDll, "CSharp_RemovePortal");
  (FARPROC&)Actual_CSharp_RemoveRoom = GetProcAddress(hDll, "CSharp_RemoveRoom");
  (FARPROC&)Actual_CSharp_RenderAudio__SWIG_0 = GetProcAddress(hDll, "CSharp_RenderAudio__SWIG_0");
  (FARPROC&)Actual_CSharp_RenderAudio__SWIG_1 = GetProcAddress(hDll, "CSharp_RenderAudio__SWIG_1");
  (FARPROC&)Actual_CSharp_ResetListenersToDefault = GetProcAddress(hDll, "CSharp_ResetListenersToDefault");
  (FARPROC&)Actual_CSharp_ResetRTPCValue__SWIG_0 = GetProcAddress(hDll, "CSharp_ResetRTPCValue__SWIG_0");
  (FARPROC&)Actual_CSharp_ResetRTPCValue__SWIG_1 = GetProcAddress(hDll, "CSharp_ResetRTPCValue__SWIG_1");
  (FARPROC&)Actual_CSharp_ResetRTPCValue__SWIG_2 = GetProcAddress(hDll, "CSharp_ResetRTPCValue__SWIG_2");
  (FARPROC&)Actual_CSharp_ResetRTPCValue__SWIG_3 = GetProcAddress(hDll, "CSharp_ResetRTPCValue__SWIG_3");
  (FARPROC&)Actual_CSharp_ResetRTPCValue__SWIG_4 = GetProcAddress(hDll, "CSharp_ResetRTPCValue__SWIG_4");
  (FARPROC&)Actual_CSharp_ResetRTPCValue__SWIG_5 = GetProcAddress(hDll, "CSharp_ResetRTPCValue__SWIG_5");
  (FARPROC&)Actual_CSharp_ResetRTPCValue__SWIG_6 = GetProcAddress(hDll, "CSharp_ResetRTPCValue__SWIG_6");
  (FARPROC&)Actual_CSharp_ResetRTPCValue__SWIG_7 = GetProcAddress(hDll, "CSharp_ResetRTPCValue__SWIG_7");
  (FARPROC&)Actual_CSharp_ResetRTPCValue__SWIG_8 = GetProcAddress(hDll, "CSharp_ResetRTPCValue__SWIG_8");
  (FARPROC&)Actual_CSharp_ResetRTPCValue__SWIG_9 = GetProcAddress(hDll, "CSharp_ResetRTPCValue__SWIG_9");
  (FARPROC&)Actual_CSharp_ResolveDialogueEvent__SWIG_0 = GetProcAddress(hDll, "CSharp_ResolveDialogueEvent__SWIG_0");
  (FARPROC&)Actual_CSharp_ResolveDialogueEvent__SWIG_1 = GetProcAddress(hDll, "CSharp_ResolveDialogueEvent__SWIG_1");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_0 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_0");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_1 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_1");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_10 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_10");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_11 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_11");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_12 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_12");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_13 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_13");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_14 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_14");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_2 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_2");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_3 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_3");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_4 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_4");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_5 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_5");
  (FARPROC&)Actual_CSharp_SeekOnEvent__SWIG_9 = GetProcAddress(hDll, "CSharp_SeekOnEvent__SWIG_9");
  (FARPROC&)Actual_CSharp_SendPluginCustomGameData = GetProcAddress(hDll, "CSharp_SendPluginCustomGameData");
  (FARPROC&)Actual_CSharp_SetActorMixerEffect = GetProcAddress(hDll, "CSharp_SetActorMixerEffect");
  (FARPROC&)Actual_CSharp_SetAudioInputCallbacks = GetProcAddress(hDll, "CSharp_SetAudioInputCallbacks");
  (FARPROC&)Actual_CSharp_SetBankLoadIOSettings = GetProcAddress(hDll, "CSharp_SetBankLoadIOSettings");
  (FARPROC&)Actual_CSharp_SetBasePath = GetProcAddress(hDll, "CSharp_SetBasePath");
  (FARPROC&)Actual_CSharp_SetBusConfig__SWIG_0 = GetProcAddress(hDll, "CSharp_SetBusConfig__SWIG_0");
  (FARPROC&)Actual_CSharp_SetBusConfig__SWIG_1 = GetProcAddress(hDll, "CSharp_SetBusConfig__SWIG_1");
  (FARPROC&)Actual_CSharp_SetBusDevice__SWIG_0 = GetProcAddress(hDll, "CSharp_SetBusDevice__SWIG_0");
  (FARPROC&)Actual_CSharp_SetBusDevice__SWIG_1 = GetProcAddress(hDll, "CSharp_SetBusDevice__SWIG_1");
  (FARPROC&)Actual_CSharp_SetBusEffect__SWIG_0 = GetProcAddress(hDll, "CSharp_SetBusEffect__SWIG_0");
  (FARPROC&)Actual_CSharp_SetBusEffect__SWIG_1 = GetProcAddress(hDll, "CSharp_SetBusEffect__SWIG_1");
  (FARPROC&)Actual_CSharp_SetCurrentLanguage = GetProcAddress(hDll, "CSharp_SetCurrentLanguage");
  (FARPROC&)Actual_CSharp_SetDecodedBankPath = GetProcAddress(hDll, "CSharp_SetDecodedBankPath");
  (FARPROC&)Actual_CSharp_SetDefaultListeners = GetProcAddress(hDll, "CSharp_SetDefaultListeners");
  (FARPROC&)Actual_CSharp_SetEmitterAuxSendValues = GetProcAddress(hDll, "CSharp_SetEmitterAuxSendValues");
  (FARPROC&)Actual_CSharp_SetEmitterObstruction = GetProcAddress(hDll, "CSharp_SetEmitterObstruction");
  (FARPROC&)Actual_CSharp_SetErrorLogger__SWIG_0 = GetProcAddress(hDll, "CSharp_SetErrorLogger__SWIG_0");
  (FARPROC&)Actual_CSharp_SetErrorLogger__SWIG_1 = GetProcAddress(hDll, "CSharp_SetErrorLogger__SWIG_1");
  (FARPROC&)Actual_CSharp_SetGameName = GetProcAddress(hDll, "CSharp_SetGameName");
  (FARPROC&)Actual_CSharp_SetGameObjectAuxSendValues = GetProcAddress(hDll, "CSharp_SetGameObjectAuxSendValues");
  (FARPROC&)Actual_CSharp_SetGameObjectInRoom = GetProcAddress(hDll, "CSharp_SetGameObjectInRoom");
  (FARPROC&)Actual_CSharp_SetGameObjectOutputBusVolume = GetProcAddress(hDll, "CSharp_SetGameObjectOutputBusVolume");
  (FARPROC&)Actual_CSharp_SetGeometry = GetProcAddress(hDll, "CSharp_SetGeometry");
  (FARPROC&)Actual_CSharp_SetImageSource__SWIG_0 = GetProcAddress(hDll, "CSharp_SetImageSource__SWIG_0");
  (FARPROC&)Actual_CSharp_SetImageSource__SWIG_1 = GetProcAddress(hDll, "CSharp_SetImageSource__SWIG_1");
  (FARPROC&)Actual_CSharp_SetListeners = GetProcAddress(hDll, "CSharp_SetListeners");
  (FARPROC&)Actual_CSharp_SetListenerSpatialization__SWIG_0 = GetProcAddress(hDll, "CSharp_SetListenerSpatialization__SWIG_0");
  (FARPROC&)Actual_CSharp_SetListenerSpatialization__SWIG_1 = GetProcAddress(hDll, "CSharp_SetListenerSpatialization__SWIG_1");
  (FARPROC&)Actual_CSharp_SetMaxNumVoicesLimit = GetProcAddress(hDll, "CSharp_SetMaxNumVoicesLimit");
  (FARPROC&)Actual_CSharp_SetMedia = GetProcAddress(hDll, "CSharp_SetMedia");
  (FARPROC&)Actual_CSharp_SetMixer__SWIG_0 = GetProcAddress(hDll, "CSharp_SetMixer__SWIG_0");
  (FARPROC&)Actual_CSharp_SetMixer__SWIG_1 = GetProcAddress(hDll, "CSharp_SetMixer__SWIG_1");
  (FARPROC&)Actual_CSharp_SetMultipleObstructionAndOcclusion = GetProcAddress(hDll, "CSharp_SetMultipleObstructionAndOcclusion");
  (FARPROC&)Actual_CSharp_SetMultiplePositions__SWIG_0 = GetProcAddress(hDll, "CSharp_SetMultiplePositions__SWIG_0");
  (FARPROC&)Actual_CSharp_SetMultiplePositions__SWIG_1 = GetProcAddress(hDll, "CSharp_SetMultiplePositions__SWIG_1");
  (FARPROC&)Actual_CSharp_SetMultiplePositions__SWIG_2 = GetProcAddress(hDll, "CSharp_SetMultiplePositions__SWIG_2");
  (FARPROC&)Actual_CSharp_SetMultiplePositions__SWIG_3 = GetProcAddress(hDll, "CSharp_SetMultiplePositions__SWIG_3");
  (FARPROC&)Actual_CSharp_SetObjectObstructionAndOcclusion = GetProcAddress(hDll, "CSharp_SetObjectObstructionAndOcclusion");
  (FARPROC&)Actual_CSharp_SetObjectPosition = GetProcAddress(hDll, "CSharp_SetObjectPosition");
  (FARPROC&)Actual_CSharp_SetOutputVolume = GetProcAddress(hDll, "CSharp_SetOutputVolume");
  (FARPROC&)Actual_CSharp_SetPanningRule__SWIG_0 = GetProcAddress(hDll, "CSharp_SetPanningRule__SWIG_0");
  (FARPROC&)Actual_CSharp_SetPanningRule__SWIG_1 = GetProcAddress(hDll, "CSharp_SetPanningRule__SWIG_1");
  (FARPROC&)Actual_CSharp_SetPortalObstruction = GetProcAddress(hDll, "CSharp_SetPortalObstruction");
  (FARPROC&)Actual_CSharp_SetRandomSeed = GetProcAddress(hDll, "CSharp_SetRandomSeed");
  (FARPROC&)Actual_CSharp_SetRoom = GetProcAddress(hDll, "CSharp_SetRoom");
  (FARPROC&)Actual_CSharp_SetRoomPortal = GetProcAddress(hDll, "CSharp_SetRoomPortal");
  (FARPROC&)Actual_CSharp_SetRTPCValue__SWIG_0 = GetProcAddress(hDll, "CSharp_SetRTPCValue__SWIG_0");
  (FARPROC&)Actual_CSharp_SetRTPCValue__SWIG_1 = GetProcAddress(hDll, "CSharp_SetRTPCValue__SWIG_1");
  (FARPROC&)Actual_CSharp_SetRTPCValue__SWIG_2 = GetProcAddress(hDll, "CSharp_SetRTPCValue__SWIG_2");
  (FARPROC&)Actual_CSharp_SetRTPCValue__SWIG_3 = GetProcAddress(hDll, "CSharp_SetRTPCValue__SWIG_3");
  (FARPROC&)Actual_CSharp_SetRTPCValue__SWIG_4 = GetProcAddress(hDll, "CSharp_SetRTPCValue__SWIG_4");
  (FARPROC&)Actual_CSharp_SetRTPCValue__SWIG_5 = GetProcAddress(hDll, "CSharp_SetRTPCValue__SWIG_5");
  (FARPROC&)Actual_CSharp_SetRTPCValue__SWIG_6 = GetProcAddress(hDll, "CSharp_SetRTPCValue__SWIG_6");
  (FARPROC&)Actual_CSharp_SetRTPCValue__SWIG_7 = GetProcAddress(hDll, "CSharp_SetRTPCValue__SWIG_7");
  (FARPROC&)Actual_CSharp_SetRTPCValue__SWIG_8 = GetProcAddress(hDll, "CSharp_SetRTPCValue__SWIG_8");
  (FARPROC&)Actual_CSharp_SetRTPCValue__SWIG_9 = GetProcAddress(hDll, "CSharp_SetRTPCValue__SWIG_9");
  (FARPROC&)Actual_CSharp_SetRTPCValueByPlayingID__SWIG_0 = GetProcAddress(hDll, "CSharp_SetRTPCValueByPlayingID__SWIG_0");
  (FARPROC&)Actual_CSharp_SetRTPCValueByPlayingID__SWIG_1 = GetProcAddress(hDll, "CSharp_SetRTPCValueByPlayingID__SWIG_1");
  (FARPROC&)Actual_CSharp_SetRTPCValueByPlayingID__SWIG_2 = GetProcAddress(hDll, "CSharp_SetRTPCValueByPlayingID__SWIG_2");
  (FARPROC&)Actual_CSharp_SetRTPCValueByPlayingID__SWIG_3 = GetProcAddress(hDll, "CSharp_SetRTPCValueByPlayingID__SWIG_3");
  (FARPROC&)Actual_CSharp_SetRTPCValueByPlayingID__SWIG_4 = GetProcAddress(hDll, "CSharp_SetRTPCValueByPlayingID__SWIG_4");
  (FARPROC&)Actual_CSharp_SetRTPCValueByPlayingID__SWIG_5 = GetProcAddress(hDll, "CSharp_SetRTPCValueByPlayingID__SWIG_5");
  (FARPROC&)Actual_CSharp_SetRTPCValueByPlayingID__SWIG_6 = GetProcAddress(hDll, "CSharp_SetRTPCValueByPlayingID__SWIG_6");
  (FARPROC&)Actual_CSharp_SetRTPCValueByPlayingID__SWIG_7 = GetProcAddress(hDll, "CSharp_SetRTPCValueByPlayingID__SWIG_7");
  (FARPROC&)Actual_CSharp_SetScalingFactor = GetProcAddress(hDll, "CSharp_SetScalingFactor");
  (FARPROC&)Actual_CSharp_SetSpeakerAngles__SWIG_0 = GetProcAddress(hDll, "CSharp_SetSpeakerAngles__SWIG_0");
  (FARPROC&)Actual_CSharp_SetSpeakerAngles__SWIG_1 = GetProcAddress(hDll, "CSharp_SetSpeakerAngles__SWIG_1");
  (FARPROC&)Actual_CSharp_SetState__SWIG_0 = GetProcAddress(hDll, "CSharp_SetState__SWIG_0");
  (FARPROC&)Actual_CSharp_SetState__SWIG_1 = GetProcAddress(hDll, "CSharp_SetState__SWIG_1");
  (FARPROC&)Actual_CSharp_SetSwitch__SWIG_0 = GetProcAddress(hDll, "CSharp_SetSwitch__SWIG_0");
  (FARPROC&)Actual_CSharp_SetSwitch__SWIG_1 = GetProcAddress(hDll, "CSharp_SetSwitch__SWIG_1");
  (FARPROC&)Actual_CSharp_SetVolumeThreshold = GetProcAddress(hDll, "CSharp_SetVolumeThreshold");
  (FARPROC&)Actual_CSharp_StartOutputCapture = GetProcAddress(hDll, "CSharp_StartOutputCapture");
  (FARPROC&)Actual_CSharp_StartProfilerCapture = GetProcAddress(hDll, "CSharp_StartProfilerCapture");
  (FARPROC&)Actual_CSharp_StdChannelIndexToDisplayIndex = GetProcAddress(hDll, "CSharp_StdChannelIndexToDisplayIndex");
  (FARPROC&)Actual_CSharp_StopAll__SWIG_0 = GetProcAddress(hDll, "CSharp_StopAll__SWIG_0");
  (FARPROC&)Actual_CSharp_StopAll__SWIG_1 = GetProcAddress(hDll, "CSharp_StopAll__SWIG_1");
  (FARPROC&)Actual_CSharp_StopMIDIOnEvent__SWIG_0 = GetProcAddress(hDll, "CSharp_StopMIDIOnEvent__SWIG_0");
  (FARPROC&)Actual_CSharp_StopMIDIOnEvent__SWIG_1 = GetProcAddress(hDll, "CSharp_StopMIDIOnEvent__SWIG_1");
  (FARPROC&)Actual_CSharp_StopMIDIOnEvent__SWIG_2 = GetProcAddress(hDll, "CSharp_StopMIDIOnEvent__SWIG_2");
  (FARPROC&)Actual_CSharp_StopOutputCapture = GetProcAddress(hDll, "CSharp_StopOutputCapture");
  (FARPROC&)Actual_CSharp_StopPlayingID__SWIG_0 = GetProcAddress(hDll, "CSharp_StopPlayingID__SWIG_0");
  (FARPROC&)Actual_CSharp_StopPlayingID__SWIG_1 = GetProcAddress(hDll, "CSharp_StopPlayingID__SWIG_1");
  (FARPROC&)Actual_CSharp_StopPlayingID__SWIG_2 = GetProcAddress(hDll, "CSharp_StopPlayingID__SWIG_2");
  (FARPROC&)Actual_CSharp_StopProfilerCapture = GetProcAddress(hDll, "CSharp_StopProfilerCapture");
  (FARPROC&)Actual_CSharp_Suspend__SWIG_0 = GetProcAddress(hDll, "CSharp_Suspend__SWIG_0");
  (FARPROC&)Actual_CSharp_Suspend__SWIG_1 = GetProcAddress(hDll, "CSharp_Suspend__SWIG_1");
  (FARPROC&)Actual_CSharp_Term = GetProcAddress(hDll, "CSharp_Term");
  (FARPROC&)Actual_CSharp_UnloadAllFilePackages = GetProcAddress(hDll, "CSharp_UnloadAllFilePackages");
  (FARPROC&)Actual_CSharp_UnloadBank__SWIG_0 = GetProcAddress(hDll, "CSharp_UnloadBank__SWIG_0");
  (FARPROC&)Actual_CSharp_UnloadBank__SWIG_1 = GetProcAddress(hDll, "CSharp_UnloadBank__SWIG_1");
  (FARPROC&)Actual_CSharp_UnloadBank__SWIG_4 = GetProcAddress(hDll, "CSharp_UnloadBank__SWIG_4");
  (FARPROC&)Actual_CSharp_UnloadBank__SWIG_5 = GetProcAddress(hDll, "CSharp_UnloadBank__SWIG_5");
  (FARPROC&)Actual_CSharp_UnloadBank__SWIG_6 = GetProcAddress(hDll, "CSharp_UnloadBank__SWIG_6");
  (FARPROC&)Actual_CSharp_UnloadBank__SWIG_8 = GetProcAddress(hDll, "CSharp_UnloadBank__SWIG_8");
  (FARPROC&)Actual_CSharp_UnloadFilePackage = GetProcAddress(hDll, "CSharp_UnloadFilePackage");
  (FARPROC&)Actual_CSharp_UnpinEventInStreamCache__SWIG_0 = GetProcAddress(hDll, "CSharp_UnpinEventInStreamCache__SWIG_0");
  (FARPROC&)Actual_CSharp_UnpinEventInStreamCache__SWIG_1 = GetProcAddress(hDll, "CSharp_UnpinEventInStreamCache__SWIG_1");
  (FARPROC&)Actual_CSharp_UnregisterAllGameObj = GetProcAddress(hDll, "CSharp_UnregisterAllGameObj");
  (FARPROC&)Actual_CSharp_UnregisterEmitter = GetProcAddress(hDll, "CSharp_UnregisterEmitter");
  (FARPROC&)Actual_CSharp_UnregisterGameObjInternal = GetProcAddress(hDll, "CSharp_UnregisterGameObjInternal");
  (FARPROC&)Actual_CSharp_UnregisterSpatialAudioListener = GetProcAddress(hDll, "CSharp_UnregisterSpatialAudioListener");
  (FARPROC&)Actual_CSharp_UnsetMedia = GetProcAddress(hDll, "CSharp_UnsetMedia");
  (FARPROC&)Actual_CSharp_WakeupFromSuspend = GetProcAddress(hDll, "CSharp_WakeupFromSuspend");
}

