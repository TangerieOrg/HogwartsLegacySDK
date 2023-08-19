#pragma once
#include <cstdint>
#include "EAvatarPresetType.hpp"
#include "EGenderEnum.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UAvatarPresetDefinition : public UDataAsset {
public:
    EAvatarPresetType PresetType; // 0x30
    EGenderEnum Gender; // 0x31
    char pad_32[0x56];
    static UAvatarPresetDefinition* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
