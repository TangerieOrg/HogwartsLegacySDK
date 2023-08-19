#include "FVector.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UPhysicalResponseObjectInterface.hpp"
UPhysicalResponseObjectInterface* UPhysicalResponseObjectInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhysicalResponseObjectInterface");
    return (UPhysicalResponseObjectInterface*)res;
}
void UPhysicalResponseObjectInterface::ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhysicalResponseObjectInterface.ObjectPhysicalResponseImpact"));
    struct Params_ObjectPhysicalResponseImpact {
        float ImpactIntensity; // 0x0
        FName SpellName; // 0x4
        FName ResponseConfigName; // 0xc
        FVector ImpactLocation; // 0x14
    }; // Size: 0x20
    Params_ObjectPhysicalResponseImpact params{};
    params.ImpactIntensity = (float)ImpactIntensity;
    params.SpellName = (FName)SpellName;
    params.ResponseConfigName = (FName)ResponseConfigName;
    params.ImpactLocation = (FVector)ImpactLocation;
    ProcessEvent(func, &params);
    ImpactLocation = params.ImpactLocation;
}
