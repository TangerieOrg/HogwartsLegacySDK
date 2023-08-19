#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EAttachCameraType : uint8_t {
    ACT_FULL = 0,
    ACT_XYZ = 1,
    ACT_XYONLY = 2,
    ACT_BILLBOARD = 3,
    ACT_ROTATION = 4,
    ACT_MAX = 5,
};
#pragma pack(pop)
