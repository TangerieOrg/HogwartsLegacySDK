#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EProbeNightLightMoonDirection : uint8_t {
    FromSkyState = 0,
    OppositeSun = 1,
    FixedDirection = 2,
    EProbeNightLightMoonDirection_MAX = 3,
};
#pragma pack(pop)
