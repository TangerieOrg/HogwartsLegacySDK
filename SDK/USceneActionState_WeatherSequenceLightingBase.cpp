#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceLightingBase.hpp"
USceneActionState_WeatherSequenceLightingBase* USceneActionState_WeatherSequenceLightingBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceLightingBase");
    return (USceneActionState_WeatherSequenceLightingBase*)res;
}
