#pragma once
#include <cstdint>
#include "EAvatarPresetType.hpp"
#include "EGenderEnum.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FAvatarPreset : public FTableRowBase {
    EAvatarPresetType PresetType; // 0x8
    EGenderEnum Gender; // 0x9
    char pad_a[0x2e];
    bool DisplayInEditor; // 0x38
    char pad_39[0x3];
    float SortOrder; // 0x3c
}; // Size: 0x40
#pragma pack(pop)
