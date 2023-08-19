#pragma once
#include <cstdint>
#include "EInteractionProject.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblConditionalBranchTaskBase.hpp"
class UInteractionArchitectAsset;
#pragma pack(push, 1)
class UAblConditionalLookupBranchTask : public UAblConditionalBranchTaskBase {
public:
    UInteractionArchitectAsset* InteractionArchitectAsset; // 0xc0
    EInteractionProject Project; // 0xc8
    char pad_c9[0x7];
    FGameplayTagContainer Tags; // 0xd0
    bool bAllowBranchingIntoCurrentAbility; // 0xf0
    char pad_f1[0x7];
    static UAblConditionalLookupBranchTask* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
