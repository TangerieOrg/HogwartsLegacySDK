#include "FSunDiskOverrides.hpp"
#include "USceneAction_WeatherSequenceSunDisk.hpp"
#include "USceneAction_WeatherSequenceSunDiskParams.hpp"
USceneAction_WeatherSequenceSunDiskParams* USceneAction_WeatherSequenceSunDiskParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceSunDiskParams");
    return (USceneAction_WeatherSequenceSunDiskParams*)res;
}
