#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorEquals : public FRigUnit_MathVectorBase {
    FVector A; // 0x8
    FVector B; // 0x14
    bool Result; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
