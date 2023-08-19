#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightCullingPriority : uint8_t {
    Low = 0,
    Default = 1,
    High = 2,
    Ultra = 3,
    ELightCullingPriority_MAX = 4,
};
#pragma pack(pop)
