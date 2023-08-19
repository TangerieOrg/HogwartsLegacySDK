#include "EBTCustomActionType\Type.hpp"
#include "FBTCustomAction.hpp"
#include "FGameplayTag.hpp"
#include "FInputContextWithType.hpp"
#include "FVariantMapHandle.hpp"
#include "UBTAvaAITree_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
FGameplayTag UBTAvaAITree_Interface::GetLastLeafNode() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTAvaAITree_Interface.GetLastLeafNode"));
    struct Params_GetLastLeafNode {
        FGameplayTag ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLastLeafNode params{};
    ProcessEvent(func, &params);
    return (FGameplayTag)params.ReturnValue;
}
UBTAvaAITree_Interface* UBTAvaAITree_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.BTAvaAITree_Interface");
    return (UBTAvaAITree_Interface*)res;
}
void UBTAvaAITree_Interface::SetManagedContext(FInputContextWithType InContext, bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTAvaAITree_Interface.SetManagedContext"));
    struct Params_SetManagedContext {
        FInputContextWithType InContext; // 0x0
        bool bFlag; // 0xc
    }; // Size: 0xd
    Params_SetManagedContext params{};
    params.InContext = (FInputContextWithType)InContext;
    params.bFlag = (bool)bFlag;
    ProcessEvent(func, &params);
}
void UBTAvaAITree_Interface::Consume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTAvaAITree_Interface.Consume"));
    struct Params_Consume {
    }; // Size: 0x0
    Params_Consume params{};
    ProcessEvent(func, &params);
}
void UBTAvaAITree_Interface::LeafNodeSwitcher(FGameplayTag InLeafNodeTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTAvaAITree_Interface.LeafNodeSwitcher"));
    struct Params_LeafNodeSwitcher {
        FGameplayTag InLeafNodeTag; // 0x0
    }; // Size: 0x8
    Params_LeafNodeSwitcher params{};
    params.InLeafNodeTag = (FGameplayTag)InLeafNodeTag;
    ProcessEvent(func, &params);
}
bool UBTAvaAITree_Interface::GetManagedContext(FInputContextWithType InContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTAvaAITree_Interface.GetManagedContext"));
    struct Params_GetManagedContext {
        FInputContextWithType InContext; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_GetManagedContext params{};
    params.InContext = (FInputContextWithType)InContext;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBTAvaAITree_Interface::BroadcastAction(FBTCustomAction ActionName, EBTCustomActionType::Type ActionType, FVariantMapHandle VarMapHandle, bool bDestroyVarMap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTAvaAITree_Interface.BroadcastAction"));
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
