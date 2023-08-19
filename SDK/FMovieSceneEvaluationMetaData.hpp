#pragma once
#include <cstdint>
#include "FMovieSceneOrderedEvaluationKey.hpp"
#include "FMovieSceneSequenceID.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationMetaData {
    TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
    TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
}; // Size: 0x20
#pragma pack(pop)
