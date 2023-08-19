#pragma once
#include <cstdint>
#include "EPerkState.hpp"
#pragma pack(push, 1)
struct FPerkTreeEntry {
    FString ID; // 0x0
    FString PerkCategory; // 0x10
    int32_t LevelRequirement; // 0x20
    int32_t Row; // 0x24
    int32_t Column; // 0x28
    FName LockId; // 0x2c
    FName LockID2; // 0x34
    FName AbilityID; // 0x3c
    EPerkState State; // 0x44
    char pad_45[0x3];
    int32_t CurrentLevel; // 0x48
    int32_t MaxLevel; // 0x4c
    FString NextUpgrade; // 0x50
    bool IsUpgrade; // 0x60
    char pad_61[0x3];
    int32_t TotalEffectiveLevel; // 0x64
    FName PrerequisitePerkID; // 0x68
}; // Size: 0x70
#pragma pack(pop)
