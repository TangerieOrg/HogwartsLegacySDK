#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDatasmithAreaLightActorShape : uint8_t {
    Rectangle = 0,
    Disc = 1,
    Sphere = 2,
    Cylinder = 3,
    None = 4,
    EDatasmithAreaLightActorShape_MAX = 5,
};
#pragma pack(pop)
