#include "UFunction.hpp"
#include "UPropertyBinding.hpp"
#include "UWidget.hpp"
#include "UWidgetBinding.hpp"
UWidgetBinding* UWidgetBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetBinding");
    return (UWidgetBinding*)res;
}
UWidget* UWidgetBinding::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.WidgetBinding.GetValue"));
    struct Params_GetValue {
        UWidget* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (UWidget*)params.ReturnValue;
}
