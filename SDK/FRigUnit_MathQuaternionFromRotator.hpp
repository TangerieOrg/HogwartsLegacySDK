#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#include "FRotator.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionFromRotator : public FRigUnit_MathQuaternionBase {
    FRotator Rotator; // 0x8
    char pad_14[0xc];
    FQuat Result; // 0x20
}; // Size: 0x30
#pragma pack(pop)
