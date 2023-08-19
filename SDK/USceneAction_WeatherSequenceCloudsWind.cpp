#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceCloudsWind.hpp"
USceneAction_WeatherSequenceCloudsWind* USceneAction_WeatherSequenceCloudsWind::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceCloudsWind");
    return (USceneAction_WeatherSequenceCloudsWind*)res;
}
