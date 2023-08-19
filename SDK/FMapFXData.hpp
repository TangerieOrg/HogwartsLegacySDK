#pragma once
#include <cstdint>
#include "FMapFXEntry.hpp"
#pragma pack(push, 1)
struct FMapFXData {
    TArray<FMapFXEntry> Effects; // 0x0
}; // Size: 0x10
#pragma pack(pop)
