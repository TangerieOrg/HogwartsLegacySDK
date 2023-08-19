#pragma once
#include <cstdint>
#include "EEvaluatorDataSource\Type.hpp"
#include "EEvaluatorMode\Mode.hpp"
#include "EEvaluatorRootMotion\Mode.hpp"
#include "FAnimNode_Base.hpp"
#pragma pack(push, 1)
struct FAnimNode_TransitionPoseEvaluator : public FAnimNode_Base {
    char pad_10[0xd8];
    int32_t FramesToCachePose; // 0xe8
    char pad_ec[0x4];
    EEvaluatorDataSource::Type DataSource; // 0xf0
    EEvaluatorMode::Mode EvaluatorMode; // 0xf1
    EEvaluatorRootMotion::Mode RootMotionMode; // 0xf2
    char pad_f3[0x5];
}; // Size: 0xf8
#pragma pack(pop)
