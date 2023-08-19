#pragma once
#include <cstdint>
#include "FModularSynthPreset.hpp"
#pragma pack(push, 1)
struct FModularSynthPresetBankEntry {
    FString PresetName; // 0x0
    FModularSynthPreset Preset; // 0x10
}; // Size: 0xf0
#pragma pack(pop)
