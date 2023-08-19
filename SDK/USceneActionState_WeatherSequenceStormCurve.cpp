#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceStormCurve.hpp"
USceneActionState_WeatherSequenceStormCurve* USceneActionState_WeatherSequenceStormCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceStormCurve");
    return (USceneActionState_WeatherSequenceStormCurve*)res;
}
