#pragma once
#include <cstdint>
#include "FMaterialPermuterKeyCached.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterKeyCache {
    char pad_0[0x50];
    TArray<FMaterialPermuterKeyCached> Cache; // 0x50
    bool bSorted; // 0x60
    char pad_61[0x7];
}; // Size: 0x68
#pragma pack(pop)
