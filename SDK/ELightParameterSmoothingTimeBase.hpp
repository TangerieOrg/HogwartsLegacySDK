#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightParameterSmoothingTimeBase : uint8_t {
    Seconds = 0,
    Minutes = 1,
    Hours = 2,
    ELightParameterSmoothingTimeBase_MAX = 3,
};
#pragma pack(pop)
