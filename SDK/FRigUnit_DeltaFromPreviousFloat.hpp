#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_DeltaFromPreviousFloat : public FRigUnit_SimBase {
    float Value; // 0x8
    float Delta; // 0xc
    float PreviousValue; // 0x10
    float Cache; // 0x14
}; // Size: 0x18
#pragma pack(pop)
