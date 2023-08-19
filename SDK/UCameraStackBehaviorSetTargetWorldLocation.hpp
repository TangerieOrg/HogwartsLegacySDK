#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorSetTargetWorldLocation : public UCameraStackBehaviorBlend {
public:
    FVector TargetWorldLocation; // 0x1b8
    float PrimaryTargetOffsetFactor; // 0x1c4
    static UCameraStackBehaviorSetTargetWorldLocation* StaticClass();
}; // Size: 0x1c8
#pragma pack(pop)
