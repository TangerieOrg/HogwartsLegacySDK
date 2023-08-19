#pragma once
#include <cstdint>
#include "FRichCurve.hpp"
#include "FSceneRigAnimationTrackPlacementOptions.hpp"
class UAnimSequence;
#pragma pack(push, 1)
struct FSceneRigAnimationParams {
    FSceneRigAnimationTrackPlacementOptions PlacementOptions; // 0x0
    UAnimSequence* Animation; // 0x4a0
    FName LayerName; // 0x4a8
    float StartOffset; // 0x4b0
    float EndOffset; // 0x4b4
    float PlayRate; // 0x4b8
    uint8_t bReverse : 1; // 0x4bc
    uint8_t pad_bitfield_4bc_1 : 7;
    char pad_4bd[0x3];
    FRichCurve weight; // 0x4c0
}; // Size: 0x540
#pragma pack(pop)
