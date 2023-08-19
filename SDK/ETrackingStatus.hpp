#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ETrackingStatus : uint8_t {
    NotTracked = 0,
    InertialOnly = 1,
    Tracked = 2,
    ETrackingStatus_MAX = 3,
};
#pragma pack(pop)
