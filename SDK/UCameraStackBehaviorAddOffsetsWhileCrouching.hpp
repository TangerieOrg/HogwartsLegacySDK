#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorAddOffsetsWhileCrouching : public UCameraStackBehaviorBlend {
public:
    float TargetZOffset; // 0x1b8
    float ArmOriginZOffset; // 0x1bc
    FVector CameraSpaceTranslation; // 0x1c0
    bool bApplyToStealthOnly; // 0x1cc
    char pad_1cd[0x3];
    float BlendDuration; // 0x1d0
    bool bAddArmOriginZOffsetWhileMoving; // 0x1d4
    char pad_1d5[0x3];
    float ArmOriginZOffsetWhileMoving; // 0x1d8
    float MovingBlendDuration; // 0x1dc
    char pad_1e0[0x48];
    static UCameraStackBehaviorAddOffsetsWhileCrouching* StaticClass();
}; // Size: 0x228
#pragma pack(pop)
