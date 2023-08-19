#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARTrackingQuality : uint8_t {
    NotTracking = 0,
    OrientationOnly = 1,
    OrientationAndPosition = 2,
    EARTrackingQuality_MAX = 3,
};
#pragma pack(pop)
