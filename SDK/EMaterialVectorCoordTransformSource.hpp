#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMaterialVectorCoordTransformSource : uint8_t {
    TRANSFORMSOURCE_Tangent = 0,
    TRANSFORMSOURCE_Local = 1,
    TRANSFORMSOURCE_World = 2,
    TRANSFORMSOURCE_View = 3,
    TRANSFORMSOURCE_Camera = 4,
    TRANSFORMSOURCE_ParticleWorld = 5,
    TRANSFORMSOURCE_MAX = 6,
};
#pragma pack(pop)
