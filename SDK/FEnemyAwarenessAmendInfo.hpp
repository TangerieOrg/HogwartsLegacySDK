#pragma once
#include <cstdint>
#include "NPC_TargetAwareStateRateSource.hpp"
#pragma pack(push, 1)
struct FEnemyAwarenessAmendInfo {
    NPC_TargetAwareStateRateSource AwareState; // 0x0
    char pad_1[0x3];
    float DistFromPlayer; // 0x4
}; // Size: 0x8
#pragma pack(pop)
