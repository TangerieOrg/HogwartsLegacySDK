#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_SimBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_DeltaFromPreviousQuat : public FRigUnit_SimBase {
    char pad_8[0x8];
    FQuat Value; // 0x10
    FQuat Delta; // 0x20
    FQuat PreviousValue; // 0x30
    FQuat Cache; // 0x40
}; // Size: 0x50
#pragma pack(pop)
