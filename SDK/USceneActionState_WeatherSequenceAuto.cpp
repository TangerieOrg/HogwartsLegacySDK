#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceAuto.hpp"
USceneActionState_WeatherSequenceAuto* USceneActionState_WeatherSequenceAuto::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceAuto");
    return (USceneActionState_WeatherSequenceAuto*)res;
}
