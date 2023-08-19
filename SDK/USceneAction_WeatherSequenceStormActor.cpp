#include "UClass.hpp"
#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceStormActor.hpp"
#include "UTransformProvider.hpp"
USceneAction_WeatherSequenceStormActor* USceneAction_WeatherSequenceStormActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceStormActor");
    return (USceneAction_WeatherSequenceStormActor*)res;
}
