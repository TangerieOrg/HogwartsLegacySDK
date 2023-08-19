#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ENavigationSource {
    FocusedWidget = 0,
    WidgetUnderCursor = 1,
    ENavigationSource_MAX = 2,
};
#pragma pack(pop)
