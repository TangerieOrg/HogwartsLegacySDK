#pragma once
#include <cstdint>
#include "EGenderEnum.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FAvatarFullbodyPreset : public FTableRowBase {
    EGenderEnum Gender; // 0x8
    char pad_9[0x57];
    bool DisplayInEditor; // 0x60
    char pad_61[0x3];
    float SortOrder; // 0x64
}; // Size: 0x68
#pragma pack(pop)
