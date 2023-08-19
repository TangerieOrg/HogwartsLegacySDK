#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStencilManagerEffectPriority : uint8_t {
    AlwaysInterrupt = 0,
    Low = 1,
    BelowNormal = 2,
    Normal = 3,
    AboveNormal = 4,
    High = 5,
    VeryHigh = 6,
    NeverInterrupt = 7,
    EStencilManagerEffectPriority_MAX = 8,
};
#pragma pack(pop)
