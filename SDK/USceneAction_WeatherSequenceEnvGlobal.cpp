#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceEnvGlobal.hpp"
USceneAction_WeatherSequenceEnvGlobal* USceneAction_WeatherSequenceEnvGlobal::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceEnvGlobal");
    return (USceneAction_WeatherSequenceEnvGlobal*)res;
}
