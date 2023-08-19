#pragma once
#include <cstdint>
namespace ECursorControlTypes {
#pragma pack(push, 1)
enum Type : uint8_t {
    CURSOR_CONTROL_AUTO = 0,
    CURSOR_CONTROL_GAMEPAD = 1,
    CURSOR_CONTROL_MOUSE = 2,
    CURSOR_CONTROL_MAX = 3,
};
#pragma pack(pop)
}
