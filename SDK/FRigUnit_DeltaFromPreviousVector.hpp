#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_DeltaFromPreviousVector : public FRigUnit_SimBase {
    FVector Value; // 0x8
    FVector Delta; // 0x14
    FVector PreviousValue; // 0x20
    FVector Cache; // 0x2c
}; // Size: 0x38
#pragma pack(pop)
