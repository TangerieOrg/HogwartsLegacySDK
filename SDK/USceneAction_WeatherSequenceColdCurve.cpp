#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequenceCold.hpp"
#include "USceneAction_WeatherSequenceColdCurve.hpp"
USceneAction_WeatherSequenceColdCurve* USceneAction_WeatherSequenceColdCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceColdCurve");
    return (USceneAction_WeatherSequenceColdCurve*)res;
}
