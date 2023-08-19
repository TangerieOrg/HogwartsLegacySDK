#pragma once
#include <cstdint>
#include "FCharacterSaveGameInfo.hpp"
#include "FDateTime.hpp"
#include "FSaveDirectoryEntry.hpp"
#pragma pack(push, 1)
struct FPersistentGameDataListInfo {
    bool bIsValid; // 0x0
    char pad_1[0x7];
    FString Filename; // 0x8
    int32_t AccountUserIndex; // 0x18
    char pad_1c[0x4];
    FDateTime LastEditTimeStamp; // 0x20
    FCharacterSaveGameInfo LastLoadedCharacter; // 0x28
    FCharacterSaveGameInfo CurrentCharacter; // 0x378
    TArray<FCharacterSaveGameInfo> CharacterList; // 0x6c8
    TArray<FSaveDirectoryEntry> SaveFileList; // 0x6d8
    bool bCompletedIntro; // 0x6e8
    char pad_6e9[0x57];
    TArray<FString> Entitlements; // 0x740
    TArray<FString> AnalyticsEvents; // 0x750
    bool bSkippedLanguageCheck; // 0x760
    char pad_761[0x7];
}; // Size: 0x768
#pragma pack(pop)
