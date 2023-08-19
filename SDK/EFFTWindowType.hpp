#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFFTWindowType : uint8_t {
    None = 0,
    Hamming = 1,
    Hann = 2,
    Blackman = 3,
    EFFTWindowType_MAX = 4,
};
#pragma pack(pop)
