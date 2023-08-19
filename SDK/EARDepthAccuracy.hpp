#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARDepthAccuracy : uint8_t {
    Unkown = 0,
    Approximate = 1,
    Accurate = 2,
    EARDepthAccuracy_MAX = 3,
};
#pragma pack(pop)
