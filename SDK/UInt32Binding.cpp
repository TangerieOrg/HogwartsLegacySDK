#include "UFunction.hpp"
#include "UInt32Binding.hpp"
#include "UPropertyBinding.hpp"
UInt32Binding* UInt32Binding::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.Int32Binding");
    return (UInt32Binding*)res;
}
int32_t UInt32Binding::GetValue() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Int32Binding.GetValue"));
    struct Params_GetValue {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetValue params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
