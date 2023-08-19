#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInputDevices {
    None = 0,
    Keyboard = 1,
    Mouse = 2,
    Gamepad = 4,
    OculusTouch = 8,
    HTCViveWands = 16,
    AnySpatialDevice = 24,
    TabletFingers = 1024,
    EInputDevices_MAX = 1025,
};
#pragma pack(pop)
