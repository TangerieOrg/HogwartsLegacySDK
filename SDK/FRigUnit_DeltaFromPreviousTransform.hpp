#pragma once
#include <cstdint>
#include "FRigUnit_SimBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_DeltaFromPreviousTransform : public FRigUnit_SimBase {
    char pad_8[0x8];
    FTransform Value; // 0x10
    FTransform Delta; // 0x40
    FTransform PreviousValue; // 0x70
    FTransform Cache; // 0xa0
}; // Size: 0xd0
#pragma pack(pop)
