#pragma once
#include <cstdint>
#include "FAnimNode_Base.hpp"
#include "FInputScaleBias.hpp"
#include "FPoseLink.hpp"
#pragma pack(push, 1)
struct FAnimNode_MultiWayBlend : public FAnimNode_Base {
    TArray<FPoseLink> Poses; // 0x10
    TArray<float> DesiredAlphas; // 0x20
    char pad_30[0x10];
    FInputScaleBias AlphaScaleBias; // 0x40
    bool bAdditiveNode; // 0x48
    bool bNormalizeAlpha; // 0x49
    char pad_4a[0x6];
}; // Size: 0x50
#pragma pack(pop)
