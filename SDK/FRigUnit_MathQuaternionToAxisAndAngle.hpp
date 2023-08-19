#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionToAxisAndAngle : public FRigUnit_MathQuaternionBase {
    char pad_8[0x8];
    FQuat Value; // 0x10
    FVector Axis; // 0x20
    float Angle; // 0x2c
}; // Size: 0x30
#pragma pack(pop)
