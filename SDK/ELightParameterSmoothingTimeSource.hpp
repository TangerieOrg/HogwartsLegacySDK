#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightParameterSmoothingTimeSource : uint8_t {
    RealTime = 0,
    TimeOfDay = 1,
    NormalizedTime = 2,
    ELightParameterSmoothingTimeSource_MAX = 3,
};
#pragma pack(pop)
