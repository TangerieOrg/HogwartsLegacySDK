#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EScrollingWidgetTypes : uint8_t {
    SCROLLING_WIDGET_TYPE_NONE = 0,
    SCROLLING_WIDGET_TYPE_LEFT_TO_RIGHT = 1,
    SCROLLING_WIDGET_TYPE_RIGHT_TO_LEFT = 2,
    SCROLLING_WIDGET_TYPE_MAX = 3,
};
#pragma pack(pop)
