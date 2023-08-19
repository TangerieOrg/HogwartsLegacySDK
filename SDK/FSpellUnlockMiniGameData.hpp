#pragma once
#include <cstdint>
#include "FInputCheckpoint.hpp"
#include "FSpellUnlockMiniGamePath.hpp"
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FSpellUnlockMiniGameData : public FTableRowBase {
    FName GameName; // 0x8
    char pad_10[0x50];
    float StoryDelay; // 0x60
    float EasyDelay; // 0x64
    float NormalDelay; // 0x68
    float HardDelay; // 0x6c
    char pad_70[0x50];
    FSpellUnlockMiniGamePath CurvePath; // 0xc0
    FInputCheckpoint FinalCheckpoint; // 0xd0
    TArray<FInputCheckpoint> InputCheckpoints; // 0xe8
}; // Size: 0xf8
#pragma pack(pop)
