#pragma once
#include <cstdint>
#include "ESplineBoneAxis.hpp"
#include "FAlphaBlend.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FBoneReference.hpp"
#include "FTransform.hpp"
#pragma pack(push, 1)
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase {
    FBoneReference StartBone; // 0xc8
    FBoneReference EndBone; // 0xd8
    ESplineBoneAxis BoneAxis; // 0xe8
    bool bAutoCalculateSpline; // 0xe9
    char pad_ea[0x2];
    int32_t PointCount; // 0xec
    TArray<FTransform> ControlPoints; // 0xf0
    float Roll; // 0x100
    float TwistStart; // 0x104
    float TwistEnd; // 0x108
    char pad_10c[0x4];
    FAlphaBlend TwistBlend; // 0x110
    float Stretch; // 0x140
    float Offset; // 0x144
    char pad_148[0x128];
}; // Size: 0x270
#pragma pack(pop)
