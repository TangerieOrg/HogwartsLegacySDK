#include "FWindParameters.hpp"
#include "USceneAction_WeatherLocalWind.hpp"
#include "USceneAction_WeatherLocalWindParameters.hpp"
USceneAction_WeatherLocalWindParameters* USceneAction_WeatherLocalWindParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WeatherLocalWindParameters");
    return (USceneAction_WeatherLocalWindParameters*)res;
}
