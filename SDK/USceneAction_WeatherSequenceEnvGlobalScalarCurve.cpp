#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalScalar.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalScalarCurve.hpp"
USceneAction_WeatherSequenceEnvGlobalScalarCurve* USceneAction_WeatherSequenceEnvGlobalScalarCurve::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceEnvGlobalScalarCurve");
    return (USceneAction_WeatherSequenceEnvGlobalScalarCurve*)res;
}
