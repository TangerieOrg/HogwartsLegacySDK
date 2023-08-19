#include "AActor.hpp"
#include "EBTCustomActionType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTag.hpp"
#include "FVariantMapHandle.hpp"
#include "UAnimInstance.hpp"
#include "UBTService_AvaAITree.hpp"
#include "UBTService_BlueprintBase.hpp"
#include "UBlackboardComponent.hpp"
#include "UFunction.hpp"
UBTService_AvaAITree* UBTService_AvaAITree::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.BTService_AvaAITree");
    return (UBTService_AvaAITree*)res;
}
void UBTService_AvaAITree::ServiceEnd(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree.ServiceEnd"));
    struct Params_ServiceEnd {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceEnd params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTService_AvaAITree::ServiceBegin(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree.ServiceBegin"));
    struct Params_ServiceBegin {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ServiceBegin params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
FGameplayTag UBTService_AvaAITree::GetLastLeafNode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree.GetLastLeafNode"));
    struct Params_GetLastLeafNode {
        FGameplayTag ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLastLeafNode params{};
    ProcessEvent(func, &params);
    return (FGameplayTag)params.ReturnValue;
}
void UBTService_AvaAITree::LeafNodeSwitcher(FGameplayTag InLeafNodeTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree.LeafNodeSwitcher"));
    struct Params_LeafNodeSwitcher {
        FGameplayTag InLeafNodeTag; // 0x0
    }; // Size: 0x8
    Params_LeafNodeSwitcher params{};
    params.InLeafNodeTag = (FGameplayTag)InLeafNodeTag;
    ProcessEvent(func, &params);
}
UBlackboardComponent* UBTService_AvaAITree::GetBlackboardComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree.GetBlackboardComponent"));
    struct Params_GetBlackboardComponent {
        UBlackboardComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetBlackboardComponent params{};
    ProcessEvent(func, &params);
    return (UBlackboardComponent*)params.ReturnValue;
}
UAnimInstance* UBTService_AvaAITree::GetAnimInstance() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree.GetAnimInstance"));
    struct Params_GetAnimInstance {
        UAnimInstance* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAnimInstance params{};
    ProcessEvent(func, &params);
    return (UAnimInstance*)params.ReturnValue;
}
AActor* UBTService_AvaAITree::GetActorOwner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree.GetActorOwner"));
    struct Params_GetActorOwner {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActorOwner params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
FGameplayTag UBTService_AvaAITree::GetActiveLeafNodeTag() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree.GetActiveLeafNodeTag"));
    struct Params_GetActiveLeafNodeTag {
        FGameplayTag ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveLeafNodeTag params{};
    ProcessEvent(func, &params);
    return (FGameplayTag)params.ReturnValue;
}
FName UBTService_AvaAITree::GetActiveLeafNodeName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree.GetActiveLeafNodeName"));
    struct Params_GetActiveLeafNodeName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveLeafNodeName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UBTService_AvaAITree::Consume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree.Consume"));
    struct Params_Consume {
    }; // Size: 0x0
    Params_Consume params{};
    ProcessEvent(func, &params);
}
void UBTService_AvaAITree::BroadcastAction(FBTCustomAction ActionName, EBTCustomActionType::Type ActionType, FVariantMapHandle VarMapHandle, bool bDestroyVarMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTService_AvaAITree.BroadcastAction"));
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
