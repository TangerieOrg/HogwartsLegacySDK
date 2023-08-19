#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWindGustSimplexNoiseMode : uint8_t {
    Constant = 0,
    Simple = 1,
    XYPlane = 2,
    Full3D = 3,
    EWindGustSimplexNoiseMode_MAX = 4,
};
#pragma pack(pop)
