#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARTrackingQualityReason : uint8_t {
    None = 0,
    Initializing = 1,
    Relocalizing = 2,
    ExcessiveMotion = 3,
    InsufficientFeatures = 4,
    InsufficientLight = 5,
    BadState = 6,
    EARTrackingQualityReason_MAX = 7,
};
#pragma pack(pop)
