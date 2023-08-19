#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_AccumulateVectorRange : public FRigUnit_SimBase {
    FVector Value; // 0x8
    FVector Minimum; // 0x14
    FVector Maximum; // 0x20
    FVector AccumulatedMinimum; // 0x2c
    FVector AccumulatedMaximum; // 0x38
    char pad_44[0x4];
}; // Size: 0x48
#pragma pack(pop)
