#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMapPostFadeState : uint8_t {
    MAP_POST_FADE_STATE_NONE = 0,
    MAP_POST_FADE_STATE_NEW_MAP = 1,
    MAP_POST_FADE_STATE_CLOSE = 2,
    MAP_POST_FADE_STATE_MAX = 3,
};
#pragma pack(pop)
