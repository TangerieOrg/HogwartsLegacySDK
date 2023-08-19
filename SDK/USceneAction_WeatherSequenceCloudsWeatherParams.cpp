#include "FVolumetricCloudsWeatherState.hpp"
#include "USceneAction_WeatherSequenceCloudsPreset.hpp"
#include "USceneAction_WeatherSequenceCloudsWeatherParams.hpp"
USceneAction_WeatherSequenceCloudsWeatherParams* USceneAction_WeatherSequenceCloudsWeatherParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceCloudsWeatherParams");
    return (USceneAction_WeatherSequenceCloudsWeatherParams*)res;
}
