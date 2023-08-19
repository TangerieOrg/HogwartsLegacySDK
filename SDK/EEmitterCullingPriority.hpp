#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EEmitterCullingPriority : uint8_t {
    Misc = 0,
    Optional = 1,
    Important = 2,
    NeverCull = 3,
    EEmitterCullingPriority_MAX = 4,
};
#pragma pack(pop)
