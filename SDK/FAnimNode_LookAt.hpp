#pragma once
#include <cstdint>
#include "EInterpolationBlend\Type.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FAxis.hpp"
#include "FBoneReference.hpp"
#include "FBoneSocketTarget.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase {
    FBoneReference BoneToModify; // 0xc8
    char pad_d8[0x8];
    FBoneSocketTarget LookAtTarget; // 0xe0
    FVector LookAtLocation; // 0x140
    FAxis LookAt_Axis; // 0x14c
    bool bUseLookUpAxis; // 0x15c
    EInterpolationBlend::Type InterpolationType; // 0x15d
    char pad_15e[0x2];
    FAxis LookUp_Axis; // 0x160
    float LookAtClamp; // 0x170
    float InterpolationTime; // 0x174
    float InterpolationTriggerThreashold; // 0x178
    char pad_17c[0x34];
}; // Size: 0x1b0
#pragma pack(pop)
