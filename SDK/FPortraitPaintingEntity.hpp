#pragma once
#include <cstdint>
#include "EPortraitPaintingEntitySource.hpp"
#pragma pack(push, 1)
struct FPortraitPaintingEntity {
    FString EntityName; // 0x0
    char pad_10[0x10];
    EPortraitPaintingEntitySource Source; // 0x20
    char pad_21[0x7];
}; // Size: 0x28
#pragma pack(pop)
