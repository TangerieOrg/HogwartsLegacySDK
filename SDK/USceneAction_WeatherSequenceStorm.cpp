#include "EWeatherSurfacePrecipitation.hpp"
#include "EWeatherSurfaceStormType.hpp"
#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceStorm.hpp"
#include "UWeatherSurfaceDataAsset.hpp"
USceneAction_WeatherSequenceStorm* USceneAction_WeatherSequenceStorm::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceStorm");
    return (USceneAction_WeatherSequenceStorm*)res;
}
