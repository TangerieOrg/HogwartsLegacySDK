#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceCold.hpp"
USceneAction_WeatherSequenceCold* USceneAction_WeatherSequenceCold::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceCold");
    return (USceneAction_WeatherSequenceCold*)res;
}
