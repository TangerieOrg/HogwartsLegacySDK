#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERayTracingGlobalIlluminationType : uint8_t {
    Disabled = 0,
    BruteForce = 1,
    FinalGather = 2,
    ERayTracingGlobalIlluminationType_MAX = 3,
};
#pragma pack(pop)
