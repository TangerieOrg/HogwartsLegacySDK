#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EInputDeviceUsed : uint8_t {
    None = 0,
    KeyBoard_Mouse = 1,
    Gamepad = 2,
    EInputDeviceUsed_MAX = 3,
};
#pragma pack(pop)
