#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovieSceneCompletionMode : uint8_t {
    KeepState = 0,
    RestoreState = 1,
    ProjectDefault = 2,
    EMovieSceneCompletionMode_MAX = 3,
};
#pragma pack(pop)
