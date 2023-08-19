#include "FWindDefinitionName.hpp"
#include "USceneAction_WeatherLocalWind.hpp"
#include "USceneAction_WeatherLocalWindPreset.hpp"
USceneAction_WeatherLocalWindPreset* USceneAction_WeatherLocalWindPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_WeatherLocalWindPreset");
    return (USceneAction_WeatherLocalWindPreset*)res;
}
