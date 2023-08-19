#pragma once
#include <cstdint>
#include "ESceneRigAnimationPlaybackRange.hpp"
class UFloatProvider;
#pragma pack(push, 1)
struct FSceneRigAnimationClipRange {
    ESceneRigAnimationPlaybackRange RangeType; // 0x0
    char pad_1[0x7];
    UFloatProvider* TimingOffset; // 0x8
    UFloatProvider* StartOffset; // 0x10
    UFloatProvider* EndOffset; // 0x18
    UFloatProvider* Duration; // 0x20
}; // Size: 0x28
#pragma pack(pop)
