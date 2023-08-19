#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "FMovieSceneTrackEvalOptions.hpp"
#include "FMovieSceneTrackEvaluationField.hpp"
#include "UMovieSceneSignedObject.hpp"
#pragma pack(push, 1)
class UMovieSceneTrack : public UMovieSceneSignedObject {
public:
    FMovieSceneTrackEvalOptions EvalOptions; // 0x50
    char pad_54[0x1];
    bool bIsEvalDisabled; // 0x55
    char pad_56[0x2];
    TArray<int32_t> RowsDisabled; // 0x58
    char pad_68[0x4];
    FGuid EvaluationFieldGuid; // 0x6c
    char pad_7c[0x4];
    FMovieSceneTrackEvaluationField EvaluationField; // 0x80
    static UMovieSceneTrack* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
