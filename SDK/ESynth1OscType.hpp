#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESynth1OscType : uint8_t {
    Sine = 0,
    Saw = 1,
    Triangle = 2,
    Square = 3,
    Noise = 4,
    Count = 5,
    ESynth1OscType_MAX = 6,
};
#pragma pack(pop)
