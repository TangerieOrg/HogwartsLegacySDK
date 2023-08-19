#include "FEnvironmentalGlobalsVectorOrColorName.hpp"
#include "USceneAction_WeatherSequenceEnvGlobal.hpp"
#include "USceneAction_WeatherSequenceEnvGlobalColor.hpp"
USceneAction_WeatherSequenceEnvGlobalColor* USceneAction_WeatherSequenceEnvGlobalColor::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceEnvGlobalColor");
    return (USceneAction_WeatherSequenceEnvGlobalColor*)res;
}
