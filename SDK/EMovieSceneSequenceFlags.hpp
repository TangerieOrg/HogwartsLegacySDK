#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EMovieSceneSequenceFlags : uint8_t {
    None = 0,
    Volatile = 1,
    BlockingEvaluation = 2,
    InheritedFlags = 1,
    EMovieSceneSequenceFlags_MAX = 3,
};
#pragma pack(pop)
