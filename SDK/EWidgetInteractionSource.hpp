#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWidgetInteractionSource : uint8_t {
    World = 0,
    Mouse = 1,
    CenterScreen = 2,
    Custom = 3,
    EWidgetInteractionSource_MAX = 4,
};
#pragma pack(pop)
