#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EDrawPolygonDrawMode : uint8_t {
    Freehand = 0,
    Circle = 1,
    Square = 2,
    Rectangle = 3,
    RoundedRectangle = 4,
    HoleyCircle = 5,
    EDrawPolygonDrawMode_MAX = 6,
};
#pragma pack(pop)
