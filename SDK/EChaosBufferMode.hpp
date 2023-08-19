#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EChaosBufferMode : uint8_t {
    Double = 0,
    Triple = 1,
    Num = 2,
    Invalid = 3,
    EChaosBufferMode_MAX = 4,
};
#pragma pack(pop)
