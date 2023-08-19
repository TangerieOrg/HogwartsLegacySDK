#include "FPostProcessSettings.hpp"
#include "USceneActionState_WeatherSequenceLightingBase.hpp"
#include "USceneActionState_WeatherSequenceLightingPostProcessing.hpp"
USceneActionState_WeatherSequenceLightingPostProcessing* USceneActionState_WeatherSequenceLightingPostProcessing::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceLightingPostProcessing");
    return (USceneActionState_WeatherSequenceLightingPostProcessing*)res;
}
