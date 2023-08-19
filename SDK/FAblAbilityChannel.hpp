#pragma once
#include <cstdint>
#include "EAblAbilityTaskResult.hpp"
class UAblBoneBlendWeightAsset;
class UAblAbilityContext;
class UAblAbilityInstance;
#pragma pack(push, 1)
struct FAblAbilityChannel {
    char pad_0[0x14];
    int32_t Priority; // 0x14
    bool bIsAdditive; // 0x18
    char pad_19[0x7];
    UAblBoneBlendWeightAsset* BoneBlendWeightAsset; // 0x20
    UAblAbilityInstance* ActiveAbilityInstance; // 0x28
    TArray<UAblAbilityInstance*> PassiveAbilityInstances; // 0x30
    TArray<UAblAbilityContext*> PendingContext; // 0x40
    TArray<EAblAbilityTaskResult> PendingResult; // 0x50
    TArray<UAblAbilityContext*> AsyncContexts; // 0x60
    TArray<UAblAbilityInstance*> FadingAbilities; // 0x70
    char pad_80[0x8];
}; // Size: 0x88
#pragma pack(pop)
