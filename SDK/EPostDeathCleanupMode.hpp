#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPostDeathCleanupMode : uint8_t {
    TriggerOnMaximumReached = 0,
    TriggerOnTimer = 1,
    None = 2,
    EPostDeathCleanupMode_MAX = 3,
};
#pragma pack(pop)
