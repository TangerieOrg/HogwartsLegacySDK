#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARFaceTransformMixing : uint8_t {
    ComponentOnly = 0,
    ComponentLocationTrackedRotation = 1,
    ComponentWithTracked = 2,
    TrackingOnly = 3,
    EARFaceTransformMixing_MAX = 4,
};
#pragma pack(pop)
