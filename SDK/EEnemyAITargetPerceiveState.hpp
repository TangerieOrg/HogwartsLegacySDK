#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEnemyAITargetPerceiveState {
    None = 0,
    Gather = 1,
    Evaluate = 2,
    EEnemyAITargetPerceiveState_MAX = 3,
};
#pragma pack(pop)
