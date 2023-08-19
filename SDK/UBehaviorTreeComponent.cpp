#include "FGameplayTag.hpp"
#include "UBTNode.hpp"
#include "UBehaviorTree.hpp"
#include "UBehaviorTreeComponent.hpp"
#include "UBrainComponent.hpp"
#include "UFunction.hpp"
UBehaviorTreeComponent* UBehaviorTreeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BehaviorTreeComponent");
    return (UBehaviorTreeComponent*)res;
}
bool UBehaviorTreeComponent::SetDynamicSubtree(FGameplayTag InjectTag, UBehaviorTree* BehaviorAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BehaviorTreeComponent.SetDynamicSubtree"));
    struct Params_SetDynamicSubtree {
        FGameplayTag InjectTag; // 0x0
        UBehaviorTree* BehaviorAsset; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetDynamicSubtree params{};
    params.InjectTag = (FGameplayTag)InjectTag;
    params.BehaviorAsset = (UBehaviorTree*)BehaviorAsset;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UBehaviorTreeComponent::GetTagCooldownEndTime(FGameplayTag CooldownTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BehaviorTreeComponent.GetTagCooldownEndTime"));
    struct Params_GetTagCooldownEndTime {
        FGameplayTag CooldownTag; // 0x0
        float ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetTagCooldownEndTime params{};
    params.CooldownTag = (FGameplayTag)CooldownTag;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UBehaviorTreeComponent::AddCooldownTagDuration(FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BehaviorTreeComponent.AddCooldownTagDuration"));
    struct Params_AddCooldownTagDuration {
        FGameplayTag CooldownTag; // 0x0
        float CooldownDuration; // 0x8
        bool bAddToExistingDuration; // 0xc
    }; // Size: 0xd
    Params_AddCooldownTagDuration params{};
    params.CooldownTag = (FGameplayTag)CooldownTag;
    params.CooldownDuration = (float)CooldownDuration;
    params.bAddToExistingDuration = (bool)bAddToExistingDuration;
    ProcessEvent(func, &params);
}
