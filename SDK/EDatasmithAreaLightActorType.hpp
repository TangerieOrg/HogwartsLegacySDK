#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDatasmithAreaLightActorType : uint8_t {
    Point = 0,
    Spot = 1,
    Rect = 2,
    EDatasmithAreaLightActorType_MAX = 3,
};
#pragma pack(pop)
