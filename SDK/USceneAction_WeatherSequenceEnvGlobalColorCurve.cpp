#include "FRuntimeCurveLinearColor.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalColor.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalColorCurve.hpp"
USceneAction_WeatherSequenceEnvGlobalColorCurve* USceneAction_WeatherSequenceEnvGlobalColorCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceEnvGlobalColorCurve");
    return (USceneAction_WeatherSequenceEnvGlobalColorCurve*)res;
}
