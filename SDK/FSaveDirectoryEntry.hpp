#pragma once
#include <cstdint>
#include "ESaveType.hpp"
#include "FDateTime.hpp"
#pragma pack(push, 1)
struct FSaveDirectoryEntry {
    FString FilenameSlot; // 0x0
    int32_t AccountUserIndex; // 0x10
    int32_t CharacterID; // 0x14
    ESaveType SaveType; // 0x18
    bool bIsUsed; // 0x19
    char pad_1a[0x6];
    FDateTime GameTime; // 0x20
    FDateTime SaveTime; // 0x28
    FString CurrentMap; // 0x30
    FString CurrentAction; // 0x40
    int32_t MajorVersion; // 0x50
    int32_t MinorVersion; // 0x54
}; // Size: 0x58
#pragma pack(pop)
