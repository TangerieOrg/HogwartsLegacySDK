#pragma once
#include <cstdint>
#include "EAnimTrackRootMode.hpp"
#include "FTransform.hpp"
class UTransformProvider;
class UAnimationTransformProvider;
#pragma pack(push, 1)
struct FAnimTrackPlacementOptions {
    FTransform ComponentInPlacementSpace; // 0x0
    FTransform RootInPlacementSpace; // 0x30
    FTransform PlacementInWorldSpace; // 0x60
    bool PlacementIsValid; // 0x90
    bool RootMotionIsValid; // 0x91
    char pad_92[0xe];
    FTransform InitialPlacementTransform; // 0xa0
    bool ConstrainedToPlacement; // 0xd0
    bool PlacementIsMoving; // 0xd1
    bool HandledByRequest; // 0xd2
    EAnimTrackRootMode RootEvaluationMode; // 0xd3
    bool AccumulateRootMotion; // 0xd4
    char pad_d5[0x3];
    UTransformProvider* PlacementProvider; // 0xd8
    UAnimationTransformProvider* AnimationPlacementOffset; // 0xe0
    char pad_e8[0x8];
}; // Size: 0xf0
#pragma pack(pop)
