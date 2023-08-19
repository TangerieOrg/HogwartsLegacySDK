#include "AActor.hpp"
#include "EBTCustomActionType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTag.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTCustomComponent.hpp"
#include "UBTTaskNode.hpp"
#include "UBehaviorTree.hpp"
#include "UBehaviorTreeComponent.hpp"
#include "UFunction.hpp"
UBTCustomComponent* UBTCustomComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.BTCustomComponent");
    return (UBTCustomComponent*)res;
}
void UBTCustomComponent::OnCharacterLoadComplete(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTCustomComponent.OnCharacterLoadComplete"));
    struct Params_OnCharacterLoadComplete {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnCharacterLoadComplete params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
FVariantMapHandle UBTCustomComponent::BroadcastAction_Actor(AActor* OwnerActor, FBTCustomAction ActionName, EBTCustomActionType::Type ActionType, FVariantMapHandle VarMapHandle, bool bDestroyVarMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTCustomComponent.BroadcastAction_Actor"));
    struct Params_BroadcastAction_Actor {
        AActor* OwnerActor; // 0x0
        FBTCustomAction ActionName; // 0x8
        EBTCustomActionType::Type ActionType; // 0x14
        char pad_15[0x3];
        FVariantMapHandle VarMapHandle; // 0x18
        bool bDestroyVarMap; // 0x1c
        char pad_1d[0x3];
        FVariantMapHandle ReturnValue; // 0x20
    }; // Size: 0x24
    Params_BroadcastAction_Actor params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.ActionName = (FBTCustomAction)ActionName;
    params.ActionType = (EBTCustomActionType::Type)ActionType;
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.bDestroyVarMap = (bool)bDestroyVarMap;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FVariantMapHandle)params.ReturnValue;
}
void UBTCustomComponent::LeafNodeSwitcher(FGameplayTag InLeafNodeTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTCustomComponent.LeafNodeSwitcher"));
    struct Params_LeafNodeSwitcher {
        FGameplayTag InLeafNodeTag; // 0x0
    }; // Size: 0x8
    Params_LeafNodeSwitcher params{};
    params.InLeafNodeTag = (FGameplayTag)InLeafNodeTag;
    ProcessEvent(func, &params);
}
FVariantMapHandle UBTCustomComponent::BroadcastAction(FBTCustomAction ActionName, EBTCustomActionType::Type ActionType, FVariantMapHandle VarMapHandle, bool bDestroyVarMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTCustomComponent.BroadcastAction"));
    struct Params_BroadcastAction {
        FBTCustomAction ActionName; // 0x0
        EBTCustomActionType::Type ActionType; // 0xc
        char pad_d[0x3];
        FVariantMapHandle VarMapHandle; // 0x10
        bool bDestroyVarMap; // 0x14
        char pad_15[0x3];
        FVariantMapHandle ReturnValue; // 0x18
    }; // Size: 0x1c
    Params_BroadcastAction params{};
    params.ActionName = (FBTCustomAction)ActionName;
    params.ActionType = (EBTCustomActionType::Type)ActionType;
    params.VarMapHandle = (FVariantMapHandle)VarMapHandle;
    params.bDestroyVarMap = (bool)bDestroyVarMap;
    ProcessEvent(func, &params);
    return (FVariantMapHandle)params.ReturnValue;
}
FGameplayTag UBTCustomComponent::GetGameplayTagFromActiveLeafNode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTCustomComponent.GetGameplayTagFromActiveLeafNode"));
    struct Params_GetGameplayTagFromActiveLeafNode {
        FGameplayTag ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGameplayTagFromActiveLeafNode params{};
    ProcessEvent(func, &params);
    return (FGameplayTag)params.ReturnValue;
}
