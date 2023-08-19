#include "UBoolBinding.hpp"
#include "UFunction.hpp"
#include "UPropertyBinding.hpp"
UBoolBinding* UBoolBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.BoolBinding");
    return (UBoolBinding*)res;
}
bool UBoolBinding::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.BoolBinding.GetValue"));
    struct Params_GetValue {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
