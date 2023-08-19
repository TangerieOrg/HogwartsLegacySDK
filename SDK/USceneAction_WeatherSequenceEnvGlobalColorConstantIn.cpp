#include "USceneAction_WeatherSequenceEnvGlobalColorConstant.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalColorConstantIn.hpp"
USceneAction_WeatherSequenceEnvGlobalColorConstantIn* USceneAction_WeatherSequenceEnvGlobalColorConstantIn::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceEnvGlobalColorConstantIn");
    return (USceneAction_WeatherSequenceEnvGlobalColorConstantIn*)res;
}
