#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInteractOffsetRules : uint8_t {
    None = 0,
    PlayerToTarget = 1,
    TargetToPlayer = 2,
    TargetAxis = 3,
    TargetPlane = 4,
    EInteractOffsetRules_MAX = 5,
};
#pragma pack(pop)
