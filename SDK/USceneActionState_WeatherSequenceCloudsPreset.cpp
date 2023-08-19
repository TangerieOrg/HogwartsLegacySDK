#include "USceneActionState_WeatherSequenceAuto.hpp"
#include "USceneActionState_WeatherSequenceCloudsPreset.hpp"
USceneActionState_WeatherSequenceCloudsPreset* USceneActionState_WeatherSequenceCloudsPreset::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceCloudsPreset");
    return (USceneActionState_WeatherSequenceCloudsPreset*)res;
}
