#include "UFieldNodeVector.hpp"
#include "UFunction.hpp"
#include "URandomVector.hpp"
URandomVector* URandomVector::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.RandomVector");
    return (URandomVector*)res;
}
URandomVector* URandomVector::SetRandomVector(float Magnitude) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.RandomVector.SetRandomVector"));
    struct Params_SetRandomVector {
        float Magnitude; // 0x0
        char pad_4[0x4];
        URandomVector* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_SetRandomVector params{};
    params.Magnitude = (float)Magnitude;
    ProcessEvent(func, &params);
    return (URandomVector*)params.ReturnValue;
}
