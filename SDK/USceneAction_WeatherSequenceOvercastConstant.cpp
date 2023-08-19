#include "USceneAction_WeatherSequenceOvercast.hpp"
#include "USceneAction_WeatherSequenceOvercastConstant.hpp"
USceneAction_WeatherSequenceOvercastConstant* USceneAction_WeatherSequenceOvercastConstant::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceOvercastConstant");
    return (USceneAction_WeatherSequenceOvercastConstant*)res;
}
