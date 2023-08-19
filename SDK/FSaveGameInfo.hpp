#pragma once
#include <cstdint>
#include "ESaveType.hpp"
#pragma pack(push, 1)
struct FSaveGameInfo {
    FString SlotName; // 0x0
    int32_t AccountUserIndex; // 0x10
    int32_t CharacterID; // 0x14
    ESaveType SaveType; // 0x18
    char pad_19[0x7];
    FString PlayedTime; // 0x20
    FString PlatformSaveTime; // 0x30
    FString CurrentMap; // 0x40
    FString CurrentAction; // 0x50
    FString SaveVersion; // 0x60
    bool bIsUsed; // 0x70
    char pad_71[0x7];
}; // Size: 0x78
#pragma pack(pop)
