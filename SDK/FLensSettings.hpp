#pragma once
#include <cstdint>
#include "FLensBloomSettings.hpp"
#include "FLensImperfectionSettings.hpp"
#pragma pack(push, 1)
struct FLensSettings {
    FLensBloomSettings Bloom; // 0x0
    FLensImperfectionSettings Imperfections; // 0xb8
    float ChromaticAberration; // 0xd8
    char pad_dc[0x4];
}; // Size: 0xe0
#pragma pack(pop)
