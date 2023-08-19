#include "FVector.hpp"
#include "UFieldNodeVector.hpp"
#include "UFunction.hpp"
#include "UUniformVector.hpp"
UUniformVector* UUniformVector::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.UniformVector");
    return (UUniformVector*)res;
}
UUniformVector* UUniformVector::SetUniformVector(float Magnitude, FVector Direction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.UniformVector.SetUniformVector"));
    struct Params_SetUniformVector {
        float Magnitude; // 0x0
        FVector Direction; // 0x4
        UUniformVector* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SetUniformVector params{};
    params.Magnitude = (float)Magnitude;
    params.Direction = (FVector)Direction;
    ProcessEvent(func, &params);
    return (UUniformVector*)params.ReturnValue;
}
