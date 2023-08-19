#pragma once
#include <cstdint>
#include "EWorldCalcSceneViewType.hpp"
#include "FPostProcessSettingsWeak.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FCalcViewInfo {
    FPostProcessSettingsWeak PostProcessSettings; // 0x0
    char pad_630[0x8];
    uint32_t UniqueId; // 0x638
    int32_t PlayerIndex; // 0x63c
    int32_t ViewIndex; // 0x640
    FVector ViewLocation; // 0x644
    FRotator ViewRotation; // 0x650
    float FOV; // 0x65c
    float DesiredFOV; // 0x660
    float LastEyeAdaptationExposure; // 0x664
    float LastAverageSceneLuminance; // 0x668
    float PreExposure; // 0x66c
    uint32_t FrameNumber; // 0x670
    EWorldCalcSceneViewType ViewType; // 0x674
    char pad_675[0xb];
}; // Size: 0x680
#pragma pack(pop)
