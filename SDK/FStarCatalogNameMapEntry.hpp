#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FStarCatalogNameMapEntry : public FTableRowBase {
    int32_t ID; // 0x8
    FName Name; // 0xc
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
