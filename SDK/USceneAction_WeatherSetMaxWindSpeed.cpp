#include "USceneAction_WeatherGeneric.hpp"
#include "USceneAction_WeatherSetMaxWindSpeed.hpp"
USceneAction_WeatherSetMaxWindSpeed* USceneAction_WeatherSetMaxWindSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSetMaxWindSpeed");
    return (USceneAction_WeatherSetMaxWindSpeed*)res;
}
