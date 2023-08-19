#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EAttractorParticleSelectionMethod : uint8_t {
    EAPSM_Random = 0,
    EAPSM_Sequential = 1,
    EAPSM_MAX = 2,
};
#pragma pack(pop)
