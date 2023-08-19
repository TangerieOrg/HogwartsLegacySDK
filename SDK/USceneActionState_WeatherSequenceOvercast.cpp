#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceOvercast.hpp"
USceneActionState_WeatherSequenceOvercast* USceneActionState_WeatherSequenceOvercast::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceOvercast");
    return (USceneActionState_WeatherSequenceOvercast*)res;
}
