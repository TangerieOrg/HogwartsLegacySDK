#include "USceneAction_WeatherSequence.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_WeatherSequence* USceneAction_WeatherSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequence");
    return (USceneAction_WeatherSequence*)res;
}
