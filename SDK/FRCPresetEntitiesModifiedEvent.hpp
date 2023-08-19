#pragma once
#include <cstdint>
#include "FRCPresetModifiedEntitiesDescription.hpp"
#pragma pack(push, 1)
struct FRCPresetEntitiesModifiedEvent {
    FString Type; // 0x0
    FName PresetName; // 0x10
    FString PresetId; // 0x18
    FRCPresetModifiedEntitiesDescription ModifiedEntities; // 0x28
}; // Size: 0x58
#pragma pack(pop)
