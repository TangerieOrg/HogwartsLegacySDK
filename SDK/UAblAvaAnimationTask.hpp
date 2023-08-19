#pragma once
#include <cstdint>
#include "FAblAvaAnimationPlaybackOptions.hpp"
#include "FAbleAvaAnimationClipRange.hpp"
#include "FAbleAvaAnimationPlacementOptions.hpp"
#include "FAnimationRequestLayerReference.hpp"
#include "UAblAbilityTask.hpp"
class UAnimationProvider;
class UBoolProvider;
class UFloatProvider;
#pragma pack(push, 1)
class UAblAvaAnimationTask : public UAblAbilityTask {
public:
    char pad_70[0x8];
    UAnimationProvider* AnimationProvider; // 0x78
    FAnimationRequestLayerReference Layer; // 0x80
    FAbleAvaAnimationPlacementOptions PlacementOptions; // 0x88
    FAbleAvaAnimationClipRange ClipRange; // 0xb8
    FAblAvaAnimationPlaybackOptions PlaybackOptions; // 0xc8
    UBoolProvider* ReselectOnLoopBoundaries; // 0xe0
    UFloatProvider* weight; // 0xe8
    UFloatProvider* BlendInTime; // 0xf0
    UFloatProvider* BlendOutTime; // 0xf8
    UBoolProvider* LoopIndefinitely; // 0x100
    static UAblAvaAnimationTask* StaticClass();
}; // Size: 0x108
#pragma pack(pop)
