#pragma once
#include <cstdint>
#include "EScoreOverrideReturnConfigurationType.hpp"
#pragma pack(push, 1)
struct FScoreOverrideReturnConfiguration {
    EScoreOverrideReturnConfigurationType MultiplierToReturn; // 0x0
    float CustomMultiplier; // 0x4
    EScoreOverrideReturnConfigurationType RankToReturn; // 0x8
    float CustomRank; // 0xc
    EScoreOverrideReturnConfigurationType BonusToReturn; // 0x10
    float CustomBonus; // 0x14
}; // Size: 0x18
#pragma pack(pop)
