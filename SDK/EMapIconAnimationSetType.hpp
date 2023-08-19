#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMapIconAnimationSetType : uint8_t {
    MAP_ICON_ANIMATION_SET_TYPE_APPEND = 0,
    MAP_ICON_ANIMATION_SET_TYPE_DIRECT = 1,
    MAP_ICON_ANIMATION_SET_TYPE_LERP = 2,
    MAP_ICON_ANIMATION_SET_TYPE_MAX = 3,
};
#pragma pack(pop)
