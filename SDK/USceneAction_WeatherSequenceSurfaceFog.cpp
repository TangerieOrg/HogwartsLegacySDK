#include "ESurfaceFogType.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceSurfaceFog.hpp"
USceneAction_WeatherSequenceSurfaceFog* USceneAction_WeatherSequenceSurfaceFog::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceSurfaceFog");
    return (USceneAction_WeatherSequenceSurfaceFog*)res;
}
