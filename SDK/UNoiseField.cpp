#include "FTransform.hpp"
#include "UFieldNodeFloat.hpp"
#include "UFunction.hpp"
#include "UNoiseField.hpp"
UNoiseField* UNoiseField::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.NoiseField");
    return (UNoiseField*)res;
}
UNoiseField* UNoiseField::SetNoiseField(float MinRange, float MaxRange, FTransform Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.NoiseField.SetNoiseField"));
    struct Params_SetNoiseField {
        float MinRange; // 0x0
        float MaxRange; // 0x4
        char pad_8[0x8];
        FTransform Transform; // 0x10
        UNoiseField* ReturnValue; // 0x40
    }; // Size: 0x48
    Params_SetNoiseField params{};
    params.MinRange = (float)MinRange;
    params.MaxRange = (float)MaxRange;
    params.Transform = (FTransform)Transform;
    ProcessEvent(func, &params);
    return (UNoiseField*)params.ReturnValue;
}
