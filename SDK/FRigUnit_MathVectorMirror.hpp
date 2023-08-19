#pragma once
#include <cstdint>
#include "FRigUnit_MathVectorBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_MathVectorMirror : public FRigUnit_MathVectorBase {
    FVector Value; // 0x8
    FVector Normal; // 0x14
    FVector Result; // 0x20
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
