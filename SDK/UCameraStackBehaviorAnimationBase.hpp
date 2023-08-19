#pragma once
#include <cstdint>
#include "ECameraStackAnimationFrame.hpp"
#include "ECameraStackAnimationLoopMode.hpp"
#include "FCameraOptionName.hpp"
#include "FCameraStackAnimData.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
class UCameraStackSecondaryTargetGetter;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UCameraStackBehaviorAnimationBase : public UCameraStackBehaviorBlend {
public:
    ECameraStackAnimationLoopMode LoopMode; // 0x1b8
    ECameraStackAnimationFrame AnimationFrame; // 0x1b9
    char pad_1ba[0x6];
    UCameraStackSecondaryTargetGetter* SecondaryTarget; // 0x1c0
    float PlayRate; // 0x1c8
    FVector AdditiveTranslationFactor; // 0x1cc
    FRotator AdditiveRotationFactor; // 0x1d8
    FCameraOptionName AdditiveFactorOptionName; // 0x1e4
    FCameraOptionName PlayRateFactorOptionName; // 0x1ec
    char pad_1f4[0xc];
    FCameraStackAnimData AnimData; // 0x200
    UAnimSequenceBase* AnimSequence; // 0x350
    char pad_358[0x2b8];
    static UCameraStackBehaviorAnimationBase* StaticClass();
}; // Size: 0x610
#pragma pack(pop)
