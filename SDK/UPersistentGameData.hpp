#pragma once
#include <cstdint>
#include "FCharacterSaveGameInfo.hpp"
#include "FSaveDirectoryEntry.hpp"
#include "USaveGame.hpp"
#pragma pack(push, 1)
class UPersistentGameData : public USaveGame {
public:
    int32_t Version; // 0x28
    int32_t ChangeList; // 0x2c
    int64_t SessionTime; // 0x30
    FString Platform; // 0x38
    bool bDBC; // 0x48
    bool bExclusiveMissionActive; // 0x49
    char pad_4a[0x2];
    int32_t ExclusiveVersion; // 0x4c
    int32_t ExclusiveChangeList; // 0x50
    char pad_54[0x4];
    int64_t ExclusiveSessionTime; // 0x58
    FString ExclusivePlatform; // 0x60
    TArray<uint8_t> RawDatabaseImage; // 0x70
    TArray<uint8_t> RawExclusiveImage; // 0x80
    TArray<uint8_t> RawMiniMapImage; // 0x90
    FCharacterSaveGameInfo CharacterSaveGameInfo; // 0xa0
    bool bCompletedIntro; // 0x3f0
    char pad_3f1[0x57];
    TArray<FString> Entitlements; // 0x448
    TArray<FString> AnalyticsEvents; // 0x458
    bool bSkippedLanguageCheck; // 0x468
    char pad_469[0x7];
    FSaveDirectoryEntry DirectoryEntry; // 0x470
    static UPersistentGameData* StaticClass();
}; // Size: 0x4c8
#pragma pack(pop)
