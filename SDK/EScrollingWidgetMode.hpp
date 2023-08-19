#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EScrollingWidgetMode : uint8_t {
    SCROLLING_WIDGET_MODE_NONE = 0,
    SCROLLING_WIDGET_MODE_ALWAYS_ON = 1,
    SCROLLING_WIDGET_MODE_ON_HOVER = 2,
    SCROLLING_WIDGET_MODE_IF_TRUNCATED = 3,
    SCROLLING_WIDGET_MODE_MAX = 4,
};
#pragma pack(pop)
