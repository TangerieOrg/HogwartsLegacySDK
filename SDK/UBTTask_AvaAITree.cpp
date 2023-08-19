#include "AActor.hpp"
#include "EBTCustomActionType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTag.hpp"
#include "FVariantMapHandle.hpp"
#include "UAnimInstance.hpp"
#include "UBTTask_AvaAITree.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
void UBTTask_AvaAITree::LeafNodeSwitcher(FGameplayTag LeafNodeTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTTask_AvaAITree.LeafNodeSwitcher"));
    struct Params_LeafNodeSwitcher {
        FGameplayTag LeafNodeTag; // 0x0
    }; // Size: 0x8
    Params_LeafNodeSwitcher params{};
    params.LeafNodeTag = (FGameplayTag)LeafNodeTag;
    ProcessEvent(func, &params);
}
UBTTask_AvaAITree* UBTTask_AvaAITree::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.BTTask_AvaAITree");
    return (UBTTask_AvaAITree*)res;
}
void UBTTask_AvaAITree::LeafNodeSwitched() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTTask_AvaAITree.LeafNodeSwitched"));
    struct Params_LeafNodeSwitched {
    }; // Size: 0x0
    Params_LeafNodeSwitched params{};
    ProcessEvent(func, &params);
}
void UBTTask_AvaAITree::ExitTask(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTTask_AvaAITree.ExitTask"));
    struct Params_ExitTask {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ExitTask params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
FGameplayTag UBTTask_AvaAITree::GetLastLeafNode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTTask_AvaAITree.GetLastLeafNode"));
    struct Params_GetLastLeafNode {
        FGameplayTag ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLastLeafNode params{};
    ProcessEvent(func, &params);
    return (FGameplayTag)params.ReturnValue;
}
UAnimInstance* UBTTask_AvaAITree::GetAnimInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTTask_AvaAITree.GetAnimInstance"));
    struct Params_GetAnimInstance {
        UAnimInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnimInstance params{};
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
UBlackboardComponent* UBTTask_AvaAITree::GetBlackboardComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTTask_AvaAITree.GetBlackboardComponent"));
    struct Params_GetBlackboardComponent {
        UBlackboardComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBlackboardComponent params{};
    ProcessEvent(func, &params);
    return (UBlackboardComponent*)params.ReturnValue;
}
void UBTTask_AvaAITree::BroadcastAction(FBTCustomAction ActionName, EBTCustomActionType::Type ActionType, FVariantMapHandle VarMapHandle, bool bDestroyVarMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTTask_AvaAITree.BroadcastAction"));
    struct Params_BroadcastAction {
        FBTCustomAction ActionName; // 0x0
        EBTCustomActionType::Type ActionType; // 0xc
        char pad_d[0x3];
        FVariantMapHandle VarMapHandle; // 0x10
        bool bDestroyVarMap; // 0x14
    }; // Size: 0x15
    Params_BroadcastAction params{};
    params.ActionName = (FBTCustomAction)ActionName;
    params.ActionType = (EBTCustomActionType::Type)ActionType;
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.bDestroyVarMap = (bool)bDestroyVarMap;
    ProcessEvent(func, &params);
}
AActor* UBTTask_AvaAITree::GetActorOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTTask_AvaAITree.GetActorOwner"));
    struct Params_GetActorOwner {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActorOwner params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
void UBTTask_AvaAITree::Consume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTTask_AvaAITree.Consume"));
    struct Params_Consume {
    }; // Size: 0x0
    Params_Consume params{};
    ProcessEvent(func, &params);
}
