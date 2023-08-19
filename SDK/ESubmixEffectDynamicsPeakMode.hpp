#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESubmixEffectDynamicsPeakMode : uint8_t {
    MeanSquared = 0,
    RootMeanSquared = 1,
    Peak = 2,
    Count = 3,
    ESubmixEffectDynamicsPeakMode_MAX = 4,
};
#pragma pack(pop)
