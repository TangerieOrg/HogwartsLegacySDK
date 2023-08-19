#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAudioFaderCurve : uint8_t {
    Linear = 0,
    Logarithmic = 1,
    SCurve = 2,
    Sin = 3,
    Count = 4,
    EAudioFaderCurve_MAX = 5,
};
#pragma pack(pop)
