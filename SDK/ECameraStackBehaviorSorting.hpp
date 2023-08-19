#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraStackBehaviorSorting : uint8_t {
    Oldest = 0,
    Newest = 1,
    Bottommost = 2,
    Topmost = 3,
    ECameraStackBehaviorSorting_MAX = 4,
};
#pragma pack(pop)
