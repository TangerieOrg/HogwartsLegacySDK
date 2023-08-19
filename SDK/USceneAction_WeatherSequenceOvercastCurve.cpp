#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequenceOvercast.hpp"
#include "USceneAction_WeatherSequenceOvercastCurve.hpp"
USceneAction_WeatherSequenceOvercastCurve* USceneAction_WeatherSequenceOvercastCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceOvercastCurve");
    return (USceneAction_WeatherSequenceOvercastCurve*)res;
}
