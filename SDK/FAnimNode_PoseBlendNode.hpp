#pragma once
#include <cstdint>
#include "EAlphaBlendOption.hpp"
#include "FAnimNode_PoseHandler.hpp"
#include "FPoseLink.hpp"
class UCurveFloat;
#pragma pack(push, 1)
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler {
    FPoseLink SourcePose; // 0x80
    EAlphaBlendOption BlendOption; // 0x90
    char pad_91[0x7];
    UCurveFloat* CustomCurve; // 0x98
}; // Size: 0xa0
#pragma pack(pop)
