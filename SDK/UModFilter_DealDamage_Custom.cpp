#include "FDamageInfo.hpp"
#include "UFunction.hpp"
#include "UModFilter_DealDamage_Base.hpp"
#include "UModFilter_DealDamage_Custom.hpp"
#include "UObject.hpp"
UModFilter_DealDamage_Custom* UModFilter_DealDamage_Custom::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_DealDamage_Custom");
    return (UModFilter_DealDamage_Custom*)res;
}
bool UModFilter_DealDamage_Custom::BlueprintPassesDamageFilter(UObject* InTargetObject, FDamageInfo& DamageInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ModFilter_DealDamage_Custom.BlueprintPassesDamageFilter"));
    struct Params_BlueprintPassesDamageFilter {
        UObject* InTargetObject; // 0x0
        FDamageInfo DamageInfo; // 0x8
        bool ReturnValue; // 0x1d0
    }; // Size: 0x1d1
    Params_BlueprintPassesDamageFilter params{};
    params.InTargetObject = (UObject*)InTargetObject;
    params.DamageInfo = (FDamageInfo)DamageInfo;
    ProcessEvent(func, &params);
    DamageInfo = params.DamageInfo;
    return (bool)params.ReturnValue;
}
