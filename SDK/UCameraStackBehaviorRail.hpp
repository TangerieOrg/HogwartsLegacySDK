#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSplineGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorRail : public UCameraStackBehaviorBlend {
public:
    UCameraStackSplineGetter* SplineGetter; // 0x1b8
    FVector CameraTargetOffset; // 0x1c0
    float SplineMovementFrequency; // 0x1cc
    float BlendDuration; // 0x1d0
    bool bFollowSplineRotation; // 0x1d4
    bool bDebugDraw; // 0x1d5
    char pad_1d6[0xea];
    static UCameraStackBehaviorRail* StaticClass();
}; // Size: 0x2c0
#pragma pack(pop)
