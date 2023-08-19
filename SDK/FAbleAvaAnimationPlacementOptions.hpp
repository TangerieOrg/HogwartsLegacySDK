#pragma once
#include <cstdint>
class UTransformProvider;
class UBoolProvider;
class UAnimationTransformProvider;
#pragma pack(push, 1)
struct FAbleAvaAnimationPlacementOptions {
    UTransformProvider* InitialPlacementTransform; // 0x0
    UBoolProvider* ConstrainedToPlacement; // 0x8
    UBoolProvider* PlacementIsMoving; // 0x10
    UBoolProvider* HandledByRequest; // 0x18
    UTransformProvider* PlacementProvider; // 0x20
    UAnimationTransformProvider* AnimationPlacementOffset; // 0x28
}; // Size: 0x30
#pragma pack(pop)
