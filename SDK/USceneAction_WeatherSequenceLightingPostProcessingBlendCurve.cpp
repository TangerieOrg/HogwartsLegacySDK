#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequenceLightingPostProcessing.hpp"
#include "USceneAction_WeatherSequenceLightingPostProcessingBlendCurve.hpp"
USceneAction_WeatherSequenceLightingPostProcessingBlendCurve* USceneAction_WeatherSequenceLightingPostProcessingBlendCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceLightingPostProcessingBlendCurve");
    return (USceneAction_WeatherSequenceLightingPostProcessingBlendCurve*)res;
}
