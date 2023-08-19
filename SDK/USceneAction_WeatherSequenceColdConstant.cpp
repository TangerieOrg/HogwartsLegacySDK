#include "USceneAction_WeatherSequenceCold.hpp"
#include "USceneAction_WeatherSequenceColdConstant.hpp"
USceneAction_WeatherSequenceColdConstant* USceneAction_WeatherSequenceColdConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceColdConstant");
    return (USceneAction_WeatherSequenceColdConstant*)res;
}
