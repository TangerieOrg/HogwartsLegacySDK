#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionRotateVector : public FRigUnit_MathQuaternionBase {
    char pad_8[0x8];
    FQuat Quaternion; // 0x10
    FVector Vector; // 0x20
    FVector Result; // 0x2c
    char pad_38[0x8];
}; // Size: 0x40
#pragma pack(pop)
