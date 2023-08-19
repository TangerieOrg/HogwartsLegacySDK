#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionSelectBool : public FRigUnit_MathQuaternionBase {
    bool Condition; // 0x8
    char pad_9[0x7];
    FQuat IfTrue; // 0x10
    FQuat IfFalse; // 0x20
    FQuat Result; // 0x30
}; // Size: 0x40
#pragma pack(pop)
