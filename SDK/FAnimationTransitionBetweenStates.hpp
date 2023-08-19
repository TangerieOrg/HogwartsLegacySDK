#pragma once
#include <cstdint>
#include "EAlphaBlendOption.hpp"
#include "ETransitionLogicType\Type.hpp"
#include "FAnimationStateBase.hpp"
class UCurveFloat;
class UBlendProfile;
#pragma pack(push, 1)
struct FAnimationTransitionBetweenStates : public FAnimationStateBase {
    int32_t PreviousState; // 0x8
    int32_t NextState; // 0xc
    float CrossfadeDuration; // 0x10
    int32_t StartNotify; // 0x14
    int32_t EndNotify; // 0x18
    int32_t InterruptNotify; // 0x1c
    EAlphaBlendOption BlendMode; // 0x20
    char pad_21[0x7];
    UCurveFloat* CustomCurve; // 0x28
    UBlendProfile* BlendProfile; // 0x30
    ETransitionLogicType::Type LogicType; // 0x38
    char pad_39[0x7];
}; // Size: 0x40
#pragma pack(pop)
