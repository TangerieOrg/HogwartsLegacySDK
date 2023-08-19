#pragma once
#include <cstdint>
#include "UAnimationClipProvider.hpp"
class UAnimSequenceBase;
#pragma pack(push, 1)
class UAnimationClip_Direct : public UAnimationClipProvider {
public:
    UAnimSequenceBase* AnimationClip; // 0x28
    static UAnimationClip_Direct* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
