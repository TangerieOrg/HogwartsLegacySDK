#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAnimateLightColorIntensityBlend : uint8_t {
    Replace = 0,
    Multiply = 1,
    Additive = 2,
    EAnimateLightColorIntensityBlend_MAX = 3,
};
#pragma pack(pop)
