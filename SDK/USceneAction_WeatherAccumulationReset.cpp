#include "FWeatherSurfaceCharacterFXStateReset.hpp"
#include "USceneAction_WeatherAccumulationReset.hpp"
#include "USceneAction_WeatherGeneric.hpp"
USceneAction_WeatherAccumulationReset* USceneAction_WeatherAccumulationReset::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherAccumulationReset");
    return (USceneAction_WeatherAccumulationReset*)res;
}
