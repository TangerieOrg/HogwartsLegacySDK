#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EUVProjectionMethod : uint8_t {
    Cube = 0,
    Cylinder = 1,
    Plane = 2,
    EUVProjectionMethod_MAX = 3,
};
#pragma pack(pop)
