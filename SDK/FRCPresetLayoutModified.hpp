#pragma once
#include <cstdint>
#include "FRCPresetDescription.hpp"
#pragma pack(push, 1)
struct FRCPresetLayoutModified {
    FString Type; // 0x0
    FRCPresetDescription Preset; // 0x10
}; // Size: 0x50
#pragma pack(pop)
