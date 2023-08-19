#pragma once
#include <cstdint>
#include "AVolume.hpp"
class UBoxComponent;
class UBlendableGlobalLightingComponent;
class URenderSettingsComponent;
class UPostProcessComponent;
#pragma pack(push, 1)
class ASanctuaryLightingIdentityVolume : public AVolume {
public:
    float Priority; // 0x280
    float BlendRadius; // 0x284
    float BlendWeight; // 0x288
    bool bUnbounded; // 0x28c
    bool bEnableTransitionExposureSpeedUp; // 0x28d
    char pad_28e[0x2];
    float TransitionExposureSpeed; // 0x290
    bool bEnableTransitionFogHistoryRemoval; // 0x294
    char pad_295[0x3];
    float TransitionFogHistoryWeight; // 0x298
    bool bEnableDayNight; // 0x29c
    bool bEnableGlobalLighting; // 0x29d
    bool bEnableRenderSettings; // 0x29e
    bool bEnablePostProcess; // 0x29f
    UBoxComponent* BoxComponent; // 0x2a0
    UBlendableGlobalLightingComponent* GlobalLightingComponent; // 0x2a8
    URenderSettingsComponent* RenderSettingsComponent; // 0x2b0
    UPostProcessComponent* PostProcessComponent; // 0x2b8
    UBlendableGlobalLightingComponent* PrevGlobalLightingComponent; // 0x2c0
    URenderSettingsComponent* PrevRenderSettingsComponent; // 0x2c8
    UPostProcessComponent* PrevPostProcessComponent; // 0x2d0
    UBlendableGlobalLightingComponent* TransitionGlobalLightingComponent; // 0x2d8
    UPostProcessComponent* TransitionPostProcessComponent; // 0x2e0
    char pad_2e8[0x10];
    static ASanctuaryLightingIdentityVolume* StaticClass();
}; // Size: 0x2f8
#pragma pack(pop)
