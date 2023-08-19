#include "ESetMaskConditionType.hpp"
#include "FVector.hpp"
#include "UFieldNodeInt.hpp"
#include "UFunction.hpp"
#include "URadialIntMask.hpp"
URadialIntMask* URadialIntMask::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.RadialIntMask");
    return (URadialIntMask*)res;
}
URadialIntMask* URadialIntMask::SetRadialIntMask(float Radius, FVector Position, int32_t InteriorValue, int32_t ExteriorValue, ESetMaskConditionType SetMaskConditionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FieldSystemEngine.RadialIntMask.SetRadialIntMask"));
    struct Params_SetRadialIntMask {
        float Radius; // 0x0
        FVector Position; // 0x4
        int32_t InteriorValue; // 0x10
        int32_t ExteriorValue; // 0x14
        ESetMaskConditionType SetMaskConditionIn; // 0x18
        char pad_19[0x7];
        URadialIntMask* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_SetRadialIntMask params{};
    params.Radius = (float)Radius;
    params.Position = (FVector)Position;
    params.InteriorValue = (int32_t)InteriorValue;
    params.ExteriorValue = (int32_t)ExteriorValue;
    params.SetMaskConditionIn = (ESetMaskConditionType)SetMaskConditionIn;
    ProcessEvent(func, &params);
    return (URadialIntMask*)params.ReturnValue;
}
