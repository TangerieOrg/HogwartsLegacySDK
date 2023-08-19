#include "UFunction.hpp"
#include "UInterface.hpp"
#include "ULightComponent.hpp"
#include "ULightTickInterface.hpp"
ULightTickInterface* ULightTickInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/LightCulling.LightTickInterface");
    return (ULightTickInterface*)res;
}
void ULightTickInterface::OnEnterLightTickRange(ULightComponent* LightComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightTickInterface.OnEnterLightTickRange"));
    struct Params_OnEnterLightTickRange {
        ULightComponent* LightComponent; // 0x0
    }; // Size: 0x8
    Params_OnEnterLightTickRange params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    ProcessEvent(func, &params);
}
void ULightTickInterface::OnExitLightTickRange(ULightComponent* LightComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/LightCulling.LightTickInterface.OnExitLightTickRange"));
    struct Params_OnExitLightTickRange {
        ULightComponent* LightComponent; // 0x0
    }; // Size: 0x8
    Params_OnExitLightTickRange params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    ProcessEvent(func, &params);
}
