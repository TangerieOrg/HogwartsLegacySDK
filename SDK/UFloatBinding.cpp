#include "UFloatBinding.hpp"
#include "UFunction.hpp"
#include "UPropertyBinding.hpp"
float UFloatBinding::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.FloatBinding.GetValue"));
    struct Params_GetValue {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UFloatBinding* UFloatBinding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.FloatBinding");
    return (UFloatBinding*)res;
}
