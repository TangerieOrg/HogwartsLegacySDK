#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EGainParamMode : uint8_t {
    Linear = 0,
    Decibels = 1,
    EGainParamMode_MAX = 2,
};
#pragma pack(pop)
