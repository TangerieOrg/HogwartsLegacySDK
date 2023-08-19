#pragma once
#include <cstdint>
#include "FAchievementChallenge.hpp"
#pragma pack(push, 1)
struct FAchievementCategory {
    FName CategoryID; // 0x0
    TArray<FAchievementChallenge> Challenges; // 0x8
}; // Size: 0x18
#pragma pack(pop)
