#pragma once
#include <cstdint>
#include "FMovieSceneEvaluationFieldEntityKey.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationFieldEntity {
    FMovieSceneEvaluationFieldEntityKey Key; // 0x0
    int32_t SharedMetaDataIndex; // 0xc
}; // Size: 0x10
#pragma pack(pop)
