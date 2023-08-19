#pragma once
#include <cstdint>
#include "UCogGroupEvaluation_CombinedBase.hpp"
#pragma pack(push, 1)
class UCogGroupEvaluation_CombinedTargeting : public UCogGroupEvaluation_CombinedBase {
public:
    float MaxFOVForScoringEnemies; // 0x50
    float MinFOVScoreForEnemies; // 0x54
    float MinHeightScore; // 0x58
    float NearDistanceBoostPctNonCombat; // 0x5c
    float NearDistanceBoostPctCombatGamepad; // 0x60
    float NearDistanceBoostPctCombatMouse; // 0x64
    float BelowMouseCursorBoostPct; // 0x68
    float SpellComboBoostPct; // 0x6c
    float StickyBoostPct; // 0x70
    char pad_74[0x4];
    static UCogGroupEvaluation_CombinedTargeting* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
