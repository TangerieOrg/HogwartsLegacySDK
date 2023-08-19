#include "FVector.hpp"
#include "UFieldNodeVector.hpp"
#include "UFunction.hpp"
#include "URadialVector.hpp"
URadialVector* URadialVector::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.RadialVector");
    return (URadialVector*)res;
}
URadialVector* URadialVector::SetRadialVector(float Magnitude, FVector Position) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.RadialVector.SetRadialVector"));
    struct Params_SetRadialVector {
        float Magnitude; // 0x0
        FVector Position; // 0x4
        URadialVector* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_SetRadialVector params{};
    params.Magnitude = (float)Magnitude;
    params.Position = (FVector)Position;
    ProcessEvent(func, &params);
    return (URadialVector*)params.ReturnValue;
}
