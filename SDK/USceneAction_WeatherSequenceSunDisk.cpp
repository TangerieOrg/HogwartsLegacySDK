#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceSunDisk.hpp"
USceneAction_WeatherSequenceSunDisk* USceneAction_WeatherSequenceSunDisk::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceSunDisk");
    return (USceneAction_WeatherSequenceSunDisk*)res;
}
