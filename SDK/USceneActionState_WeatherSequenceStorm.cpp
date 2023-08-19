#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceStorm.hpp"
#include "UWeatherSurfaceDataAsset.hpp"
USceneActionState_WeatherSequenceStorm* USceneActionState_WeatherSequenceStorm::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceStorm");
    return (USceneActionState_WeatherSequenceStorm*)res;
}
