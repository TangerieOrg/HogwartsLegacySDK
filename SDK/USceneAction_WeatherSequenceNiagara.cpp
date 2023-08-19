#include "USceneAction_WeatherSequence.hpp"
#include "USceneAction_WeatherSequenceNiagara.hpp"
USceneAction_WeatherSequenceNiagara* USceneAction_WeatherSequenceNiagara::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceNiagara");
    return (USceneAction_WeatherSequenceNiagara*)res;
}
