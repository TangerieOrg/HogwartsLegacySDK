#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "EBlendDomainLightingMode.hpp"
#include "ERenderSettingsIndoorsType.hpp"
#include "ERenderSettingsVolumeDayNightType.hpp"
#include "ERenderSettingsVolumeIndoorsOutdoorsType.hpp"
#include "ERenderSettingsVolumeOvercastType.hpp"
#include "FBlendDomainIndoorsOutdoorsCurve.hpp"
#include "FBlendDomainNormalizedTimeCurve.hpp"
#include "FCharacterLightRigAdjustments.hpp"
#include "FCharacterLightRigAdjustmentsName.hpp"
#include "FDistanceFog.hpp"
#include "FDistanceFogName.hpp"
#include "FDistanceFogOverrides.hpp"
#include "FPostProcessSettings.hpp"
#include "FRenderSettingsEmissiveAdaptationName.hpp"
#include "FRenderSettingsPostProcessing.hpp"
class URenderSettingsCustomBlendDomain;
class URenderSettingsLibrary;
#pragma pack(push, 1)
class ARenderSettingsVolume : public AVolume {
public:
    char pad_280[0x10];
    FRenderSettingsPostProcessing PostProcessing; // 0x290
    FDistanceFogName DistanceFog; // 0x2ec
    FDistanceFogOverrides DistanceFogOverrides; // 0x2f4
    FCharacterLightRigAdjustmentsName CharacterLightRigAdjustments; // 0x314
    FRenderSettingsEmissiveAdaptationName EmissiveAdaptation; // 0x31c
    float ExposureTweak; // 0x324
    ERenderSettingsVolumeIndoorsOutdoorsType IndoorsOutdoors; // 0x328
    ERenderSettingsIndoorsType IndoorsType; // 0x329
    ERenderSettingsVolumeDayNightType DayNight; // 0x32a
    ERenderSettingsVolumeOvercastType Overcast; // 0x32b
    EBlendDomainLightingMode LightingMode; // 0x32c
    char pad_32d[0x3];
    FBlendDomainNormalizedTimeCurve NormalizedTimeBlend; // 0x330
    FBlendDomainIndoorsOutdoorsCurve IndoorsOutdoorsBlendCurve; // 0x340
    TArray<URenderSettingsCustomBlendDomain*> CustomBlends; // 0x348
    float Priority; // 0x358
    float BlendRadius; // 0x35c
    float BlendWeight; // 0x360
    uint8_t bUnbounded : 1; // 0x364
    uint8_t bEnabled : 1; // 0x364
    uint8_t bExposureTweak : 1; // 0x364
    uint8_t bDistanceFog : 1; // 0x364
    uint8_t bCharacterLightRigAdjustments : 1; // 0x364
    uint8_t bEmissiveAdaptation : 1; // 0x364
    uint8_t pad_bitfield_364_6 : 2;
    char pad_365[0xb];
    FPostProcessSettings EnginePostProcessSettings; // 0x370
    FDistanceFog DistanceFogData; // 0x960
    FCharacterLightRigAdjustments CharacterLightRigAdjustmentsData; // 0xb20
    char pad_b38[0x8];
    static ARenderSettingsVolume* StaticClass();
    void UpdateEnginePostProcessing();
    void UpdateEmissiveAdaptation(URenderSettingsLibrary* Library);
    void UpdateDistanceFog(URenderSettingsLibrary* Library);
    void UpdateCharacterLightRigAdjustments(URenderSettingsLibrary* Library);
    void UpdateAll();
    void SetPriority(float NewPriority);
    void EditProbes();
    void EditGroups();
    void EditExposure();
    void EditDistanceFog();
    void EditColorGrading();
    void EditAll();
}; // Size: 0xb40
#pragma pack(pop)
