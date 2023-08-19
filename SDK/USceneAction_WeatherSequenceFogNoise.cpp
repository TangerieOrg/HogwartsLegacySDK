#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceFogNoise.hpp"
USceneAction_WeatherSequenceFogNoise* USceneAction_WeatherSequenceFogNoise::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceFogNoise");
    return (USceneAction_WeatherSequenceFogNoise*)res;
}
