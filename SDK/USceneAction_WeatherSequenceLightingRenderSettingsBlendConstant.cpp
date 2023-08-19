#include "USceneAction_WeatherSequenceLightingRenderSettings.hpp"
#include "USceneAction_WeatherSequenceLightingRenderSettingsBlendConstant.hpp"
USceneAction_WeatherSequenceLightingRenderSettingsBlendConstant* USceneAction_WeatherSequenceLightingRenderSettingsBlendConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceLightingRenderSettingsBlendConstant");
    return (USceneAction_WeatherSequenceLightingRenderSettingsBlendConstant*)res;
}
