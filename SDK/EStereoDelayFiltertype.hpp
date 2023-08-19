#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EStereoDelayFiltertype : uint8_t {
    Lowpass = 0,
    Highpass = 1,
    Bandpass = 2,
    Notch = 3,
    Count = 4,
    EStereoDelayFiltertype_MAX = 5,
};
#pragma pack(pop)
