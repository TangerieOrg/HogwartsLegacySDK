#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EEmitterNormalsMode : uint8_t {
    ENM_CameraFacing = 0,
    ENM_Spherical = 1,
    ENM_Cylindrical = 2,
    ENM_MAX = 3,
};
#pragma pack(pop)
