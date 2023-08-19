#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EParticleSourceSelectionMethod : uint8_t {
    EPSSM_Random = 0,
    EPSSM_Sequential = 1,
    EPSSM_MAX = 2,
};
#pragma pack(pop)
