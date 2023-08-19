#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceSurfaceFog.hpp"
USceneActionState_WeatherSequenceSurfaceFog* USceneActionState_WeatherSequenceSurfaceFog::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceSurfaceFog");
    return (USceneActionState_WeatherSequenceSurfaceFog*)res;
}
