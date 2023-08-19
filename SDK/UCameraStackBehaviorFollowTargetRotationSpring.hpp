#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorFollowTargetRotationSpring : public UCameraStackBehaviorBlend {
public:
    FVector2D DeadspotRangeDegrees; // 0x1b8
    FVector2D TargetSpeedRange; // 0x1c0
    float Frequency; // 0x1c8
    float DampingRatio; // 0x1cc
    bool bAffectYaw; // 0x1d0
    bool bAffectPitch; // 0x1d1
    bool bUseSubstepping; // 0x1d2
    char pad_1d3[0x1];
    float MaxTimeStep; // 0x1d4
    char pad_1d8[0x40];
    static UCameraStackBehaviorFollowTargetRotationSpring* StaticClass();
}; // Size: 0x218
#pragma pack(pop)
