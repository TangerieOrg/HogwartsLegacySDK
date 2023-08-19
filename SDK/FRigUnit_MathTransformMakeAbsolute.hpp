#pragma once
#include <cstdint>
#include "FRigUnit_MathTransformBase.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathTransformMakeAbsolute : public FRigUnit_MathTransformBase {
    char pad_8[0x8];
    FTransform Local; // 0x10
    FTransform Parent; // 0x40
    FTransform Global; // 0x70
}; // Size: 0xa0
#pragma pack(pop)
