#include "USceneActionState_WeatherSequenceAuto.hpp"
#include "USceneActionState_WeatherSequenceFogNoise.hpp"
USceneActionState_WeatherSequenceFogNoise* USceneActionState_WeatherSequenceFogNoise::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceFogNoise");
    return (USceneActionState_WeatherSequenceFogNoise*)res;
}
