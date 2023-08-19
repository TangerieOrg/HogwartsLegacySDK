#pragma once
#include <cstdint>
#include "FMaterialPermuterKey.hpp"
#pragma pack(push, 1)
struct FMaterialPermuterKeyCached : public FMaterialPermuterKey {
    FName CachedHash; // 0x10
}; // Size: 0x18
#pragma pack(pop)
