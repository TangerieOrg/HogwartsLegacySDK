#include "UFunction.hpp"
#include "UImage.hpp"
#include "USpellBarSlotWidget.hpp"
#include "UTexture2D.hpp"
#include "UUserWidget.hpp"
USpellBarSlotWidget* USpellBarSlotWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpellBarSlotWidget");
    return (USpellBarSlotWidget*)res;
}
void USpellBarSlotWidget::UpdateRechargeMaterial(UTexture2D* newSpellIcon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellBarSlotWidget.UpdateRechargeMaterial"));
    struct Params_UpdateRechargeMaterial {
        UTexture2D* newSpellIcon; // 0x0
    }; // Size: 0x8
    Params_UpdateRechargeMaterial params{};
    params.newSpellIcon = (UTexture2D*)newSpellIcon;
    ProcessEvent(func, &params);
}
void USpellBarSlotWidget::SetSlotState(bool IsActive) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellBarSlotWidget.SetSlotState"));
    struct Params_SetSlotState {
        bool IsActive; // 0x0
    }; // Size: 0x1
    Params_SetSlotState params{};
    params.IsActive = (bool)IsActive;
    ProcessEvent(func, &params);
}
void USpellBarSlotWidget::SetImage(FString ImageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellBarSlotWidget.SetImage"));
    struct Params_SetImage {
        FString ImageName; // 0x0
    }; // Size: 0x10
    Params_SetImage params{};
    params.ImageName = (FString)ImageName;
    ProcessEvent(func, &params);
}
void USpellBarSlotWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SpellBarSlotWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
