#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARGeoTrackingAccuracy : uint8_t {
    Undetermined = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    EARGeoTrackingAccuracy_MAX = 4,
};
#pragma pack(pop)
