#pragma once
#include <cstdint>
#include "FAnimNode_AssetPlayerBase.hpp"
#include "FInputScaleBiasClamp.hpp"
class UAnimSequenceBase;
#pragma pack(push, 1)
struct FAnimNode_SequencePlayer : public FAnimNode_AssetPlayerBase {
    UAnimSequenceBase* Sequence; // 0x38
    float PlayRateBasis; // 0x40
    float PlayRate; // 0x44
    FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
    float StartPosition; // 0x78
    bool bLoopAnimation; // 0x7c
    char pad_7d[0x3];
}; // Size: 0x80
#pragma pack(pop)
