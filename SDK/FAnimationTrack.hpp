#pragma once
#include <cstdint>
#include "FAnimTrackClipRange.hpp"
#include "FAnimTrackPlacementOptions.hpp"
#include "FAnimTrackPlaybackOptions.hpp"
#include "FBlendSampleData.hpp"
#include "FTransform.hpp"
class UAnimationAsset;
class UBlendSpaceInputProvider;
class UAnimationProvider;
#pragma pack(push, 1)
struct FAnimationTrack {
    char pad_0[0x8];
    UAnimationAsset* Animation; // 0x8
    float LocalAnimDuration; // 0x10
    float PlayRate; // 0x14
    float LocalAnimStart; // 0x18
    float TimingOffset; // 0x1c
    TArray<FBlendSampleData> CurrentBlendSampleData; // 0x20
    float AnimStart; // 0x30
    float AnimEnd; // 0x34
    float CurrentLocalTime; // 0x38
    float PreviousLocalTime; // 0x3c
    float CurrentTime; // 0x40
    float CurrentBlendWeight; // 0x44
    char pad_48[0x8];
    FTransform AnimationInPlacementSpace; // 0x50
    UAnimationProvider* AnimationProvider; // 0x80
    UBlendSpaceInputProvider* BlendSpaceInput; // 0x88
    bool ReselectOnLoopBoundaries; // 0x90
    char pad_91[0x3];
    FAnimTrackClipRange ClipSubRange; // 0x94
    char pad_c8[0x8];
    FAnimTrackPlacementOptions PlacementOptions; // 0xd0
    FAnimTrackPlaybackOptions PlaybackOptions; // 0x1c0
    char pad_1cc[0x4];
}; // Size: 0x1d0
#pragma pack(pop)
