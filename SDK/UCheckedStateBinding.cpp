#include "ECheckBoxState.hpp"
#include "UCheckedStateBinding.hpp"
#include "UFunction.hpp"
#include "UPropertyBinding.hpp"
UCheckedStateBinding* UCheckedStateBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.CheckedStateBinding");
    return (UCheckedStateBinding*)res;
}
ECheckBoxState UCheckedStateBinding::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CheckedStateBinding.GetValue"));
    struct Params_GetValue {
        ECheckBoxState ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (ECheckBoxState)params.ReturnValue;
}
