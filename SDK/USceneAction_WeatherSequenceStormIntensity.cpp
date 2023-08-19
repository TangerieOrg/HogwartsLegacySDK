#include "USceneAction_WeatherSequenceStormCurve.hpp"
#include "USceneAction_WeatherSequenceStormIntensity.hpp"
USceneAction_WeatherSequenceStormIntensity* USceneAction_WeatherSequenceStormIntensity::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceStormIntensity");
    return (USceneAction_WeatherSequenceStormIntensity*)res;
}
