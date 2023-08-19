#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionUnaryOp : public FRigUnit_MathQuaternionBase {
    char pad_8[0x8];
    FQuat Value; // 0x10
    FQuat Result; // 0x20
}; // Size: 0x30
#pragma pack(pop)
