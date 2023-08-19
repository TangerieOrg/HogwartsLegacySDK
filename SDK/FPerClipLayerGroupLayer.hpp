#pragma once
#include <cstdint>
#include "FAnimationRequestLayerReference.hpp"
class UAnimationAsset;
#pragma pack(push, 1)
struct FPerClipLayerGroupLayer {
    UAnimationAsset* LayerAnimation; // 0x0
    FName LayerName; // 0x8
    FAnimationRequestLayerReference LayerReference; // 0x10
    bool ScaleToFit; // 0x18
    char pad_19[0x7];
}; // Size: 0x20
#pragma pack(pop)
