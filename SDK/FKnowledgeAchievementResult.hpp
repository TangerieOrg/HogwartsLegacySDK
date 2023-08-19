#pragma once
#include <cstdint>
#include "FAchievementReward.hpp"
#pragma pack(push, 1)
struct FKnowledgeAchievementResult {
    FName AchievementID; // 0x0
    int32_t Occurances; // 0x8
    char pad_c[0x4];
    int64_t Timespan; // 0x10
    bool IsComplete; // 0x18
    char pad_19[0x3];
    int32_t Instances; // 0x1c
    bool IsAvailable; // 0x20
    char pad_21[0x7];
    TArray<FAchievementReward> Rewards; // 0x28
    FName ChallengeCategory; // 0x38
}; // Size: 0x40
#pragma pack(pop)
