#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMaterialPositionTransformSource : uint8_t {
    TRANSFORMPOSSOURCE_Local = 0,
    TRANSFORMPOSSOURCE_World = 1,
    TRANSFORMPOSSOURCE_TranslatedWorld = 2,
    TRANSFORMPOSSOURCE_View = 3,
    TRANSFORMPOSSOURCE_Camera = 4,
    TRANSFORMPOSSOURCE_Particle = 5,
    TRANSFORMPOSSOURCE_MAX = 6,
};
#pragma pack(pop)
