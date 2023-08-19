#pragma once
#include <cstdint>
namespace EChromaSDKDevice2DEnum {
#pragma pack(push, 1)
enum Type : uint8_t {
    DE_Keyboard = 0,
    DE_Keypad = 1,
    DE_Mouse = 2,
    DE_KeyboardExtended = 3,
    DE_MAX = 4,
};
#pragma pack(pop)
}
