#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMapScreenMouseButtonID : uint8_t {
    MOUSE_BUTTON_LEFT = 0,
    MOUSE_BUTTON_RIGHT = 1,
    MOUSE_BUTTON_WHEEL = 2,
    MOUSE_BUTTON_MAX = 3,
};
#pragma pack(pop)
