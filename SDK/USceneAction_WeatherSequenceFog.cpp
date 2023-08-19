#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceFog.hpp"
USceneAction_WeatherSequenceFog* USceneAction_WeatherSequenceFog::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceFog");
    return (USceneAction_WeatherSequenceFog*)res;
}
