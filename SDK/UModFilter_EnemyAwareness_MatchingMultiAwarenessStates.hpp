#pragma once
#include <cstdint>
#include "NPC_TargetAwareStateRateSource.hpp"
#include "UModFilter_EnemyAwareness_Base.hpp"
#pragma pack(push, 1)
class UModFilter_EnemyAwareness_MatchingMultiAwarenessStates : public UModFilter_EnemyAwareness_Base {
public:
    TArray<NPC_TargetAwareStateRateSource> MatchingAwarenessStates; // 0x30
    static UModFilter_EnemyAwareness_MatchingMultiAwarenessStates* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
