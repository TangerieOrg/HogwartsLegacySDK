#include "UFieldNodeFloat.hpp"
#include "UFunction.hpp"
#include "UUniformScalar.hpp"
UUniformScalar* UUniformScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.UniformScalar");
    return (UUniformScalar*)res;
}
UUniformScalar* UUniformScalar::SetUniformScalar(float Magnitude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.UniformScalar.SetUniformScalar"));
    struct Params_SetUniformScalar {
        float Magnitude; // 0x0
        char pad_4[0x4];
        UUniformScalar* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetUniformScalar params{};
    params.Magnitude = (float)Magnitude;
    ProcessEvent(func, &params);
    return (UUniformScalar*)params.ReturnValue;
}
