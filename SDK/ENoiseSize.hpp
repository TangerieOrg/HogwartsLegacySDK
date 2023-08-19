#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENoiseSize : uint8_t {
    NoNoise = 0,
    SmallNoise = 1,
    MediumNoise = 2,
    LargeNoise = 3,
    HugeNoise = 4,
    UseSize = 5,
    ENoiseSize_MAX = 6,
};
#pragma pack(pop)
