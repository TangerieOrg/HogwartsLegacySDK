#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EObjectPropertyType : uint8_t {
    Animate = 0,
    Inanimate = 1,
    Plant = 2,
    Dead = 3,
    Water = 4,
    EObjectPropertyType_MAX = 5,
};
#pragma pack(pop)
