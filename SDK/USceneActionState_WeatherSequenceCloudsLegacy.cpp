#include "USceneActionState_WeatherSequenceAuto.hpp"
#include "USceneActionState_WeatherSequenceCloudsLegacy.hpp"
USceneActionState_WeatherSequenceCloudsLegacy* USceneActionState_WeatherSequenceCloudsLegacy::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceCloudsLegacy");
    return (USceneActionState_WeatherSequenceCloudsLegacy*)res;
}
