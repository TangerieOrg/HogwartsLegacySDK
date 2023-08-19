#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovieSceneEvaluationType : uint8_t {
    FrameLocked = 0,
    WithSubFrames = 1,
    EMovieSceneEvaluationType_MAX = 2,
};
#pragma pack(pop)
