#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "FTableRowBase.hpp"
class UBehaviorTree;
#pragma pack(push, 1)
struct FBehaviorTreeDataTable : public FTableRowBase {
    FGameplayTag GameplayTag; // 0x8
    UBehaviorTree* BehaviorTreePtr; // 0x10
}; // Size: 0x18
#pragma pack(pop)
