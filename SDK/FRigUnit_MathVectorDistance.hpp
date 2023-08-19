#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorDistance : public FRigUnit_MathVectorBase {
    FVector A; // 0x8
    FVector B; // 0x14
    float Result; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
