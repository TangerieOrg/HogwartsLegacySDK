#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceCold.hpp"
USceneActionState_WeatherSequenceCold* USceneActionState_WeatherSequenceCold::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceCold");
    return (USceneActionState_WeatherSequenceCold*)res;
}
