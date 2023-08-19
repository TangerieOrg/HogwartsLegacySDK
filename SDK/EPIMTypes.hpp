#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EPIMTypes : uint8_t {
    PressAccept = 0,
    PressAndHoldAccept = 1,
    JoystickClockwise = 2,
    JoystickCounterClockwise = 3,
    JoystickSmileyFace = 4,
    JoystickWaggleLeftRight = 5,
    JoystickLeft = 6,
    JoystickRight = 7,
    JoystickUp = 8,
    JoystickDown = 9,
    TelescopeFocus = 10,
    SpellCast = 11,
    PressWildcardAction = 12,
    EPIMTypes_MAX = 13,
};
#pragma pack(pop)
