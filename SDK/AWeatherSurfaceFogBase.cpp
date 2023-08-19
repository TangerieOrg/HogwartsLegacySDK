#include "AActor.hpp"
#include "AWeatherSurfaceFogBase.hpp"
#include "ESurfaceFogType.hpp"
#include "UFunction.hpp"
AWeatherSurfaceFogBase* AWeatherSurfaceFogBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherSurfaceFogBase");
    return (AWeatherSurfaceFogBase*)res;
}
void AWeatherSurfaceFogBase::OnShowSurfaceFog(ESurfaceFogType Type) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherSurfaceFogBase.OnShowSurfaceFog"));
    struct Params_OnShowSurfaceFog {
        ESurfaceFogType Type; // 0x0
    }; // Size: 0x1
    Params_OnShowSurfaceFog params{};
    params.Type = (ESurfaceFogType)Type;
    ProcessEvent(func, &params);
}
void AWeatherSurfaceFogBase::RecalculateBounds() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherSurfaceFogBase.RecalculateBounds"));
    struct Params_RecalculateBounds {
    }; // Size: 0x0
    Params_RecalculateBounds params{};
    ProcessEvent(func, &params);
}
void AWeatherSurfaceFogBase::OnHideSurfaceFog() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherSurfaceFogBase.OnHideSurfaceFog"));
    struct Params_OnHideSurfaceFog {
    }; // Size: 0x0
    Params_OnHideSurfaceFog params{};
    ProcessEvent(func, &params);
}
