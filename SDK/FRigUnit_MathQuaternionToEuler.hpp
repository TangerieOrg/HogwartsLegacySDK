#pragma once
#include <cstdint>
#include "EControlRigRotationOrder.hpp"
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionToEuler : public FRigUnit_MathQuaternionBase {
    char pad_8[0x8];
    FQuat Value; // 0x10
    EControlRigRotationOrder RotationOrder; // 0x20
    char pad_21[0x3];
    FVector Result; // 0x24
}; // Size: 0x30
#pragma pack(pop)
