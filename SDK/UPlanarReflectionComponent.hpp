#pragma once
#include <cstdint>
#include "USceneCaptureComponent.hpp"
class UBoxComponent;
#pragma pack(push, 1)
class UPlanarReflectionComponent : public USceneCaptureComponent {
public:
    float NormalDistortionStrength; // 0x2e0
    float PrefilterRoughness; // 0x2e4
    float PrefilterRoughnessDistance; // 0x2e8
    int32_t ScreenPercentage; // 0x2ec
    float ExtraFOV; // 0x2f0
    float DistanceFromPlaneFadeStart; // 0x2f4
    float DistanceFromPlaneFadeEnd; // 0x2f8
    float DistanceFromPlaneFadeoutStart; // 0x2fc
    float DistanceFromPlaneFadeoutEnd; // 0x300
    float AngleFromPlaneFadeStart; // 0x304
    float AngleFromPlaneFadeEnd; // 0x308
    bool bShowPreviewPlane; // 0x30c
    bool bRenderSceneTwoSided; // 0x30d
    char pad_30e[0xb2];
    static UPlanarReflectionComponent* StaticClass();
}; // Size: 0x3c0
#pragma pack(pop)
