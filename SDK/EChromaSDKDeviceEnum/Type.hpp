#pragma once
#include <cstdint>
namespace EChromaSDKDeviceEnum {
#pragma pack(push, 1)
enum Type : uint8_t {
    DE_ChromaLink = 0,
    DE_Headset = 1,
    DE_Keyboard = 2,
    DE_Keypad = 3,
    DE_Mouse = 4,
    DE_Mousepad = 5,
    DE_KeyboardExtended = 6,
    DE_MAX = 7,
};
#pragma pack(pop)
}
