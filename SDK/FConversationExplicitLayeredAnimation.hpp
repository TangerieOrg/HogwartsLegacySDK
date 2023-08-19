#pragma once
#include <cstdint>
#include "FAnimationRequestLayerReference.hpp"
#include "FGameplayTagContainer.hpp"
class UAnimMaskAsset;
class UFloatProvider;
#pragma pack(push, 1)
struct FConversationExplicitLayeredAnimation {
    FName Name; // 0x0
    FString DisplayName; // 0x8
    FString Description; // 0x18
    FGameplayTagContainer Tags; // 0x28
    FAnimationRequestLayerReference Layer; // 0x48
    UAnimMaskAsset* Mask; // 0x50
    float BlendWeight; // 0x58
    float BlendWeightVariability; // 0x5c
    UFloatProvider* ComputedBlendWeight; // 0x60
    float BlendTime; // 0x68
    float BlendTimeVariability; // 0x6c
    bool Blocking; // 0x70
    char pad_71[0x7];
}; // Size: 0x78
#pragma pack(pop)
