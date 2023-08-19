#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSecondaryTargetGetter;
#pragma pack(push, 1)
class UCameraStackBehaviorMoveArmOriginToTarget : public UCameraStackBehaviorBlend {
public:
    UCameraStackSecondaryTargetGetter* Target; // 0x1b8
    FVector Offset; // 0x1c0
    float PrimaryTargetOffsetFactor; // 0x1cc
    char pad_1d0[0x18];
    static UCameraStackBehaviorMoveArmOriginToTarget* StaticClass();
}; // Size: 0x1e8
#pragma pack(pop)
