#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDayNightInheritSunMode : uint8_t {
    SunDiskOnly = 0,
    FullSunRecompute = 1,
    EDayNightInheritSunMode_MAX = 2,
};
#pragma pack(pop)
