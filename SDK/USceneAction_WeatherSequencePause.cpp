#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequencePause.hpp"
USceneAction_WeatherSequencePause* USceneAction_WeatherSequencePause::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequencePause");
    return (USceneAction_WeatherSequencePause*)res;
}
