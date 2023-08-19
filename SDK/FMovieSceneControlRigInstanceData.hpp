#pragma once
#include <cstdint>
#include "FInputBlendPose.hpp"
#include "FMovieSceneEvaluationOperand.hpp"
#include "FMovieSceneFloatChannel.hpp"
#include "FMovieSceneSequenceInstanceData.hpp"
#pragma pack(push, 1)
struct FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData {
    bool bAdditive; // 0x8
    bool bApplyBoneFilter; // 0x9
    char pad_a[0x6];
    FInputBlendPose BoneFilter; // 0x10
    FMovieSceneFloatChannel weight; // 0x20
    FMovieSceneEvaluationOperand Operand; // 0xc0
    char pad_d4[0x4];
}; // Size: 0xd8
#pragma pack(pop)
