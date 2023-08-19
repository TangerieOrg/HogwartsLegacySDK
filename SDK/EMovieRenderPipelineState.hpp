#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovieRenderPipelineState : uint8_t {
    Uninitialized = 0,
    ProducingFrames = 1,
    Finalize = 2,
    Export = 3,
    Finished = 4,
    EMovieRenderPipelineState_MAX = 5,
};
#pragma pack(pop)
