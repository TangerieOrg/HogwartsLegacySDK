#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFacialAnimType : uint8_t {
    FACIAL_ANIM_NONE = 0,
    FACIAL_ANIM_TALK = 1,
    FACIAL_ANIM_EAT = 2,
    FACIAL_ANIM_DRINK = 3,
    FACIAL_ANIM_LAUGH = 4,
    FACIAL_ANIM_CHEER = 5,
    FACIAL_ANIM_SLEEP = 6,
    FACIAL_ANIM_BUMPED = 7,
    FACIAL_ANIM_LISTEN = 8,
    FACIAL_ANIM_THINK = 9,
    FACIAL_ANIM_MAX = 10,
};
#pragma pack(pop)
