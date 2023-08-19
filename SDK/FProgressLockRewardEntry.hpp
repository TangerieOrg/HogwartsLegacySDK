#pragma once
#include <cstdint>
#include "EProgressLockRewardType.hpp"
#pragma pack(push, 1)
struct FProgressLockRewardEntry {
    EProgressLockRewardType RewardType; // 0x0
    char pad_1[0x3];
    FName RewardName; // 0x4
}; // Size: 0xc
#pragma pack(pop)
