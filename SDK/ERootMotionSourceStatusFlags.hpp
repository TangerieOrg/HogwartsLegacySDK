#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERootMotionSourceStatusFlags {
    Prepared = 1,
    Finished = 2,
    MarkedForRemoval = 4,
    ERootMotionSourceStatusFlags_MAX = 5,
};
#pragma pack(pop)
