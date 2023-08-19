#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FPathCollectorPath {
    TArray<FVector> Path; // 0x0
    int32_t Priority; // 0x10
    float Distance; // 0x14
    FString Name; // 0x18
    FVector Start; // 0x28
    FVector Location; // 0x34
    FString IconName; // 0x40
    bool bIsMission; // 0x50
    char pad_51[0x3];
    FName MissionID; // 0x54
    FName CharacterID; // 0x5c
    bool bTintIt; // 0x64
    char pad_65[0xb];
}; // Size: 0x70
#pragma pack(pop)
