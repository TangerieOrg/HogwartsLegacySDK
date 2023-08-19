#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESynthFilterType : uint8_t {
    LowPass = 0,
    HighPass = 1,
    BandPass = 2,
    BandStop = 3,
    Count = 4,
    ESynthFilterType_MAX = 5,
};
#pragma pack(pop)
