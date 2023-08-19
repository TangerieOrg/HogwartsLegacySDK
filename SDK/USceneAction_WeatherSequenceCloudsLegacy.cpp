#include "FCloudDefinitionName.hpp"
#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceCloudsLegacy.hpp"
USceneAction_WeatherSequenceCloudsLegacy* USceneAction_WeatherSequenceCloudsLegacy::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceCloudsLegacy");
    return (USceneAction_WeatherSequenceCloudsLegacy*)res;
}
