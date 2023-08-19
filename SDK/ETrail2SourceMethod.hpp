#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETrail2SourceMethod : uint8_t {
    PET2SRCM_Default = 0,
    PET2SRCM_Particle = 1,
    PET2SRCM_Actor = 2,
    PET2SRCM_MAX = 3,
};
#pragma pack(pop)
