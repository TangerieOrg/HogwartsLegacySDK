#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EParticleAllocationMode : uint8_t {
    AutomaticEstimate = 0,
    ManualEstimate = 1,
    EParticleAllocationMode_MAX = 2,
};
#pragma pack(pop)
