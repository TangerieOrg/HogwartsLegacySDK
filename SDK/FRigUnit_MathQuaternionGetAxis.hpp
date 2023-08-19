#pragma once
#include <cstdint>
#include "EAxis\Type.hpp"
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionGetAxis : public FRigUnit_MathQuaternionBase {
    char pad_8[0x8];
    FQuat Quaternion; // 0x10
    EAxis::Type Axis; // 0x20
    char pad_21[0x3];
    FVector Result; // 0x24
}; // Size: 0x30
#pragma pack(pop)
