#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMovieSceneSequenceID.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationOperand {
    FGuid ObjectBindingID; // 0x0
    FMovieSceneSequenceID SequenceID; // 0x10
}; // Size: 0x14
#pragma pack(pop)
