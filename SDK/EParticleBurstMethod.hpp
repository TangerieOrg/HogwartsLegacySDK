#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EParticleBurstMethod : uint8_t {
    EPBM_Instant = 0,
    EPBM_Interpolated = 1,
    EPBM_MAX = 2,
};
#pragma pack(pop)
