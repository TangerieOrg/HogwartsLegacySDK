#include "USceneAction_WeatherSequenceStormCoverage.hpp"
#include "USceneAction_WeatherSequenceStormCurve.hpp"
USceneAction_WeatherSequenceStormCoverage* USceneAction_WeatherSequenceStormCoverage::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceStormCoverage");
    return (USceneAction_WeatherSequenceStormCoverage*)res;
}
