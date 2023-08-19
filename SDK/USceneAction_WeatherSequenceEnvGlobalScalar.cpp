#include "FEnvironmentalGlobalsScalarName.hpp"
#include "USceneAction_WeatherSequenceEnvGlobal.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalScalar.hpp"
USceneAction_WeatherSequenceEnvGlobalScalar* USceneAction_WeatherSequenceEnvGlobalScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceEnvGlobalScalar");
    return (USceneAction_WeatherSequenceEnvGlobalScalar*)res;
}
