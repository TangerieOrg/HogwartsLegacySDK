#pragma once
#include <cstdint>
#include "ECharacterNameFormat.hpp"
#include "FFrontendPlayerState.hpp"
#include "FUDSPlayerState.hpp"
#pragma pack(push, 1)
struct FCharacterSaveGameInfo {
    int32_t CharacterID; // 0x0
    char pad_4[0x4];
    FString CharacterName; // 0x8
    FString CharacterPronoun; // 0x18
    FString CharacterVoice; // 0x28
    FString CharacterHouse; // 0x38
    FString CharacterGender; // 0x48
    int32_t CharacterLevel; // 0x58
    uint8_t CharacterGameDifficulty; // 0x5c
    char pad_5d[0x3];
    TArray<FName> CharacterPresetData; // 0x60
    TArray<FName> CharacterClothesData; // 0x70
    FString GearTags; // 0x80
    bool bIsUsed; // 0x90
    char pad_91[0x7];
    FString CharacterUID; // 0x98
    FUDSPlayerState UDSPlayerState; // 0xa8
    FFrontendPlayerState FrontendPlayerState; // 0x2e8
    int32_t VoicePitch; // 0x338
    ECharacterNameFormat CurrentFormat; // 0x33c
    char pad_33d[0x3];
    TArray<uint8_t> CharacterNameBytes; // 0x340
}; // Size: 0x350
#pragma pack(pop)
