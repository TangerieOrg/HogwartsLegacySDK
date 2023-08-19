#pragma once
#include <cstdint>
#include "EModifyCurveApplyMode.hpp"
#include "FAnimNode_Base.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_ModifyCurve : public FAnimNode_Base {
    FPoseLink SourcePose; // 0x10
    TArray<float> CurveValues; // 0x20
    TArray<FName> CurveNames; // 0x30
    char pad_40[0x10];
    float Alpha; // 0x50
    EModifyCurveApplyMode ApplyMode; // 0x54
    char pad_55[0x3];
}; // Size: 0x58
#pragma pack(pop)
