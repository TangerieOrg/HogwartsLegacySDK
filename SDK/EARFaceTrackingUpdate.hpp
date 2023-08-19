#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARFaceTrackingUpdate : uint8_t {
    CurvesAndGeo = 0,
    CurvesOnly = 1,
    EARFaceTrackingUpdate_MAX = 2,
};
#pragma pack(pop)
