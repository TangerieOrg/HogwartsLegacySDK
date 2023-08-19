#include "FWeatherPreload.hpp"
#include "UDataAsset.hpp"
#include "UFunction.hpp"
#include "UWeatherPreloads.hpp"
UWeatherPreloads* UWeatherPreloads::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherPreloads");
    return (UWeatherPreloads*)res;
}
void UWeatherPreloads::RebuildPreloads() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherPreloads.RebuildPreloads"));
    struct Params_RebuildPreloads {
    }; // Size: 0x0
    Params_RebuildPreloads params{};
    ProcessEvent(func, &params);
}
void UWeatherPreloads::ClearPreloads() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherPreloads.ClearPreloads"));
    struct Params_ClearPreloads {
    }; // Size: 0x0
    Params_ClearPreloads params{};
    ProcessEvent(func, &params);
}
