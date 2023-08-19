#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FAchievementReward {
    FName RewardType; // 0x0
    int32_t RewardInt; // 0x8
    FName RewardText; // 0xc
    bool IsHidden; // 0x14
    bool Delayed; // 0x15
    char pad_16[0x2];
    FName RewardCategory; // 0x18
}; // Size: 0x20
#pragma pack(pop)
