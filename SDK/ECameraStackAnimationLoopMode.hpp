#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraStackAnimationLoopMode : uint8_t {
    Loop = 0,
    Remove = 1,
    Pause = 2,
    ECameraStackAnimationLoopMode_MAX = 3,
};
#pragma pack(pop)
