#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMapIconAnimationBinding : uint8_t {
    MAP_ICON_ANIMATION_BINDING_TRANSLATION = 0,
    MAP_ICON_ANIMATION_BINDING_SCALE = 1,
    MAP_ICON_ANIMATION_BINDING_MAX = 2,
};
#pragma pack(pop)
