#pragma once
#include <cstdint>
#include "FMeshElementAttributeValue.hpp"
#pragma pack(push, 1)
struct FMeshElementAttributeData {
    FName AttributeName; // 0x0
    int32_t AttributeIndex; // 0x8
    char pad_c[0x4];
    FMeshElementAttributeValue AttributeValue; // 0x10
}; // Size: 0x60
#pragma pack(pop)
