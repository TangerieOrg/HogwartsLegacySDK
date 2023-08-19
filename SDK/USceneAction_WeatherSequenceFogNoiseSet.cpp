#include "FExpHeightFogVolumetricNoiseParameters.hpp"
#include "USceneAction_WeatherSequenceFogNoise.hpp"
#include "USceneAction_WeatherSequenceFogNoiseSet.hpp"
USceneAction_WeatherSequenceFogNoiseSet* USceneAction_WeatherSequenceFogNoiseSet::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceFogNoiseSet");
    return (USceneAction_WeatherSequenceFogNoiseSet*)res;
}
