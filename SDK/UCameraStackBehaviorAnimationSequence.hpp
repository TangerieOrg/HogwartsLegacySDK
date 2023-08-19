#pragma once
#include <cstdint>
#include "UCameraStackBehaviorAnimationBase.hpp"
class UAnimSequenceBase;
#pragma pack(push, 1)
class UCameraStackBehaviorAnimationSequence : public UCameraStackBehaviorAnimationBase {
public:
    UAnimSequenceBase* SequenceToPlay; // 0x610
    char pad_618[0x8];
    static UCameraStackBehaviorAnimationSequence* StaticClass();
}; // Size: 0x620
#pragma pack(pop)
