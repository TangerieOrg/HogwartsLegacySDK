#include "EFieldFalloffType.hpp"
#include "FTransform.hpp"
#include "UBoxFalloff.hpp"
#include "UFieldNodeFloat.hpp"
#include "UFunction.hpp"
UBoxFalloff* UBoxFalloff::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.BoxFalloff");
    return (UBoxFalloff*)res;
}
UBoxFalloff* UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, FTransform Transform, EFieldFalloffType Falloff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.BoxFalloff.SetBoxFalloff"));
    struct Params_SetBoxFalloff {
        float Magnitude; // 0x0
        float MinRange; // 0x4
        float MaxRange; // 0x8
        float Default; // 0xc
        FTransform Transform; // 0x10
        EFieldFalloffType Falloff; // 0x40
        char pad_41[0x7];
        UBoxFalloff* ReturnValue; // 0x48
    }; // Size: 0x50
    Params_SetBoxFalloff params{};
    params.Magnitude = (float)Magnitude;
    params.MinRange = (float)MinRange;
    params.MaxRange = (float)MaxRange;
    params.Default = (float)Default;
    params.Transform = (FTransform)Transform;
    params.Falloff = (EFieldFalloffType)Falloff;
    ProcessEvent(func, &params);
    return (UBoxFalloff*)params.ReturnValue;
}
