#include "USceneActionState_WeatherSequenceAuto.hpp"
#include "USceneActionState_WeatherSequenceCloudsWind.hpp"
USceneActionState_WeatherSequenceCloudsWind* USceneActionState_WeatherSequenceCloudsWind::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceCloudsWind");
    return (USceneActionState_WeatherSequenceCloudsWind*)res;
}
