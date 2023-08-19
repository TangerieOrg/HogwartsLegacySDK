#pragma once
#include <cstdint>
#include "FBTCustomAction.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_FollowSpline : public URootMotionModifierProperties {
public:
    float StartSpeed; // 0x30
    bool bUseActualSpeedAsStartSpeed; // 0x34
    char pad_35[0x3];
    float Acceleration; // 0x38
    float MinSpeed; // 0x3c
    float MaxSpeed; // 0x40
    float RotationSpeed; // 0x44
    float MaxOffsetRadius; // 0x48
    float HoritzontalSpeed; // 0x4c
    FBTCustomAction SendActionAtEndOfSpline; // 0x50
    bool bDebug; // 0x5c
    char pad_5d[0x3];
    static URootMotionModifierProperties_FollowSpline* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
