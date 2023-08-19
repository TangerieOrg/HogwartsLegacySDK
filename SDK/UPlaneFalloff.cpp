#include "EFieldFalloffType.hpp"
#include "FVector.hpp"
#include "UFieldNodeFloat.hpp"
#include "UFunction.hpp"
#include "UPlaneFalloff.hpp"
UPlaneFalloff* UPlaneFalloff::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.PlaneFalloff");
    return (UPlaneFalloff*)res;
}
UPlaneFalloff* UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, FVector Position, FVector Normal, EFieldFalloffType Falloff) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.PlaneFalloff.SetPlaneFalloff"));
    struct Params_SetPlaneFalloff {
        float Magnitude; // 0x0
        float MinRange; // 0x4
        float MaxRange; // 0x8
        float Default; // 0xc
        float Distance; // 0x10
        FVector Position; // 0x14
        FVector Normal; // 0x20
        EFieldFalloffType Falloff; // 0x2c
        char pad_2d[0x3];
        UPlaneFalloff* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_SetPlaneFalloff params{};
    params.Magnitude = (float)Magnitude;
    params.MinRange = (float)MinRange;
    params.MaxRange = (float)MaxRange;
    params.Default = (float)Default;
    params.Distance = (float)Distance;
    params.Position = (FVector)Position;
    params.Normal = (FVector)Normal;
    params.Falloff = (EFieldFalloffType)Falloff;
    ProcessEvent(func, &params);
    return (UPlaneFalloff*)params.ReturnValue;
}
