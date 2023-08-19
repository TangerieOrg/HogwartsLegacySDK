#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELastCameraInput : uint8_t {
    None = 0,
    Look = 1,
    MouseLook = 2,
    Tilt = 3,
    ELastCameraInput_MAX = 4,
};
#pragma pack(pop)
