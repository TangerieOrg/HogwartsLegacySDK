#include "USceneAction_WeatherSequenceCameraNiagara.hpp"
#include "USceneAction_WeatherSequenceNiagaraAttached.hpp"
USceneAction_WeatherSequenceCameraNiagara* USceneAction_WeatherSequenceCameraNiagara::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceCameraNiagara");
    return (USceneAction_WeatherSequenceCameraNiagara*)res;
}
