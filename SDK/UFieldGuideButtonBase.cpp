#include "EPauseMenuPage.hpp"
#include "ESlateVisibility.hpp"
#include "UFieldGuideButtonBase.hpp"
#include "UFunction.hpp"
#include "UIconButtonWidget.hpp"
void UFieldGuideButtonBase::SetLockedState(bool IsLocked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideButtonBase.SetLockedState"));
    struct Params_SetLockedState {
        bool IsLocked; // 0x0
    }; // Size: 0x1
    Params_SetLockedState params{};
    params.IsLocked = (bool)IsLocked;
    ProcessEvent(func, &params);
}
UFieldGuideButtonBase* UFieldGuideButtonBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FieldGuideButtonBase");
    return (UFieldGuideButtonBase*)res;
}
void UFieldGuideButtonBase::LockButton(bool ShouldLock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideButtonBase.LockButton"));
    struct Params_LockButton {
        bool ShouldLock; // 0x0
    }; // Size: 0x1
    Params_LockButton params{};
    params.ShouldLock = (bool)ShouldLock;
    ProcessEvent(func, &params);
}
void UFieldGuideButtonBase::SetNewItemIndicatorVisibility() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideButtonBase.SetNewItemIndicatorVisibility"));
    struct Params_SetNewItemIndicatorVisibility {
    }; // Size: 0x0
    Params_SetNewItemIndicatorVisibility params{};
    ProcessEvent(func, &params);
}
void UFieldGuideButtonBase::OnSetItemIndicatorVisibility(ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideButtonBase.OnSetItemIndicatorVisibility"));
    struct Params_OnSetItemIndicatorVisibility {
        ESlateVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_OnSetItemIndicatorVisibility params{};
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
bool UFieldGuideButtonBase::GetLockedState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FieldGuideButtonBase.GetLockedState"));
    struct Params_GetLockedState {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLockedState params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
