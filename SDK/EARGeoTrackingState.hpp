#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARGeoTrackingState : uint8_t {
    Initializing = 0,
    Localized = 1,
    Localizing = 2,
    NotAvailable = 3,
    EARGeoTrackingState_MAX = 4,
};
#pragma pack(pop)
