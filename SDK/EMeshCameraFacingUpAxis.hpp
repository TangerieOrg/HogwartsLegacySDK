#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMeshCameraFacingUpAxis : uint8_t {
    CameraFacing_NoneUP = 0,
    CameraFacing_ZUp = 1,
    CameraFacing_NegativeZUp = 2,
    CameraFacing_YUp = 3,
    CameraFacing_NegativeYUp = 4,
    CameraFacing_MAX = 5,
};
#pragma pack(pop)
