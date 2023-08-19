#pragma once
#include <cstdint>
#include "FSubmixEffectEQBand.hpp"
#pragma pack(push, 1)
struct FSubmixEffectSubmixEQSettings {
    TArray<FSubmixEffectEQBand> EQBands; // 0x0
}; // Size: 0x10
#pragma pack(pop)
