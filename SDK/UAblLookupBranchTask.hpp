#pragma once
#include <cstdint>
#include "EInteractionProject.hpp"
#include "FAlphaBlend.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAbilityTask.hpp"
class UInteractionArchitectAsset;
class UAblBranchCondition;
#pragma pack(push, 1)
class UAblLookupBranchTask : public UAblAbilityTask {
public:
    UInteractionArchitectAsset* InteractionArchitectAsset; // 0x70
    EInteractionProject Project; // 0x78
    char pad_79[0x7];
    FGameplayTagContainer Tags; // 0x80
    FGameplayTagContainer TargetTags; // 0xa0
    TArray<UAblBranchCondition*> Conditions; // 0xc0
    bool bMustPassAllConditions; // 0xd0
    bool bCopyTargetsOnBranch; // 0xd1
    bool bOverrideTransitionBlend; // 0xd2
    char pad_d3[0x5];
    FAlphaBlend TransitionBlend; // 0xd8
    bool bClampBlendOutTime; // 0x108
    char pad_109[0x7];
    static UAblLookupBranchTask* StaticClass();
}; // Size: 0x110
#pragma pack(pop)
