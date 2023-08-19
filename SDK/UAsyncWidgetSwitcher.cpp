#include "UAsyncLoadWrapper.hpp"
#include "UAsyncWidgetSwitcher.hpp"
#include "UFunction.hpp"
#include "UUserWidget.hpp"
#include "UWidgetSwitcher.hpp"
UAsyncWidgetSwitcher* UAsyncWidgetSwitcher::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AsyncWidgetSwitcher");
    return (UAsyncWidgetSwitcher*)res;
}
void UAsyncWidgetSwitcher::SetParent(UUserWidget* NewParent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AsyncWidgetSwitcher.SetParent"));
    struct Params_SetParent {
        UUserWidget* NewParent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.NewParent = (UUserWidget*)NewParent;
    ProcessEvent(func, &params);
}
void UAsyncWidgetSwitcher::OnActiveItemLoaded(UAsyncLoadWrapper* Item) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AsyncWidgetSwitcher.OnActiveItemLoaded"));
    struct Params_OnActiveItemLoaded {
        UAsyncLoadWrapper* Item; // 0x0
    }; // Size: 0x8
    Params_OnActiveItemLoaded params{};
    params.Item = (UAsyncLoadWrapper*)Item;
    ProcessEvent(func, &params);
}
