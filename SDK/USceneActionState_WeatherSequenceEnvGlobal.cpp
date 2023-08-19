#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceEnvGlobal.hpp"
USceneActionState_WeatherSequenceEnvGlobal* USceneActionState_WeatherSequenceEnvGlobal::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceEnvGlobal");
    return (USceneActionState_WeatherSequenceEnvGlobal*)res;
}
