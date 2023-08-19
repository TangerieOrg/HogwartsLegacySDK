#pragma once
#include <cstdint>
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
#include "USceneComponent.hpp"
class URenderSettingsCustomBlendDomain;
class URenderSettingsLibrary;
#pragma pack(push, 1)
class URenderSettingsComponent : public USceneComponent {
public:
    char pad_220[0x8];
    FRenderSettingsPostProcessing PostProcessing; // 0x228
    char pad_284[0xc];
    FPostProcessSettings EnginePostProcessSettings; // 0x290
    float ExposureTweak; // 0x880
    FDistanceFogName DistanceFog; // 0x884
    FDistanceFogOverrides DistanceFogOverrides; // 0x88c
    FCharacterLightRigAdjustmentsName CharacterLightRigAdjustments; // 0x8ac
    FRenderSettingsEmissiveAdaptationName EmissiveAdaptation; // 0x8b4
    ERenderSettingsVolumeIndoorsOutdoorsType IndoorsOutdoors; // 0x8bc
    ERenderSettingsIndoorsType IndoorsType; // 0x8bd
    ERenderSettingsVolumeDayNightType DayNight; // 0x8be
    ERenderSettingsVolumeOvercastType Overcast; // 0x8bf
    EBlendDomainLightingMode LightingMode; // 0x8c0
    char pad_8c1[0x7];
    FBlendDomainNormalizedTimeCurve NormalizedTimeBlend; // 0x8c8
    FBlendDomainIndoorsOutdoorsCurve IndoorsOutdoorsBlendCurve; // 0x8d8
    TArray<URenderSettingsCustomBlendDomain*> CustomBlends; // 0x8e0
    float Priority; // 0x8f0
    float BlendRadius; // 0x8f4
    float BlendWeight; // 0x8f8
    uint8_t bEnabled : 1; // 0x8fc
    uint8_t bUnbounded : 1; // 0x8fc
    uint8_t bExposureTweak : 1; // 0x8fc
    uint8_t bDistanceFog : 1; // 0x8fc
    uint8_t bCharacterLightRigAdjustments : 1; // 0x8fc
    uint8_t bEmissiveAdaptation : 1; // 0x8fc
    uint8_t pad_bitfield_8fc_6 : 2;
    char pad_8fd[0x3];
    FDistanceFog DistanceFogData; // 0x900
    FCharacterLightRigAdjustments CharacterLightRigAdjustmentsData; // 0xac0
    char pad_ad8[0x8];
    static URenderSettingsComponent* StaticClass();
    void UpdateEnginePostProcessing();
    void UpdateEmissiveAdaptation(URenderSettingsLibrary* Library);
    void UpdateDistanceFog(URenderSettingsLibrary* Library);
    void UpdateCharacterLightRigAdjustments(URenderSettingsLibrary* Library);
    void UpdateAll();
    void SetPriority(float NewPriority);
    void SetPostProcessing(FRenderSettingsPostProcessing NewPostProcessing);
    void SetExposureTweak(float NewExposureTweak, bool bEnable);
    void SetEmissiveAdaptation(FRenderSettingsEmissiveAdaptationName NewEmissiveAdaptation, bool bEnable);
    void SetDistanceFog(FDistanceFogName NewDistanceFog, bool bEnable);
    void SetCharacterLightRigAdjustments(FCharacterLightRigAdjustmentsName NewCharacterLightRigAdjustments, bool bEnable);
    void ClearExposureTweak();
    void ClearEmissiveAdaptation();
    void ClearDistanceFog();
    void ClearCharacterLightRigAdjustments();
}; // Size: 0xae0
#pragma pack(pop)
