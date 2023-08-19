#include "ESlateVisibility.hpp"
#include "UFunction.hpp"
#include "UPropertyBinding.hpp"
#include "UVisibilityBinding.hpp"
UVisibilityBinding* UVisibilityBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.VisibilityBinding");
    return (UVisibilityBinding*)res;
}
ESlateVisibility UVisibilityBinding::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.VisibilityBinding.GetValue"));
    struct Params_GetValue {
        ESlateVisibility ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (ESlateVisibility)params.ReturnValue;
}
