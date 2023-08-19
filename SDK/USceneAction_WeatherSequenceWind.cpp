#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceWind.hpp"
USceneAction_WeatherSequenceWind* USceneAction_WeatherSequenceWind::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceWind");
    return (USceneAction_WeatherSequenceWind*)res;
}
