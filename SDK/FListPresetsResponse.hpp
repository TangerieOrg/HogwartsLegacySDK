#pragma once
#include <cstdint>
#include "FRCShortPresetDescription.hpp"
#pragma pack(push, 1)
struct FListPresetsResponse {
    TArray<FRCShortPresetDescription> Presets; // 0x0
}; // Size: 0x10
#pragma pack(pop)
