#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UBTTaskNode.hpp"
class UBehaviorTree;
#pragma pack(push, 1)
class UBTTask_RunBehaviorDynamic : public UBTTaskNode {
public:
    FGameplayTag InjectionTag; // 0x70
    UBehaviorTree* DefaultBehaviorAsset; // 0x78
    UBehaviorTree* BehaviorAsset; // 0x80
    static UBTTask_RunBehaviorDynamic* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
