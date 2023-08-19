#include "USceneAction_WeatherSequenceEnvGlobalScalar.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalScalarConstant.hpp"
USceneAction_WeatherSequenceEnvGlobalScalarConstant* USceneAction_WeatherSequenceEnvGlobalScalarConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceEnvGlobalScalarConstant");
    return (USceneAction_WeatherSequenceEnvGlobalScalarConstant*)res;
}
