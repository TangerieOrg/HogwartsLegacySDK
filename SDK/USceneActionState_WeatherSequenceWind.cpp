#include "USceneActionState_WeatherSequenceAuto.hpp"
#include "USceneActionState_WeatherSequenceWind.hpp"
USceneActionState_WeatherSequenceWind* USceneActionState_WeatherSequenceWind::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceWind");
    return (USceneActionState_WeatherSequenceWind*)res;
}
