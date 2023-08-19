#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraStackSplineType : uint8_t {
    LookAheadSpline = 0,
    RailCameraSpline = 1,
    RailTargetSpline = 2,
    None = 3,
    ECameraStackSplineType_MAX = 4,
};
#pragma pack(pop)
