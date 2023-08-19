#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum AnimationMatchFlags : uint8_t {
    MATCH_FIRST_FRAME = 0,
    MATCH_LAST_FRAME = 1,
    MATCH_MAX = 2,
};
#pragma pack(pop)
