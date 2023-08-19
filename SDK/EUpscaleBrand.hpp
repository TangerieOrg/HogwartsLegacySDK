#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUpscaleBrand : uint8_t {
    None = 0,
    DLSS = 1,
    FSR = 2,
    NIS = 3,
    FSR2 = 4,
    XeSS = 5,
    EUpscaleBrand_MAX = 6,
};
#pragma pack(pop)
