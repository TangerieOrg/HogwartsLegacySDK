#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceOvercast.hpp"
USceneAction_WeatherSequenceOvercast* USceneAction_WeatherSequenceOvercast::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceOvercast");
    return (USceneAction_WeatherSequenceOvercast*)res;
}
