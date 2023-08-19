#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARDepthQuality : uint8_t {
    Unkown = 0,
    Low = 1,
    High = 2,
    EARDepthQuality_MAX = 3,
};
#pragma pack(pop)
