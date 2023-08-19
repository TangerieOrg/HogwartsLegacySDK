#include "FExpHeightFogVolumetricNoiseParametersOverride.hpp"
#include "USceneAction_WeatherSequenceFogNoise.hpp"
#include "USceneAction_WeatherSequenceFogNoiseOverride.hpp"
USceneAction_WeatherSequenceFogNoiseOverride* USceneAction_WeatherSequenceFogNoiseOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceFogNoiseOverride");
    return (USceneAction_WeatherSequenceFogNoiseOverride*)res;
}
