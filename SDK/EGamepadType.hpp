#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EGamepadType : uint8_t {
    Gamepad_XboxOne = 0,
    Gamepad_PS4 = 1,
    Gamepad_PS5 = 2,
    Gamepad_Switch = 3,
    Gamepad_Steam = 4,
    Gamepad_Misc = 0,
    Gamepad_MAX = 5,
};
#pragma pack(pop)
