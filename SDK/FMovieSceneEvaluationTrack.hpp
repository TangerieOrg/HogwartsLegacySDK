#pragma once
#include <cstdint>
#include "EEvaluationMethod.hpp"
#include "FGuid.hpp"
#include "FMovieSceneEvalTemplatePtr.hpp"
#include "FMovieSceneTrackImplementationPtr.hpp"
#pragma pack(push, 1)
struct FMovieSceneEvaluationTrack {
    FGuid ObjectBindingID; // 0x0
    uint16_t EvaluationPriority; // 0x10
    EEvaluationMethod EvaluationMethod; // 0x12
    char pad_13[0xd];
    TArray<FMovieSceneEvalTemplatePtr> ChildTemplates; // 0x20
    FMovieSceneTrackImplementationPtr TrackTemplate; // 0x30
    FName EvaluationGroup; // 0x68
    uint8_t bEvaluateInPreroll : 1; // 0x70
    uint8_t bEvaluateInPostroll : 1; // 0x70
    uint8_t bTearDownPriority : 1; // 0x70
    uint8_t pad_bitfield_70_3 : 5;
    char pad_71[0x7];
}; // Size: 0x78
#pragma pack(pop)
