#include "FLinearColor.hpp"
#include "FSlateColor.hpp"
#include "UColorBinding.hpp"
#include "UFunction.hpp"
#include "UPropertyBinding.hpp"
FLinearColor UColorBinding::GetLinearValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ColorBinding.GetLinearValue"));
    struct Params_GetLinearValue {
        FLinearColor ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLinearValue params{};
    ProcessEvent(func, &params);
    return (FLinearColor)params.ReturnValue;
}
UColorBinding* UColorBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.ColorBinding");
    return (UColorBinding*)res;
}
FSlateColor UColorBinding::GetSlateValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.ColorBinding.GetSlateValue"));
    struct Params_GetSlateValue {
        FSlateColor ReturnValue; // 0x0
    }; // Size: 0x28
    Params_GetSlateValue params{};
    ProcessEvent(func, &params);
    return (FSlateColor)params.ReturnValue;
}
