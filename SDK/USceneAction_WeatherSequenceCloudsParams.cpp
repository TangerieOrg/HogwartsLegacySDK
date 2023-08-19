#include "FVolumetricCloudsPresetParams.hpp"
#include "USceneAction_WeatherSequenceCloudsParams.hpp"
#include "USceneAction_WeatherSequenceCloudsPreset.hpp"
USceneAction_WeatherSequenceCloudsParams* USceneAction_WeatherSequenceCloudsParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceCloudsParams");
    return (USceneAction_WeatherSequenceCloudsParams*)res;
}
