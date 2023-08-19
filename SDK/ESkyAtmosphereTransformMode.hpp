#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESkyAtmosphereTransformMode : uint8_t {
    PlanetTopAtAbsoluteWorldOrigin = 0,
    PlanetTopAtComponentTransform = 1,
    PlanetCenterAtComponentTransform = 2,
    ESkyAtmosphereTransformMode_MAX = 3,
};
#pragma pack(pop)
