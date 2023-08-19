#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UCameraStackBehaviorLookAtBase.hpp"
class UCameraStackSecondaryTargetGetter;
class UCameraStackBehaviorAnimationBase;
#pragma pack(push, 1)
class UCameraStackBehaviorRetargetAnimation : public UCameraStackBehaviorLookAtBase {
public:
    UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x290
    FVector2D FramingScreenAreaExtent; // 0x298
    bool bDrawDebug; // 0x2a0
    char pad_2a1[0x7];
    UCameraStackBehaviorAnimationBase* AnimBehavior; // 0x2a8
    char pad_2b0[0x50];
    static UCameraStackBehaviorRetargetAnimation* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
