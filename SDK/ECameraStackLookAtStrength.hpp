#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraStackLookAtStrength : uint8_t {
    None = 0,
    SoftPitchHint = 1,
    SoftHint = 2,
    Strong = 3,
    StrongOverTheShoulder = 4,
    PlayerInitiated = 5,
    NUM = 6,
    ECameraStackLookAtStrength_MAX = 7,
};
#pragma pack(pop)
