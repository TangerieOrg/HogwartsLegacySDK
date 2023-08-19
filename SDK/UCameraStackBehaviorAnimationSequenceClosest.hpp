#pragma once
#include <cstdint>
#include "UCameraStackBehaviorAnimationBase.hpp"
class UAnimSequenceBase;
#pragma pack(push, 1)
class UCameraStackBehaviorAnimationSequenceClosest : public UCameraStackBehaviorAnimationBase {
public:
    TArray<UAnimSequenceBase*> AnimSequenceOptions; // 0x610
    static UCameraStackBehaviorAnimationSequenceClosest* StaticClass();
}; // Size: 0x620
#pragma pack(pop)
