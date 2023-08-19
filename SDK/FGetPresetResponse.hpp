#pragma once
#include <cstdint>
#include "FRCPresetDescription.hpp"
#pragma pack(push, 1)
struct FGetPresetResponse {
    FRCPresetDescription Preset; // 0x0
}; // Size: 0x40
#pragma pack(pop)
