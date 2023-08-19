#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UMapCameraParameters : public UDataAsset {
public:
    bool LimitRotationBasedOnPitch; // 0x30
    bool LimitPitch; // 0x31
    char pad_32[0x2];
    float PitchDefault; // 0x34
    FVector2D PitchLimit; // 0x38
    float PitchSpeedMultiplier; // 0x40
    bool LimitYaw; // 0x44
    char pad_45[0x3];
    float YawDefault; // 0x48
    FVector2D YawLimit; // 0x4c
    float YawSpeedMultiplier; // 0x54
    bool LimitPitchBasedOnRadius; // 0x58
    bool LimitRadius; // 0x59
    char pad_5a[0x2];
    float RadiusDefault; // 0x5c
    FVector2D RadiusLimit; // 0x60
    float RaduisSpeedMultiplier; // 0x68
    float ZoomSnapInterpSpeed; // 0x6c
    float MoveSpeed; // 0x70
    float MoveAccelerationFactor; // 0x74
    float MoveDecelerationFactor; // 0x78
    float MoveMouseDragMaxSpeedFactor; // 0x7c
    float MoveMouseDragAccelerationFrequency; // 0x80
    float MoveMouseDragDecelerationFrequency; // 0x84
    float MoveMouseDragDampingFactor; // 0x88
    float MoveDecelerationFactorMouseFlick; // 0x8c
    float GamepadCameraFollowAccelerationFrequency; // 0x90
    float GamepadCameraFollowDecelerationFrequency; // 0x94
    float GamepadCameraFollowDampingFactor; // 0x98
    char pad_9c[0x4];
    static UMapCameraParameters* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
