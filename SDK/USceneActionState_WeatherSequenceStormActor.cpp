#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceStormActor.hpp"
USceneActionState_WeatherSequenceStormActor* USceneActionState_WeatherSequenceStormActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceStormActor");
    return (USceneActionState_WeatherSequenceStormActor*)res;
}
