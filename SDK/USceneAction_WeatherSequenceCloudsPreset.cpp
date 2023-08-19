#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceCloudsPreset.hpp"
USceneAction_WeatherSequenceCloudsPreset* USceneAction_WeatherSequenceCloudsPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceCloudsPreset");
    return (USceneAction_WeatherSequenceCloudsPreset*)res;
}
