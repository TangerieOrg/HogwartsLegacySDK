#include "USceneAction_WeatherSequenceWind.hpp"
#include "USceneAction_WeatherSequenceWindRandomParams.hpp"
#include "UWindGustController.hpp"
USceneAction_WeatherSequenceWindRandomParams* USceneAction_WeatherSequenceWindRandomParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceWindRandomParams");
    return (USceneAction_WeatherSequenceWindRandomParams*)res;
}
