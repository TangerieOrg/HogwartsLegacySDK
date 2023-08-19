#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARTrackingState : uint8_t {
    Unknown = 0,
    Tracking = 1,
    NotTracking = 2,
    StoppedTracking = 3,
    EARTrackingState_MAX = 4,
};
#pragma pack(pop)
