#include "USceneAction_WeatherSequenceSunDisk.hpp"
#include "USceneAction_WeatherSequenceSunDiskDefaultParams.hpp"
USceneAction_WeatherSequenceSunDiskDefaultParams* USceneAction_WeatherSequenceSunDiskDefaultParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceSunDiskDefaultParams");
    return (USceneAction_WeatherSequenceSunDiskDefaultParams*)res;
}
