#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMapIconState : uint8_t {
    MAP_ICON_STATE_HOVER = 0,
    MAP_ICON_STATE_FT_PULSE = 1,
    MAP_ICON_STATE_PLAYER_BOUNCE = 2,
    MAP_ICON_STATE_NEWLY_DISCOVERED = 3,
    MAP_ICON_STATE_NEAREST_FT = 4,
    MAP_ICON_STATE_STOP_ANIMATION = 5,
    MAP_ICON_STATE_STOP_ANIMATION_POSITION_ONLY = 6,
    MAP_ICON_STATE_STOP_ANIMATION_SCALE_ONLY = 7,
    MAP_ICON_STATE_IDLE = 8,
    MAP_ICON_STATE_INVALID = 9,
    MAP_ICON_STATE_MAX = 10,
};
#pragma pack(pop)