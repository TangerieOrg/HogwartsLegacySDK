#include "ESlateVisibility.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UUserWidget_LockOnReticle.hpp"
UUserWidget_LockOnReticle* UUserWidget_LockOnReticle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UserWidget_LockOnReticle");
    return (UUserWidget_LockOnReticle*)res;
}
void UUserWidget_LockOnReticle::SetLockOnVisibility(ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UserWidget_LockOnReticle.SetLockOnVisibility"));
    struct Params_SetLockOnVisibility {
        ESlateVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_SetLockOnVisibility params{};
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
void UUserWidget_LockOnReticle::SetAimModeCircleScale(float InScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UserWidget_LockOnReticle.SetAimModeCircleScale"));
    struct Params_SetAimModeCircleScale {
        float InScale; // 0x0
    }; // Size: 0x4
    Params_SetAimModeCircleScale params{};
    params.InScale = (float)InScale;
    ProcessEvent(func, &params);
}
void UUserWidget_LockOnReticle::SetAimModeVisibility(ESlateVisibility InVisibility) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UserWidget_LockOnReticle.SetAimModeVisibility"));
    struct Params_SetAimModeVisibility {
        ESlateVisibility InVisibility; // 0x0
    }; // Size: 0x1
    Params_SetAimModeVisibility params{};
    params.InVisibility = (ESlateVisibility)InVisibility;
    ProcessEvent(func, &params);
}
