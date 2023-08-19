#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EInputEvent : uint8_t {
    IE_Pressed = 0,
    IE_Released = 1,
    IE_Repeat = 2,
    IE_DoubleClick = 3,
    IE_Axis = 4,
    IE_MAX = 5,
};
#pragma pack(pop)
