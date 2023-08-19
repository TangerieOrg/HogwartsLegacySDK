#pragma once
#include <cstdint>
#include "FBoxSphereBounds.hpp"
#include "FVector.hpp"
#include "FVegetationInteractionCameraFade.hpp"
#pragma pack(push, 1)
struct FVegetationInteractionSource {
    float Priority; // 0x0
    FBoxSphereBounds Bounds; // 0x4
    FVector WorldPosition; // 0x20
    float InnerRadius; // 0x2c
    float OuterRadius; // 0x30
    float ForceScalingMultiplier; // 0x34
    float MaxAngleMultiplier; // 0x38
    char pad_3c[0x4];
    FVegetationInteractionCameraFade CameraFade; // 0x40
    FVector CameraFadeTarget; // 0x78
    float CameraFadeBaseZ; // 0x84
    float CameraDistanceSquared; // 0x88
    bool bOnCamera; // 0x8c
    char pad_8d[0x3];
}; // Size: 0x90
#pragma pack(pop)
