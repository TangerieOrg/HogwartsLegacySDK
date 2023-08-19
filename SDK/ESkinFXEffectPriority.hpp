#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkinFXEffectPriority : uint8_t {
    NeverInterrupt = 0,
    VeryHigh = 1,
    High = 2,
    Normal = 3,
    Low = 4,
    AlwaysInterrupt = 5,
    ESkinFXEffectPriority_MAX = 6,
};
#pragma pack(pop)
