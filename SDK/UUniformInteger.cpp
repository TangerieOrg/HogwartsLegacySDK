#include "UFieldNodeInt.hpp"
#include "UFunction.hpp"
#include "UUniformInteger.hpp"
UUniformInteger* UUniformInteger::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.UniformInteger");
    return (UUniformInteger*)res;
}
UUniformInteger* UUniformInteger::SetUniformInteger(int32_t Magnitude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.UniformInteger.SetUniformInteger"));
    struct Params_SetUniformInteger {
        int32_t Magnitude; // 0x0
        char pad_4[0x4];
        UUniformInteger* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetUniformInteger params{};
    params.Magnitude = (int32_t)Magnitude;
    ProcessEvent(func, &params);
    return (UUniformInteger*)params.ReturnValue;
}
