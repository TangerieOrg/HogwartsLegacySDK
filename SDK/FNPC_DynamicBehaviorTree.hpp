#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
class UBehaviorTree;
#pragma pack(push, 1)
struct FNPC_DynamicBehaviorTree {
    FGameplayTag Tag; // 0x0
    UBehaviorTree* BehaviorTree; // 0x8
}; // Size: 0x10
#pragma pack(pop)
