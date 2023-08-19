#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequenceLightingRenderSettings.hpp"
#include "USceneAction_WeatherSequenceLightingRenderSettingsBlendCurve.hpp"
USceneAction_WeatherSequenceLightingRenderSettingsBlendCurve* USceneAction_WeatherSequenceLightingRenderSettingsBlendCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceLightingRenderSettingsBlendCurve");
    return (USceneAction_WeatherSequenceLightingRenderSettingsBlendCurve*)res;
}
