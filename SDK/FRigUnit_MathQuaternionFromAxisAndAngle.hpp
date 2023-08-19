#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionFromAxisAndAngle : public FRigUnit_MathQuaternionBase {
    FVector Axis; // 0x8
    float Angle; // 0x14
    char pad_18[0x8];
    FQuat Result; // 0x20
}; // Size: 0x30
#pragma pack(pop)
