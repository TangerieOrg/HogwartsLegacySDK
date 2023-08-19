#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class UNISMode : uint8_t {
    Off = 0,
    UltraQuality = 1,
    Quality = 2,
    Balanced = 3,
    Performance = 4,
    Custom = 5,
    UNISMode_MAX = 6,
};
#pragma pack(pop)
