#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorCameraSpaceRotationLag : public UCameraStackBehaviorBlend {
public:
    float LagSpeedYaw; // 0x1b8
    float LagSpeedPitch; // 0x1bc
    float LagSpeedRoll; // 0x1c0
    bool bLagPreviousBehaviorOnly; // 0x1c4
    bool bWorldSpace; // 0x1c5
    bool bUseSubstepping; // 0x1c6
    char pad_1c7[0x1];
    float MaxTimeStep; // 0x1c8
    char pad_1cc[0x4c];
    static UCameraStackBehaviorCameraSpaceRotationLag* StaticClass();
}; // Size: 0x218
#pragma pack(pop)
