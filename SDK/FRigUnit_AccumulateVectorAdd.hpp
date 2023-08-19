#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_AccumulateVectorAdd : public FRigUnit_SimBase {
    FVector Increment; // 0x8
    FVector InitialValue; // 0x14
    bool bIntegrateDeltaTime; // 0x20
    char pad_21[0x3];
    FVector Result; // 0x24
    FVector AccumulatedValue; // 0x30
    char pad_3c[0x4];
}; // Size: 0x40
#pragma pack(pop)
