#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCreatureCombatStageSpecifier {
    float HealthPercent; // 0x0
    int32_t MaxNumChainedAttacks; // 0x4
    int32_t NumBehaviorCyclesBeforeReposition; // 0x8
}; // Size: 0xc
#pragma pack(pop)
