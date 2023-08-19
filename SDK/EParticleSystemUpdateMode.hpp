#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EParticleSystemUpdateMode : uint8_t {
    EPSUM_RealTime = 0,
    EPSUM_FixedTime = 1,
    EPSUM_MAX = 2,
};
#pragma pack(pop)
