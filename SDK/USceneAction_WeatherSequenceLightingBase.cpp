#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceLightingBase.hpp"
USceneAction_WeatherSequenceLightingBase* USceneAction_WeatherSequenceLightingBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceLightingBase");
    return (USceneAction_WeatherSequenceLightingBase*)res;
}
