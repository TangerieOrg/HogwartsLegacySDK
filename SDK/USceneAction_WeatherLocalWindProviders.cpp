#include "UFloatProvider.hpp"
#include "USceneAction_WeatherLocalWind.hpp"
#include "USceneAction_WeatherLocalWindProviders.hpp"
#include "UVectorProvider.hpp"
USceneAction_WeatherLocalWindProviders* USceneAction_WeatherLocalWindProviders::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WeatherLocalWindProviders");
    return (USceneAction_WeatherLocalWindProviders*)res;
}
