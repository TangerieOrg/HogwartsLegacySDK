#pragma once
#include <cstdint>
#include "FAnimCurveParam.hpp"
#include "FAnimNode_SkeletalControlBase.hpp"
#include "FAxis.hpp"
#include "FReferenceBoneFrame.hpp"
#pragma pack(push, 1)
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase {
    FReferenceBoneFrame BaseFrame; // 0xc8
    FReferenceBoneFrame TwistFrame; // 0xe8
    FAxis TwistPlaneNormalAxis; // 0x108
    float RangeMax; // 0x118
    float RemappedMin; // 0x11c
    float RemappedMax; // 0x120
    FAnimCurveParam Curve; // 0x124
    char pad_130[0x8];
}; // Size: 0x138
#pragma pack(pop)
