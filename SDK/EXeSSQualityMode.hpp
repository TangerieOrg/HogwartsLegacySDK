#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EXeSSQualityMode : uint8_t {
    Off = 0,
    Performance = 1,
    Balanced = 2,
    Quality = 3,
    UltraQuality = 4,
    EXeSSQualityMode_MAX = 5,
};
#pragma pack(pop)
