#include "USceneAction_WeatherGeneric.hpp"
#include "USceneAction_WeatherPrecipitationPercentage.hpp"
USceneAction_WeatherPrecipitationPercentage* USceneAction_WeatherPrecipitationPercentage::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherPrecipitationPercentage");
    return (USceneAction_WeatherPrecipitationPercentage*)res;
}
