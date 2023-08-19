#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UBrainComponent.hpp"
class UBTNode;
class UBehaviorTree;
#pragma pack(push, 1)
class UBehaviorTreeComponent : public UBrainComponent {
public:
    char pad_120[0x20];
    TArray<UBTNode*> NodeInstances; // 0x140
    char pad_150[0x140];
    UBehaviorTree* DefaultBehaviorTreeAsset; // 0x290
    char pad_298[0x10];
    static UBehaviorTreeComponent* StaticClass();
    bool SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset);
    float GetTagCooldownEndTime(FGameplayTag CooldownTag);
    void AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration);
}; // Size: 0x2a8
#pragma pack(pop)
