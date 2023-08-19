#pragma once
#include <cstdint>
#include "FMovieSceneEvaluationFieldEntity.hpp"
#include "FMovieSceneEvaluationFieldEntityMetaData.hpp"
#include "FMovieSceneEvaluationFieldEntityTree.hpp"
#include "FMovieSceneEvaluationFieldSharedEntityMetaData.hpp"
#pragma pack(push, 1)
struct FMovieSceneEntityComponentField {
    FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
    FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
    TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
    TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
    TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
}; // Size: 0xf0
#pragma pack(pop)
