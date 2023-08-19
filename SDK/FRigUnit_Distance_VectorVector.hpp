#pragma once
#include <cstdint>
#include "FRigUnit.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_Distance_VectorVector : public FRigUnit {
    FVector Argument0; // 0x8
    FVector Argument1; // 0x14
    float Result; // 0x20
    char pad_24[0x4];
}; // Size: 0x28
#pragma pack(pop)
