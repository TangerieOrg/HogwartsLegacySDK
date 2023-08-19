#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBloomMethod : uint8_t {
    BM_SOG = 0,
    BM_FFT = 1,
    BM_MAX = 2,
};
#pragma pack(pop)
