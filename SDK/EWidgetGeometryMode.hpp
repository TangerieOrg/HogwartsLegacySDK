#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWidgetGeometryMode : uint8_t {
    Plane = 0,
    Cylinder = 1,
    EWidgetGeometryMode_MAX = 2,
};
#pragma pack(pop)
