#pragma once
#include <cstdint>
#include "EAnimationRequestLayerBlendType.hpp"
class UAnimMaskAsset;
#pragma pack(push, 1)
struct FAnimationRequestLayer {
    FName LayerName; // 0x0
    int32_t MaxLODLevel; // 0x8
    EAnimationRequestLayerBlendType BlendType; // 0xc
    bool bRecordLastSequence; // 0xd
    char pad_e[0x2];
    UAnimMaskAsset* LayerMask; // 0x10
}; // Size: 0x18
#pragma pack(pop)
