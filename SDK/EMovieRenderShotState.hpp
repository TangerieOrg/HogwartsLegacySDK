#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovieRenderShotState : uint8_t {
    Uninitialized = 0,
    WarmingUp = 1,
    MotionBlur = 2,
    Rendering = 3,
    Finished = 4,
    EMovieRenderShotState_MAX = 5,
};
#pragma pack(pop)
