#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ChooseAttackFlags {
    UseFallbackRange = 0,
    IgnoreSelectCooldown = 1,
    ResetFailed = 2,
    IgnoreSelectRanges = 3,
    IgnoreOptRanges = 4,
    IgnoreMinAttackAngle = 5,
    TargetOffNav = 6,
    HighTier = 7,
    MedTier = 8,
    LowTier = 9,
    AnyTier = 10,
    IgnoreSelectWeights = 11,
    Count = 12,
    ChooseAttackFlags_MAX = 13,
};
#pragma pack(pop)
