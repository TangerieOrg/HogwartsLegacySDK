#pragma once
#include <cstdint>
#include "EControlRigRotationOrder.hpp"
#include "FRigUnit_MathBase.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionRotationOrder : public FRigUnit_MathBase {
    EControlRigRotationOrder RotationOrder; // 0x8
    char pad_9[0x7];
}; // Size: 0x10
#pragma pack(pop)
