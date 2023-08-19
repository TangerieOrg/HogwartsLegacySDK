#include "AInfo.hpp"
#include "ASkyLight.hpp"
#include "UFunction.hpp"
#include "USkyLightComponent.hpp"
ASkyLight* ASkyLight::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkyLight");
    return (ASkyLight*)res;
}
void ASkyLight::OnRep_bEnabled() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.SkyLight.OnRep_bEnabled"));
    struct Params_OnRep_bEnabled {
    }; // Size: 0x0
    Params_OnRep_bEnabled params{};
    ProcessEvent(func, &params);
}
