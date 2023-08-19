#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENiagaraMeshFacingMode : uint8_t {
    Default = 0,
    Velocity = 1,
    CameraPosition = 2,
    CameraPlane = 3,
    ENiagaraMeshFacingMode_MAX = 4,
};
#pragma pack(pop)
