#include "ESpellDirection.hpp"
#include "UCastingSlotWidget.hpp"
#include "UFunction.hpp"
#include "UUserWidget.hpp"
void UCastingSlotWidget::OnSynchronizeProperties() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CastingSlotWidget.OnSynchronizeProperties"));
    struct Params_OnSynchronizeProperties {
    }; // Size: 0x0
    Params_OnSynchronizeProperties params{};
    ProcessEvent(func, &params);
}
UCastingSlotWidget* UCastingSlotWidget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CastingSlotWidget");
    return (UCastingSlotWidget*)res;
}
void UCastingSlotWidget::SetImage(FString ImageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CastingSlotWidget.SetImage"));
    struct Params_SetImage {
        FString ImageName; // 0x0
    }; // Size: 0x10
    Params_SetImage params{};
    params.ImageName = (FString)ImageName;
    ProcessEvent(func, &params);
}
void UCastingSlotWidget::OnSetSpellIcon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CastingSlotWidget.OnSetSpellIcon"));
    struct Params_OnSetSpellIcon {
    }; // Size: 0x0
    Params_OnSetSpellIcon params{};
    ProcessEvent(func, &params);
}
