#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMapIconAnimationLoopType : uint8_t {
    MAP_ICON_ANIMATION_LOOP_TYPE_ONE_SHOT = 0,
    MAP_ICON_ANIMATION_LOOP_TYPE_LOOPING = 1,
    MAP_ICON_ANIMATION_LOOP_TYPE_BOUNCE = 2,
    MAP_ICON_ANIMATION_LOOP_TYPE_MAX = 3,
};
#pragma pack(pop)
