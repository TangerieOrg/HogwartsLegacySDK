#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
class UAnimationClipProvider;
#pragma pack(push, 1)
class UAnimationTransformProvider : public UTransformProvider {
public:
    UAnimationClipProvider* AnimationProvider; // 0x28
    bool bUseAnimationTime; // 0x30
    char pad_31[0x3];
    float PlaybackFraction; // 0x34
    static UAnimationTransformProvider* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
