#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#include "USceneAction_WeatherSequenceLightingPostProcessing.hpp"
#include "USceneAction_WeatherSequenceLightingPostProcessingBase.hpp"
USceneAction_WeatherSequenceLightingPostProcessing* USceneAction_WeatherSequenceLightingPostProcessing::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceLightingPostProcessing");
    return (USceneAction_WeatherSequenceLightingPostProcessing*)res;
}
