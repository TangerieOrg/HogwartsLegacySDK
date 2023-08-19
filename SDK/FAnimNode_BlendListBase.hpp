#pragma once
#include <cstdint>
#include "EAlphaBlendOption.hpp"
#include "EBlendListTransitionType.hpp"
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
class UCurveFloat;
class UBlendProfile;
#pragma pack(push, 1)
struct FAnimNode_BlendListBase : public FAnimNode_Base {
    TArray<FPoseLink> BlendPose; // 0x10
    TArray<float> BlendTime; // 0x20
    EBlendListTransitionType TransitionType; // 0x30
    EAlphaBlendOption BlendType; // 0x31
    bool bResetChildOnActivation; // 0x32
    char pad_33[0x5];
    UCurveFloat* CustomBlendCurve; // 0x38
    UBlendProfile* BlendProfile; // 0x40
    char pad_48[0x50];
}; // Size: 0x98
#pragma pack(pop)
