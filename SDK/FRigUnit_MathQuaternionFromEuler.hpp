#pragma once
#include <cstdint>
#include "EControlRigRotationOrder.hpp"
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionFromEuler : public FRigUnit_MathQuaternionBase {
    FVector Euler; // 0x8
    EControlRigRotationOrder RotationOrder; // 0x14
    char pad_15[0xb];
    FQuat Result; // 0x20
}; // Size: 0x30
#pragma pack(pop)
