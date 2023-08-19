#pragma once
#include <cstdint>
#include "EStoryGraphBranchIcon.hpp"
#include "FStoryGraphConditionBranchReference.hpp"
#include "UStoryGraphConditionProvider.hpp"
class UBoolProvider;
class UStringProvider;
#pragma pack(push, 1)
class UStoryGraphCondition_Branch : public UStoryGraphConditionProvider {
public:
    FStoryGraphConditionBranchReference BranchID; // 0x28
    UBoolProvider* IsVisible; // 0x30
    UBoolProvider* IsSelectable; // 0x38
    UStringProvider* DisplayTextID; // 0x40
    EStoryGraphBranchIcon DisplayIcon; // 0x48
    int32_t NonSelectableHandling; // 0x4c
    static UStoryGraphCondition_Branch* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
