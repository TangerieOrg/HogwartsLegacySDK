#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EParticleSystemOcclusionBoundsMethod : uint8_t {
    EPSOBM_None = 0,
    EPSOBM_ParticleBounds = 1,
    EPSOBM_CustomBounds = 2,
    EPSOBM_MAX = 3,
};
#pragma pack(pop)
