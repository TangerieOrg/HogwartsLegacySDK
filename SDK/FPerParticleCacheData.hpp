#pragma once
#include <cstdint>
#include "FParticleTransformTrack.hpp"
#pragma pack(push, 1)
struct FPerParticleCacheData {
    FParticleTransformTrack TransformData; // 0x0
    char pad_48[0x50];
}; // Size: 0x98
#pragma pack(pop)
