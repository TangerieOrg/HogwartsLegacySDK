#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum AnimationTypeToFetch : uint8_t {
    ANIMFETCH_UNKNOWN = 0,
    ANIMFETCH_ENTER = 1,
    ANIMFETCH_EXIT = 2,
    ANIMFETCH_MAX = 3,
};
#pragma pack(pop)
