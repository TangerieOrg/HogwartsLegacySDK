#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceStormCurve.hpp"
USceneAction_WeatherSequenceStormCurve* USceneAction_WeatherSequenceStormCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceStormCurve");
    return (USceneAction_WeatherSequenceStormCurve*)res;
}
