#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EARFaceTrackingDirection : uint8_t {
    FaceRelative = 0,
    FaceMirrored = 1,
    EARFaceTrackingDirection_MAX = 2,
};
#pragma pack(pop)
