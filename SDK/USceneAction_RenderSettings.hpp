#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "FRenderSettingsPostProcessing.hpp"
#include "USceneRigActionBase.hpp"
#pragma pack(push, 1)
class USceneAction_RenderSettings : public USceneRigActionBase {
public:
    FRenderSettingsPostProcessing PostProcessing; // 0x88
    float ExposureTweak; // 0xe4
    float FeatherInTime; // 0xe8
    float FeatherOutTime; // 0xec
    FBlendDomain BlendDomain; // 0xf0
    float Priority; // 0x128
    bool bEnabled; // 0x12c
    bool bUseExposureTweak; // 0x12d
    char pad_12e[0x2];
    static USceneAction_RenderSettings* StaticClass();
}; // Size: 0x130
#pragma pack(pop)
