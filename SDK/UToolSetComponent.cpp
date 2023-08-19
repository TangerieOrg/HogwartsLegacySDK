#include "ATool.hpp"
#include "EStandardManagedPriority.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
#include "UToolRecord.hpp"
#include "UToolSetComponent.hpp"
UToolSetComponent* UToolSetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Toolset.ToolSetComponent");
    return (UToolSetComponent*)res;
}
void UToolSetComponent::StartSettingWhitelistedTools(TArray<UToolRecord*>& InTools, EStandardManagedPriority InPriority, UObject* InProvider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.StartSettingWhitelistedTools"));
    struct Params_StartSettingWhitelistedTools {
        TArray<UToolRecord*> InTools; // 0x0
        EStandardManagedPriority InPriority; // 0x10
        char pad_11[0x7];
        UObject* InProvider; // 0x18
    }; // Size: 0x20
    Params_StartSettingWhitelistedTools params{};
    params.InTools = (TArray<UToolRecord*>)InTools;
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.InProvider = (UObject*)InProvider;
    ProcessEvent(func, &params);
    InTools = params.InTools;
}
void UToolSetComponent::OnActiveToolChanged__DelegateSignature(ATool* Activated, ATool* Deactivated) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Toolset.ToolSetComponent.OnActiveToolChanged__DelegateSignature"));
    struct Params_OnActiveToolChanged__DelegateSignature {
        ATool* Activated; // 0x0
        ATool* Deactivated; // 0x8
    }; // Size: 0x10
    Params_OnActiveToolChanged__DelegateSignature params{};
    params.Activated = (ATool*)Activated;
    params.Deactivated = (ATool*)Deactivated;
    ProcessEvent(func, &params);
}
void UToolSetComponent::StartSettingBlacklistedTools(TArray<UToolRecord*>& InTools, EStandardManagedPriority InPriority, UObject* InProvider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.StartSettingBlacklistedTools"));
    struct Params_StartSettingBlacklistedTools {
        TArray<UToolRecord*> InTools; // 0x0
        EStandardManagedPriority InPriority; // 0x10
        char pad_11[0x7];
        UObject* InProvider; // 0x18
    }; // Size: 0x20
    Params_StartSettingBlacklistedTools params{};
    params.InTools = (TArray<UToolRecord*>)InTools;
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.InProvider = (UObject*)InProvider;
    ProcessEvent(func, &params);
    InTools = params.InTools;
}
void UToolSetComponent::SetAttachmentParent(USceneComponent* InOwnerMesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.SetAttachmentParent"));
    struct Params_SetAttachmentParent {
        USceneComponent* InOwnerMesh; // 0x0
    }; // Size: 0x8
    Params_SetAttachmentParent params{};
    params.InOwnerMesh = (USceneComponent*)InOwnerMesh;
    ProcessEvent(func, &params);
}
int32_t UToolSetComponent::GetToolRecordIndex(UToolRecord* ToolRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.GetToolRecordIndex"));
    struct Params_GetToolRecordIndex {
        UToolRecord* ToolRecord; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetToolRecordIndex params{};
    params.ToolRecord = (UToolRecord*)ToolRecord;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UToolSetComponent::GetActiveToolRecordIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.GetActiveToolRecordIndex"));
    struct Params_GetActiveToolRecordIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetActiveToolRecordIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UToolSetComponent::IsToolUsageAllowed(UToolRecord* ToolRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.IsToolUsageAllowed"));
    struct Params_IsToolUsageAllowed {
        UToolRecord* ToolRecord; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsToolUsageAllowed params{};
    params.ToolRecord = (UToolRecord*)ToolRecord;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<UToolRecord*> UToolSetComponent::GetToolRecords() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.GetToolRecords"));
    struct Params_GetToolRecords {
        TArray<UToolRecord*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetToolRecords params{};
    ProcessEvent(func, &params);
    return (TArray<UToolRecord*>)params.ReturnValue;
}
UToolRecord* UToolSetComponent::GetToolRecordByName(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.GetToolRecordByName"));
    struct Params_GetToolRecordByName {
        FName Name; // 0x0
        UToolRecord* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetToolRecordByName params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
    return (UToolRecord*)params.ReturnValue;
}
USceneComponent* UToolSetComponent::GetAttachmentParent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.GetAttachmentParent"));
    struct Params_GetAttachmentParent {
        USceneComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAttachmentParent params{};
    ProcessEvent(func, &params);
    return (USceneComponent*)params.ReturnValue;
}
ATool* UToolSetComponent::GetActiveTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.GetActiveTool"));
    struct Params_GetActiveTool {
        ATool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveTool params{};
    ProcessEvent(func, &params);
    return (ATool*)params.ReturnValue;
}
void UToolSetComponent::FinishSettingWhitelistedTools(EStandardManagedPriority InPriority, UObject* InProvider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.FinishSettingWhitelistedTools"));
    struct Params_FinishSettingWhitelistedTools {
        EStandardManagedPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* InProvider; // 0x8
    }; // Size: 0x10
    Params_FinishSettingWhitelistedTools params{};
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.InProvider = (UObject*)InProvider;
    ProcessEvent(func, &params);
}
void UToolSetComponent::FinishSettingBlacklistedTools(EStandardManagedPriority InPriority, UObject* InProvider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.FinishSettingBlacklistedTools"));
    struct Params_FinishSettingBlacklistedTools {
        EStandardManagedPriority InPriority; // 0x0
        char pad_1[0x7];
        UObject* InProvider; // 0x8
    }; // Size: 0x10
    Params_FinishSettingBlacklistedTools params{};
    params.InPriority = (EStandardManagedPriority)InPriority;
    params.InProvider = (UObject*)InProvider;
    ProcessEvent(func, &params);
}
ATool* UToolSetComponent::ClearActiveTool() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.ClearActiveTool"));
    struct Params_ClearActiveTool {
        ATool* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ClearActiveTool params{};
    ProcessEvent(func, &params);
    return (ATool*)params.ReturnValue;
}
void UToolSetComponent::AsyncLoadToolByName(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.AsyncLoadToolByName"));
    struct Params_AsyncLoadToolByName {
        FName Name; // 0x0
    }; // Size: 0x8
    Params_AsyncLoadToolByName params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
}
ATool* UToolSetComponent::ActivateToolByName(FName Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.ActivateToolByName"));
    struct Params_ActivateToolByName {
        FName Name; // 0x0
        ATool* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ActivateToolByName params{};
    params.Name = (FName)Name;
    ProcessEvent(func, &params);
    return (ATool*)params.ReturnValue;
}
ATool* UToolSetComponent::ActivateTool(UToolRecord* ToolRecord) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.ActivateTool"));
    struct Params_ActivateTool {
        UToolRecord* ToolRecord; // 0x0
        ATool* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ActivateTool params{};
    params.ToolRecord = (UToolRecord*)ToolRecord;
    ProcessEvent(func, &params);
    return (ATool*)params.ReturnValue;
}
ATool* UToolSetComponent::ActivateExistingTool(ATool* Tool) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.ToolSetComponent.ActivateExistingTool"));
    struct Params_ActivateExistingTool {
        ATool* Tool; // 0x0
        ATool* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_ActivateExistingTool params{};
    params.Tool = (ATool*)Tool;
    ProcessEvent(func, &params);
    return (ATool*)params.ReturnValue;
}
