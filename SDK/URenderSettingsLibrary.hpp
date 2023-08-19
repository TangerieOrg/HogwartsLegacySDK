#pragma once
#include <cstdint>
#include "FLastRenderedExposureFilterTimeConstants.hpp"
#include "FRenderSettingsCustomBlendDomainConsoleEntry.hpp"
#include "FRenderSettingsCustomBlendDomainEntry.hpp"
#include "UDataAsset.hpp"
class URenderSettingsPPColorGradingSettings;
class UDistanceFogSettings;
class URenderSettingsPostProcessingGroupSettings;
class URenderSettingsPPExposureSettings;
class URenderSettingsPPFilmSettings;
class URenderSettingsPPDepthOfFieldSettings;
class URenderSettingsPPLensFXSettings;
class URenderSettingsPPMotionBlurSettings;
class URenderSettingsPPBloomSettings;
class URenderSettingsPPAmbientSettings;
class URenderSettingsPPScreenSpaceReflectionsSettings;
class URenderSettingsPPProbesSettings;
class URenderSettingsEmissiveAdaptationSettings;
class UCharacterLightRigAdjustmentsSettings;
class URenderSettingsBlendDomainConsoleLiens;
#pragma pack(push, 1)
class URenderSettingsLibrary : public UDataAsset {
public:
    float PostProcessingPriorityBoost; // 0x30
    float InsideTransitionDepth; // 0x34
    float AudioInsideTransitionDepth; // 0x38
    float IndoorsOutdoorsFiltering; // 0x3c
    float IndoorsOutdoorsTeleportDistance; // 0x40
    FLastRenderedExposureFilterTimeConstants ExposureTimeConstants; // 0x44
    char pad_4c[0x4];
    URenderSettingsPostProcessingGroupSettings* PostProcessingGroupSettings; // 0x50
    URenderSettingsPPExposureSettings* ExposureSettings; // 0x58
    URenderSettingsPPColorGradingSettings* ColorGradingSettings; // 0x60
    URenderSettingsPPFilmSettings* FilmSettings; // 0x68
    URenderSettingsPPLensFXSettings* LensFXSettings; // 0x70
    URenderSettingsPPBloomSettings* BloomSettings; // 0x78
    URenderSettingsPPMotionBlurSettings* MotionBlurSettings; // 0x80
    URenderSettingsPPDepthOfFieldSettings* DepthOfFieldSettings; // 0x88
    URenderSettingsPPAmbientSettings* AmbientSettings; // 0x90
    URenderSettingsPPScreenSpaceReflectionsSettings* ScreenSpaceReflectionsSettings; // 0x98
    URenderSettingsPPProbesSettings* ProbeSettings; // 0xa0
    URenderSettingsEmissiveAdaptationSettings* EmissiveAdaptationSettings; // 0xa8
    UDistanceFogSettings* DistanceFogSettings; // 0xb0
    UCharacterLightRigAdjustmentsSettings* CharacterLightRigAdjustmentsSettings; // 0xb8
    TArray<FRenderSettingsCustomBlendDomainEntry> CustomBlendDomains; // 0xc0
    TArray<FRenderSettingsCustomBlendDomainConsoleEntry> ConsoleCustomBlendDomains; // 0xd0
    URenderSettingsBlendDomainConsoleLiens* GlobalBlendDomainConsoleVars; // 0xe0
    TArray<FName> AutoDisableWorldNames; // 0xe8
    bool bGlobalDisableLevelDefaults; // 0xf8
    bool bPostProcessingPriorityBoost; // 0xf9
    char pad_fa[0x6];
    static URenderSettingsLibrary* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
