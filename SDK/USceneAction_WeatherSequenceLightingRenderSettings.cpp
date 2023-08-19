#include "FBlendDomain.hpp"
#include "FRenderSettingsPostProcessing.hpp"
#include "USceneAction_WeatherSequenceLightingPostProcessingBase.hpp"
#include "USceneAction_WeatherSequenceLightingRenderSettings.hpp"
USceneAction_WeatherSequenceLightingRenderSettings* USceneAction_WeatherSequenceLightingRenderSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceLightingRenderSettings");
    return (USceneAction_WeatherSequenceLightingRenderSettings*)res;
}
