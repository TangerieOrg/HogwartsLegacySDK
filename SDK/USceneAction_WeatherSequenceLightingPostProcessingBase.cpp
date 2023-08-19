#include "USceneAction_WeatherSequenceLightingBase.hpp"
#include "USceneAction_WeatherSequenceLightingPostProcessingBase.hpp"
USceneAction_WeatherSequenceLightingPostProcessingBase* USceneAction_WeatherSequenceLightingPostProcessingBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceLightingPostProcessingBase");
    return (USceneAction_WeatherSequenceLightingPostProcessingBase*)res;
}
