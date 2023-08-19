#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FRCPresetMetadataModified {
    FString Type; // 0x0
    FName PresetName; // 0x10
    FString PresetId; // 0x18
    char pad_28[0x50];
}; // Size: 0x78
#pragma pack(pop)
