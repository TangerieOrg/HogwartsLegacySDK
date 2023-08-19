#include "USceneAction_WeatherSequenceLightingPostProcessing.hpp"
#include "USceneAction_WeatherSequenceLightingPostProcessingBlendConstant.hpp"
USceneAction_WeatherSequenceLightingPostProcessingBlendConstant* USceneAction_WeatherSequenceLightingPostProcessingBlendConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceLightingPostProcessingBlendConstant");
    return (USceneAction_WeatherSequenceLightingPostProcessingBlendConstant*)res;
}
