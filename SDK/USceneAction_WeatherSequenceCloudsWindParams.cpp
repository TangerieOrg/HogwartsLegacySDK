#include "FVolumetricCloudsWeatherWindParams.hpp"
#include "USceneAction_WeatherSequenceCloudsWind.hpp"
#include "USceneAction_WeatherSequenceCloudsWindParams.hpp"
USceneAction_WeatherSequenceCloudsWindParams* USceneAction_WeatherSequenceCloudsWindParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceCloudsWindParams");
    return (USceneAction_WeatherSequenceCloudsWindParams*)res;
}
