#pragma once
#include <cstdint>
#include "ESceneRigAnimationPlaybackSpeed.hpp"
class UFloatProvider;
#pragma pack(push, 1)
struct FSceneRigAnimationPlaybackSpeed {
    ESceneRigAnimationPlaybackSpeed PlaybackType; // 0x0
    char pad_1[0x7];
    UFloatProvider* SpeedMultiplier; // 0x8
}; // Size: 0x10
#pragma pack(pop)
