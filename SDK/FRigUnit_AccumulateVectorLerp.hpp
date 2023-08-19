#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_AccumulateVectorLerp : public FRigUnit_SimBase {
    FVector TargetValue; // 0x8
    FVector InitialValue; // 0x14
    float Blend; // 0x20
    bool bIntegrateDeltaTime; // 0x24
    char pad_25[0x3];
    FVector Result; // 0x28
    FVector AccumulatedValue; // 0x34
}; // Size: 0x40
#pragma pack(pop)
