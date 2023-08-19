#pragma once
#include <cstdint>
#include "FSourceEffectEQBand.hpp"
#pragma pack(push, 1)
struct FSourceEffectEQSettings {
    TArray<FSourceEffectEQBand> EQBands; // 0x0
}; // Size: 0x10
#pragma pack(pop)
