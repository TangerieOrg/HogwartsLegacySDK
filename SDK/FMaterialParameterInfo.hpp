#pragma once
#include <cstdint>
#include "EMaterialParameterAssociation.hpp"
#pragma pack(push, 1)
struct FMaterialParameterInfo {
    FName Name; // 0x0
    EMaterialParameterAssociation Association; // 0x8
    char pad_9[0x3];
    int32_t Index; // 0xc
}; // Size: 0x10
#pragma pack(pop)
