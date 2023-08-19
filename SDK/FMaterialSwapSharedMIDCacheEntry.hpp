#pragma once
#include <cstdint>
#include "FCachedMIDParameters.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
struct FMaterialSwapSharedMIDCacheEntry {
    UMaterialInstanceDynamic* Mid; // 0x0
    FCachedMIDParameters CachedParameters; // 0x8
}; // Size: 0x28
#pragma pack(pop)
