#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARSessionType : uint8_t {
    None = 0,
    Orientation = 1,
    World = 2,
    Face = 3,
    Image = 4,
    ObjectScanning = 5,
    PoseTracking = 6,
    GeoTracking = 7,
    EARSessionType_MAX = 8,
};
#pragma pack(pop)
