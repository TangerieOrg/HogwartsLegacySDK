#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAchievementChallenge {
    FName AchievementChallengeID; // 0x0
    int32_t TotalOccurances; // 0x8
    int32_t TotalInstances; // 0xc
    int32_t Levels; // 0x10
    int32_t CompletedLevels; // 0x14
    TArray<FName> Members; // 0x18
    char pad_28[0x8];
}; // Size: 0x30
#pragma pack(pop)
