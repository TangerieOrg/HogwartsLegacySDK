#include "FSlateBrush.hpp"
#include "UBrushBinding.hpp"
#include "UFunction.hpp"
#include "UPropertyBinding.hpp"
FSlateBrush UBrushBinding::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.BrushBinding.GetValue"));
    struct Params_GetValue {
        FSlateBrush ReturnValue; // 0x0
    }; // Size: 0x88
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (FSlateBrush)params.ReturnValue;
}
UBrushBinding* UBrushBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.BrushBinding");
    return (UBrushBinding*)res;
}
