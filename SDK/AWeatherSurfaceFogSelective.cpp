#include "AWeatherSurfaceFogBase.hpp"
#include "AWeatherSurfaceFogSelective.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
void AWeatherSurfaceFogSelective::SetComponentToShowHide(USceneComponent* SceneComponent, bool bIncludeChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherSurfaceFogSelective.SetComponentToShowHide"));
    struct Params_SetComponentToShowHide {
        USceneComponent* SceneComponent; // 0x0
        bool bIncludeChildren; // 0x8
    }; // Size: 0x9
    Params_SetComponentToShowHide params{};
    params.SceneComponent = (USceneComponent*)SceneComponent;
    params.bIncludeChildren = (bool)bIncludeChildren;
    ProcessEvent(func, &params);
}
AWeatherSurfaceFogSelective* AWeatherSurfaceFogSelective::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherSurfaceFogSelective");
    return (AWeatherSurfaceFogSelective*)res;
}
