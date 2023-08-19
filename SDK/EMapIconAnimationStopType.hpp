#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMapIconAnimationStopType {
    MAP_ICON_ANIMATION_STOP_TYPE_ALL = 0,
    MAP_ICON_ANIMATION_STOP_TYPE_POSITION_ONLY = 1,
    MAP_ICON_ANIMATION_STOP_TYPE_SCALE_ONLY = 2,
    MAP_ICON_ANIMATION_STOP_TYPE_MAX = 3,
};
#pragma pack(pop)
