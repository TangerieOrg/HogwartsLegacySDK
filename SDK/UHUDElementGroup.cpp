#include "ESlateVisibility.hpp"
#include "UFunction.hpp"
#include "UHUDElementGroup.hpp"
#include "UIHUDGroups.hpp"
#include "UObject.hpp"
#include "UUserWidget.hpp"
UHUDElementGroup* UHUDElementGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HUDElementGroup");
    return (UHUDElementGroup*)res;
}
bool UHUDElementGroup::GetShouldBeHidden() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDElementGroup.GetShouldBeHidden"));
    struct Params_GetShouldBeHidden {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetShouldBeHidden params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UHUDElementGroup::ShowHUDElement(UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDElementGroup.ShowHUDElement"));
    struct Params_ShowHUDElement {
        UObject* Provider; // 0x0
    }; // Size: 0x8
    Params_ShowHUDElement params{};
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
void UHUDElementGroup::HideHUDElement(UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HUDElementGroup.HideHUDElement"));
    struct Params_HideHUDElement {
        UObject* Provider; // 0x0
    }; // Size: 0x8
    Params_HideHUDElement params{};
    params.Provider = (UObject*)Provider;
    ProcessEvent(func, &params);
}
