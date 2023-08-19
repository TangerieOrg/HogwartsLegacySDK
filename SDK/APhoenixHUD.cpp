#include "ACharacterStateHUD.hpp"
#include "APhoenixHUD.hpp"
#include "EStandardManagedPriority.hpp"
#include "FMailEntry.hpp"
#include "UClass.hpp"
#include "UCurveFloat.hpp"
#include "UFont.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "UPhoenixHUDWidget.hpp"
#include "UReticule.hpp"
#include "UTexture2D.hpp"
void APhoenixHUD::SetDefaultHUDVisible(bool bDefaultValue, bool AllowSelectiveTicking) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.SetDefaultHUDVisible"));
    struct Params_SetDefaultHUDVisible {
        bool bDefaultValue; // 0x0
        bool AllowSelectiveTicking; // 0x1
    }; // Size: 0x2
    Params_SetDefaultHUDVisible params{};
    params.bDefaultValue = (bool)bDefaultValue;
    params.AllowSelectiveTicking = (bool)AllowSelectiveTicking;
    ProcessEvent(func, &params);
}
void APhoenixHUD::ReadActiveOwlMail() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.ReadActiveOwlMail"));
    struct Params_ReadActiveOwlMail {
    }; // Size: 0x0
    Params_ReadActiveOwlMail params{};
    ProcessEvent(func, &params);
}
void APhoenixHUD::StartSettingHUDVisible(bool bNewValue, EStandardManagedPriority Priority, UObject* Provider, bool AllowAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.StartSettingHUDVisible"));
    struct Params_StartSettingHUDVisible {
        bool bNewValue; // 0x0
        EStandardManagedPriority Priority; // 0x1
        char pad_2[0x6];
        UObject* Provider; // 0x8
        bool AllowAnimation; // 0x10
    }; // Size: 0x11
    Params_StartSettingHUDVisible params{};
    params.bNewValue = (bool)bNewValue;
    params.Priority = (EStandardManagedPriority)Priority;
    params.Provider = (UObject*)Provider;
    params.AllowAnimation = (bool)AllowAnimation;
    ProcessEvent(func, &params);
}
APhoenixHUD* APhoenixHUD::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixHUD");
    return (APhoenixHUD*)res;
}
void APhoenixHUD::ToggleHUD(bool Show, bool AllowSelectiveTicking, bool AllowAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.ToggleHUD"));
    struct Params_ToggleHUD {
        bool Show; // 0x0
        bool AllowSelectiveTicking; // 0x1
        bool AllowAnimation; // 0x2
    }; // Size: 0x3
    Params_ToggleHUD params{};
    params.Show = (bool)Show;
    params.AllowSelectiveTicking = (bool)AllowSelectiveTicking;
    params.AllowAnimation = (bool)AllowAnimation;
    ProcessEvent(func, &params);
}
void APhoenixHUD::ShowHUDGroup(FString GroupName, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.ShowHUDGroup"));
    struct Params_ShowHUDGroup {
        FString GroupName; // 0x0
        UObject* Provider; // 0x10
    }; // Size: 0x18
    Params_ShowHUDGroup params{};
    params.GroupName = (FString)GroupName;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void APhoenixHUD::OnMailRecieved(FMailEntry Entry, int32_t DisplayPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.OnMailRecieved"));
    struct Params_OnMailRecieved {
        FMailEntry Entry; // 0x0
        int32_t DisplayPriority; // 0x58
    }; // Size: 0x5c
    Params_OnMailRecieved params{};
    params.Entry = (FMailEntry)Entry;
    params.DisplayPriority = (int32_t)DisplayPriority;
    ProcessEvent(func, &params);
}
void APhoenixHUD::HideHUDGroup(FString GroupName, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.HideHUDGroup"));
    struct Params_HideHUDGroup {
        FString GroupName; // 0x0
        UObject* Provider; // 0x10
    }; // Size: 0x18
    Params_HideHUDGroup params{};
    params.GroupName = (FString)GroupName;
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void APhoenixHUD::HandleHUDGroupRegistration(UObject* i_caller, FName& HUDGroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.HandleHUDGroupRegistration"));
    struct Params_HandleHUDGroupRegistration {
        UObject* i_caller; // 0x0
        FName HUDGroupName; // 0x8
    }; // Size: 0x10
    Params_HandleHUDGroupRegistration params{};
    params.i_caller = (UObject*)i_caller;
    params.HUDGroupName = (FName)HUDGroupName;
    ProcessEvent(func, &params);
    HUDGroupName = params.HUDGroupName;
}
void APhoenixHUD::HandleHUDGroupUnregistration(UObject* i_caller, FName& HUDGroupName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.HandleHUDGroupUnregistration"));
    struct Params_HandleHUDGroupUnregistration {
        UObject* i_caller; // 0x0
        FName HUDGroupName; // 0x8
    }; // Size: 0x10
    Params_HandleHUDGroupUnregistration params{};
    params.i_caller = (UObject*)i_caller;
    params.HUDGroupName = (FName)HUDGroupName;
    ProcessEvent(func, &params);
    HUDGroupName = params.HUDGroupName;
}
UReticule* APhoenixHUD::GetReticuleWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.GetReticuleWidget"));
    struct Params_GetReticuleWidget {
        UReticule* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetReticuleWidget params{};
    ProcessEvent(func, &params);
    return (UReticule*)params.ReturnValue;
}
void APhoenixHUD::FinishSettingHUDVisible(EStandardManagedPriority Priority, UObject* Provider, bool AllowAnimation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.FinishSettingHUDVisible"));
    struct Params_FinishSettingHUDVisible {
        EStandardManagedPriority Priority; // 0x0
        char pad_1[0x7];
        UObject* Provider; // 0x8
        bool AllowAnimation; // 0x10
    }; // Size: 0x11
    Params_FinishSettingHUDVisible params{};
    params.Priority = (EStandardManagedPriority)Priority;
    params.Provider = (UObject*)Provider;
    params.AllowAnimation = (bool)AllowAnimation;
    ProcessEvent(func, &params);
}
void APhoenixHUD::EnableAnimDebugInfo(bool bInFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixHUD.EnableAnimDebugInfo"));
    struct Params_EnableAnimDebugInfo {
        bool bInFlag; // 0x0
    }; // Size: 0x1
    Params_EnableAnimDebugInfo params{};
    params.bInFlag = (bool)bInFlag;
    ProcessEvent(func, &params);
}
