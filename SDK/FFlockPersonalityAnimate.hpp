#pragma once
#include <cstdint>
#include "FFlockPersonalityDistribution.hpp"
class UAnimationAsset;
#pragma pack(push, 1)
struct FFlockPersonalityAnimate {
    FFlockPersonalityDistribution Distribution; // 0x0
    TArray<UAnimationAsset*> Animations; // 0x8
    float MinPlaybackRate; // 0x18
    float MaxPlaybackRate; // 0x1c
    bool bLoop; // 0x20
    char pad_21[0x17];
}; // Size: 0x38
#pragma pack(pop)
