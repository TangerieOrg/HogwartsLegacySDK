#include "FFogDefinitionName.hpp"
#include "USceneAction_WeatherSequenceFog.hpp"
#include "USceneAction_WeatherSequenceFogLegacy.hpp"
USceneAction_WeatherSequenceFogLegacy* USceneAction_WeatherSequenceFogLegacy::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceFogLegacy");
    return (USceneAction_WeatherSequenceFogLegacy*)res;
}
