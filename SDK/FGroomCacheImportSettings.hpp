#pragma once
#include <cstdint>
#include "FSoftObjectPath.hpp"
#pragma pack(push, 1)
struct FGroomCacheImportSettings {
    bool bImportGroomCache; // 0x0
    bool bImportGroomAsset; // 0x1
    char pad_2[0x6];
    FSoftObjectPath GroomAsset; // 0x8
}; // Size: 0x20
#pragma pack(pop)
