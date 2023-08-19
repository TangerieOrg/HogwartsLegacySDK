#pragma once
#include <cstdint>
#include "EMovieSceneSequenceFlags.hpp"
#include "FFrameTime.hpp"
#include "FGuid.hpp"
#include "FMovieSceneEntityComponentField.hpp"
#include "FMovieSceneEvaluationField.hpp"
#include "FMovieSceneEvaluationTemplate.hpp"
#include "FMovieSceneSequenceCompilerMaskStruct.hpp"
#include "FMovieSceneSequenceHierarchy.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMovieSceneCompiledData : public UObject {
public:
    FMovieSceneEvaluationTemplate EvaluationTemplate; // 0x28
    FMovieSceneSequenceHierarchy Hierarchy; // 0x188
    FMovieSceneEntityComponentField EntityComponentField; // 0x2a0
    FMovieSceneEvaluationField TrackTemplateField; // 0x390
    TArray<FFrameTime> DeterminismFences; // 0x3c0
    FGuid CompiledSignature; // 0x3d0
    FGuid CompilerVersion; // 0x3e0
    FMovieSceneSequenceCompilerMaskStruct AccumulatedMask; // 0x3f0
    FMovieSceneSequenceCompilerMaskStruct AllocatedMask; // 0x3f1
    EMovieSceneSequenceFlags AccumulatedFlags; // 0x3f2
    char pad_3f3[0x5];
    static UMovieSceneCompiledData* StaticClass();
}; // Size: 0x3f8
#pragma pack(pop)
