#include "USceneActionState_WeatherSequenceAuto.hpp"
#include "USceneActionState_WeatherSequenceFog.hpp"
USceneActionState_WeatherSequenceFog* USceneActionState_WeatherSequenceFog::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceFog");
    return (USceneActionState_WeatherSequenceFog*)res;
}
