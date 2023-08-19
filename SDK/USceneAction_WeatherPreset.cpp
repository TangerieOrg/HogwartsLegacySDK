#include "FWeatherDefinitionName.hpp"
#include "USceneAction_WeatherPreset.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_WeatherPreset* USceneAction_WeatherPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WeatherPreset");
    return (USceneAction_WeatherPreset*)res;
}
