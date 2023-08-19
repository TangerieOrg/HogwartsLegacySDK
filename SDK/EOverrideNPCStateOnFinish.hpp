#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EOverrideNPCStateOnFinish : uint8_t {
    None = 0,
    Idle = 1,
    Move = 2,
    Attack = 3,
    Disengage = 4,
    Dead = 5,
    Destroy = 6,
    Custom = 7,
    EOverrideNPCStateOnFinish_MAX = 8,
};
#pragma pack(pop)
