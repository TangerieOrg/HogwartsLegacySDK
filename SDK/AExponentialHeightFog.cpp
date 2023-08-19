#include "AExponentialHeightFog.hpp"
#include "AInfo.hpp"
#include "UExponentialHeightFogComponent.hpp"
#include "UFunction.hpp"
void AExponentialHeightFog::OnRep_bEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ExponentialHeightFog.OnRep_bEnabled"));
    struct Params_OnRep_bEnabled {
    }; // Size: 0x0
    Params_OnRep_bEnabled params{};
    ProcessEvent(func, &params);
}
AExponentialHeightFog* AExponentialHeightFog::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ExponentialHeightFog");
    return (AExponentialHeightFog*)res;
}
