#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInteractTurnToFaceRules : uint8_t {
    None = 0,
    PlayerToTarget = 1,
    TargetToPlayer = 2,
    TargetAxis = 3,
    EInteractTurnToFaceRules_MAX = 4,
};
#pragma pack(pop)
