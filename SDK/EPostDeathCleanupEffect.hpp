#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPostDeathCleanupEffect : uint8_t {
    Dissolve = 0,
    Fade = 1,
    Destroy = 2,
    None = 3,
    EPostDeathCleanupEffect_MAX = 4,
};
#pragma pack(pop)
