#include "EFieldFalloffType.hpp"
#include "FVector.hpp"
#include "UFieldNodeFloat.hpp"
#include "UFunction.hpp"
#include "URadialFalloff.hpp"
URadialFalloff* URadialFalloff::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.RadialFalloff");
    return (URadialFalloff*)res;
}
URadialFalloff* URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, FVector Position, EFieldFalloffType Falloff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.RadialFalloff.SetRadialFalloff"));
    struct Params_SetRadialFalloff {
        float Magnitude; // 0x0
        float MinRange; // 0x4
        float MaxRange; // 0x8
        float Default; // 0xc
        float Radius; // 0x10
        FVector Position; // 0x14
        EFieldFalloffType Falloff; // 0x20
        char pad_21[0x7];
        URadialFalloff* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_SetRadialFalloff params{};
    params.Magnitude = (float)Magnitude;
    params.MinRange = (float)MinRange;
    params.MaxRange = (float)MaxRange;
    params.Default = (float)Default;
    params.Radius = (float)Radius;
    params.Position = (FVector)Position;
    params.Falloff = (EFieldFalloffType)Falloff;
    ProcessEvent(func, &params);
    return (URadialFalloff*)params.ReturnValue;
}
