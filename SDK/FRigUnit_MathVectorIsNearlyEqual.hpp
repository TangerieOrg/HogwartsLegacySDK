#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorIsNearlyEqual : public FRigUnit_MathVectorBase {
    FVector A; // 0x8
    FVector B; // 0x14
    float Tolerance; // 0x20
    bool Result; // 0x24
    char pad_25[0x3];
}; // Size: 0x28
#pragma pack(pop)
