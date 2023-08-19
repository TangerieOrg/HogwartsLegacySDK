#pragma once
#include <cstdint>
#include "FQuat.hpp"
#include "FRigUnit_MathQuaternionBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathQuaternionFromTwoVectors : public FRigUnit_MathQuaternionBase {
    FVector A; // 0x8
    FVector B; // 0x14
    FQuat Result; // 0x20
}; // Size: 0x30
#pragma pack(pop)
