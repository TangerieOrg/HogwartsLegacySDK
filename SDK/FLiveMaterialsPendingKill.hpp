#pragma once
#include <cstdint>
#include "FTimespan.hpp"
#pragma pack(push, 1)
struct FLiveMaterialsPendingKill {
    FTimespan LastTouched; // 0x0
    FTimespan DeathDelay; // 0x8
}; // Size: 0x10
#pragma pack(pop)
