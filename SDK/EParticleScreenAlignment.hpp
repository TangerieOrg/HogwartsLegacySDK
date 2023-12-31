#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EParticleScreenAlignment : uint8_t {
    PSA_FacingCameraPosition = 0,
    PSA_Square = 1,
    PSA_Rectangle = 2,
    PSA_Velocity = 3,
    PSA_AwayFromCenter = 4,
    PSA_TypeSpecific = 5,
    PSA_FacingCameraDistanceBlend = 6,
    PSA_MAX = 7,
};
#pragma pack(pop)
