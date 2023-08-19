#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFollowCameraType : uint8_t {
    FCT_OFF = 0,
    FCT_FULL = 1,
    FCT_XYONLY = 2,
    FCT_FIXEDZ = 3,
    FCT_OFFSETZ = 4,
    FCT_MAX = 5,
};
#pragma pack(pop)
