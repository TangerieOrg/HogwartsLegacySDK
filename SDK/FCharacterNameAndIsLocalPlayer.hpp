#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCharacterNameAndIsLocalPlayer {
    FName CharacterName; // 0x0
    bool LocalPlayer; // 0x8
    char pad_9[0x7];
    FString ActorProvider; // 0x10
}; // Size: 0x20
#pragma pack(pop)
