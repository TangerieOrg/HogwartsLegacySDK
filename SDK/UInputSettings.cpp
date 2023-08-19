#include "EMouseCaptureMode.hpp"
#include "EMouseLockMode.hpp"
#include "FCollidingGroupsDefinition.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FInputActionSpeechMapping.hpp"
#include "FInputAxisConfigEntry.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FInputGroupHeader.hpp"
#include "FKey.hpp"
#include "FSoftObjectPath.hpp"
#include "UFunction.hpp"
#include "UInputSettings.hpp"
#include "UObject.hpp"
UInputSettings* UInputSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InputSettings");
    return (UInputSettings*)res;
}
void UInputSettings::SaveKeyMappings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.SaveKeyMappings"));
    struct Params_SaveKeyMappings {
    }; // Size: 0x0
    Params_SaveKeyMappings params{};
    ProcessEvent(func, &params);
}
void UInputSettings::RemoveAxisMapping(FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.RemoveAxisMapping"));
    struct Params_RemoveAxisMapping {
        FInputAxisKeyMapping KeyMapping; // 0x0
        bool bForceRebuildKeymaps; // 0x38
    }; // Size: 0x39
    Params_RemoveAxisMapping params{};
    params.KeyMapping = (FInputAxisKeyMapping)KeyMapping;
    params.bForceRebuildKeymaps = (bool)bForceRebuildKeymaps;
    ProcessEvent(func, &params);
    KeyMapping = params.KeyMapping;
}
void UInputSettings::RemoveActionMapping(FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.RemoveActionMapping"));
    struct Params_RemoveActionMapping {
        FInputActionKeyMapping KeyMapping; // 0x0
        bool bForceRebuildKeymaps; // 0x38
    }; // Size: 0x39
    Params_RemoveActionMapping params{};
    params.KeyMapping = (FInputActionKeyMapping)KeyMapping;
    params.bForceRebuildKeymaps = (bool)bForceRebuildKeymaps;
    ProcessEvent(func, &params);
    KeyMapping = params.KeyMapping;
}
void UInputSettings::GetAxisNames(TArray<FName>& AxisNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.GetAxisNames"));
    struct Params_GetAxisNames {
        TArray<FName> AxisNames; // 0x0
    }; // Size: 0x10
    Params_GetAxisNames params{};
    params.AxisNames = (TArray<FName>)AxisNames;
    ProcessEvent(func, &params);
    AxisNames = params.AxisNames;
}
bool UInputSettings::IsActionCollidingWithAxis(FInputActionKeyMapping& ActionMapping, FInputAxisKeyMapping& AxisMapping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.IsActionCollidingWithAxis"));
    struct Params_IsActionCollidingWithAxis {
        FInputActionKeyMapping ActionMapping; // 0x0
        FInputAxisKeyMapping AxisMapping; // 0x38
        bool ReturnValue; // 0x70
    }; // Size: 0x71
    Params_IsActionCollidingWithAxis params{};
    params.ActionMapping = (FInputActionKeyMapping)ActionMapping;
    params.AxisMapping = (FInputAxisKeyMapping)AxisMapping;
    ProcessEvent(func, &params);
    ActionMapping = params.ActionMapping;
    AxisMapping = params.AxisMapping;
    return (bool)params.ReturnValue;
}
UInputSettings* UInputSettings::GetInputSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.GetInputSettings"));
    struct Params_GetInputSettings {
        UInputSettings* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInputSettings params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UInputSettings*)params.ReturnValue;
}
void UInputSettings::GetAxisMappingCollisions(FInputAxisKeyMapping& NewAxisMapping, TArray<FInputActionKeyMapping>& OutCollidingActionMappings, TArray<FInputAxisKeyMapping>& OutCollidingAxisMappings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.GetAxisMappingCollisions"));
    struct Params_GetAxisMappingCollisions {
        FInputAxisKeyMapping NewAxisMapping; // 0x0
        TArray<FInputActionKeyMapping> OutCollidingActionMappings; // 0x38
        TArray<FInputAxisKeyMapping> OutCollidingAxisMappings; // 0x48
    }; // Size: 0x58
    Params_GetAxisMappingCollisions params{};
    params.NewAxisMapping = (FInputAxisKeyMapping)NewAxisMapping;
    params.OutCollidingActionMappings = (TArray<FInputActionKeyMapping>)OutCollidingActionMappings;
    params.OutCollidingAxisMappings = (TArray<FInputAxisKeyMapping>)OutCollidingAxisMappings;
    ProcessEvent(func, &params);
    OutCollidingAxisMappings = params.OutCollidingAxisMappings;
    NewAxisMapping = params.NewAxisMapping;
    OutCollidingActionMappings = params.OutCollidingActionMappings;
}
void UInputSettings::GetAxisMappingByName(FName InAxisName, TArray<FInputAxisKeyMapping>& OutMappings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.GetAxisMappingByName"));
    struct Params_GetAxisMappingByName {
        FName InAxisName; // 0x0
        TArray<FInputAxisKeyMapping> OutMappings; // 0x8
    }; // Size: 0x18
    Params_GetAxisMappingByName params{};
    params.InAxisName = (FName)InAxisName;
    params.OutMappings = (TArray<FInputAxisKeyMapping>)OutMappings;
    ProcessEvent(func, &params);
    OutMappings = params.OutMappings;
}
void UInputSettings::GetActionNames(TArray<FName>& ActionNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.GetActionNames"));
    struct Params_GetActionNames {
        TArray<FName> ActionNames; // 0x0
    }; // Size: 0x10
    Params_GetActionNames params{};
    params.ActionNames = (TArray<FName>)ActionNames;
    ProcessEvent(func, &params);
    ActionNames = params.ActionNames;
}
void UInputSettings::GetActionMappingCollisions(FInputActionKeyMapping& NewActionMapping, TArray<FInputActionKeyMapping>& OutCollidingActionMappings, TArray<FInputAxisKeyMapping>& OutCollidingAxisMappings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.GetActionMappingCollisions"));
    struct Params_GetActionMappingCollisions {
        FInputActionKeyMapping NewActionMapping; // 0x0
        TArray<FInputActionKeyMapping> OutCollidingActionMappings; // 0x38
        TArray<FInputAxisKeyMapping> OutCollidingAxisMappings; // 0x48
    }; // Size: 0x58
    Params_GetActionMappingCollisions params{};
    params.NewActionMapping = (FInputActionKeyMapping)NewActionMapping;
    params.OutCollidingActionMappings = (TArray<FInputActionKeyMapping>)OutCollidingActionMappings;
    params.OutCollidingAxisMappings = (TArray<FInputAxisKeyMapping>)OutCollidingAxisMappings;
    ProcessEvent(func, &params);
    NewActionMapping = params.NewActionMapping;
    OutCollidingAxisMappings = params.OutCollidingAxisMappings;
    OutCollidingActionMappings = params.OutCollidingActionMappings;
}
void UInputSettings::GetActionMappingByName(FName InActionName, TArray<FInputActionKeyMapping>& OutMappings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.GetActionMappingByName"));
    struct Params_GetActionMappingByName {
        FName InActionName; // 0x0
        TArray<FInputActionKeyMapping> OutMappings; // 0x8
    }; // Size: 0x18
    Params_GetActionMappingByName params{};
    params.InActionName = (FName)InActionName;
    params.OutMappings = (TArray<FInputActionKeyMapping>)OutMappings;
    ProcessEvent(func, &params);
    OutMappings = params.OutMappings;
}
void UInputSettings::ForceRebuildKeymaps() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.ForceRebuildKeymaps"));
    struct Params_ForceRebuildKeymaps {
    }; // Size: 0x0
    Params_ForceRebuildKeymaps params{};
    ProcessEvent(func, &params);
}
void UInputSettings::AddAxisMapping(FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.AddAxisMapping"));
    struct Params_AddAxisMapping {
        FInputAxisKeyMapping KeyMapping; // 0x0
        bool bForceRebuildKeymaps; // 0x38
    }; // Size: 0x39
    Params_AddAxisMapping params{};
    params.KeyMapping = (FInputAxisKeyMapping)KeyMapping;
    params.bForceRebuildKeymaps = (bool)bForceRebuildKeymaps;
    ProcessEvent(func, &params);
    KeyMapping = params.KeyMapping;
}
void UInputSettings::AddActionMapping(FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.InputSettings.AddActionMapping"));
    struct Params_AddActionMapping {
        FInputActionKeyMapping KeyMapping; // 0x0
        bool bForceRebuildKeymaps; // 0x38
    }; // Size: 0x39
    Params_AddActionMapping params{};
    params.KeyMapping = (FInputActionKeyMapping)KeyMapping;
    params.bForceRebuildKeymaps = (bool)bForceRebuildKeymaps;
    ProcessEvent(func, &params);
    KeyMapping = params.KeyMapping;
}
