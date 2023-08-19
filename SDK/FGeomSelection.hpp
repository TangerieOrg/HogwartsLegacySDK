#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGeomSelection {
    int32_t Type; // 0x0
    int32_t Index; // 0x4
    int32_t SelectionIndex; // 0x8
}; // Size: 0xc
#pragma pack(pop)
