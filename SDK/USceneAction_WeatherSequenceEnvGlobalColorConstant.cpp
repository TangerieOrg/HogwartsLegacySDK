#include "FLinearColor.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalColor.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalColorConstant.hpp"
USceneAction_WeatherSequenceEnvGlobalColorConstant* USceneAction_WeatherSequenceEnvGlobalColorConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceEnvGlobalColorConstant");
    return (USceneAction_WeatherSequenceEnvGlobalColorConstant*)res;
}
