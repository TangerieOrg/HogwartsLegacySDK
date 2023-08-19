#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMinimapInstanceIconFlags {
    MAP_INSTANCE_ICON_FLAG_ICON = 0,
    MAP_INSTANCE_ICON_FLAG_UP_ARROW = 2,
    MAP_INSTANCE_ICON_FLAG_DOWN_ARROW = 4,
    MAP_INSTANCE_ICON_FLAG_HIGHLIGHT = 8,
    MAP_INSTANCE_ICON_FLAG_MAX = 9,
};
#pragma pack(pop)
