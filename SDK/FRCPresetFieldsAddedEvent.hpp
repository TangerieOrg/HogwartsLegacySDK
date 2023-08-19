#pragma once
#include <cstdint>
#include "FRCPresetDescription.hpp"
#pragma pack(push, 1)
struct FRCPresetFieldsAddedEvent {
    FString Type; // 0x0
    FName PresetName; // 0x10
    FString PresetId; // 0x18
    FRCPresetDescription Description; // 0x28
}; // Size: 0x68
#pragma pack(pop)
