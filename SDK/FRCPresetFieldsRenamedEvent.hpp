#pragma once
#include <cstdint>
#include "FRCPresetFieldRenamed.hpp"
#pragma pack(push, 1)
struct FRCPresetFieldsRenamedEvent {
    FString Type; // 0x0
    FName PresetName; // 0x10
    FString PresetId; // 0x18
    TArray<FRCPresetFieldRenamed> RenamedFields; // 0x28
}; // Size: 0x38
#pragma pack(pop)
