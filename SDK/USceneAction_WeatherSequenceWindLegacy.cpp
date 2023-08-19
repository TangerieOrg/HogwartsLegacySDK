#include "FWindDefinitionName.hpp"
#include "USceneAction_WeatherSequenceWind.hpp"
#include "USceneAction_WeatherSequenceWindLegacy.hpp"
USceneAction_WeatherSequenceWindLegacy* USceneAction_WeatherSequenceWindLegacy::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceWindLegacy");
    return (USceneAction_WeatherSequenceWindLegacy*)res;
}
