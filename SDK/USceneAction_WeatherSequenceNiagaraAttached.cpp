#include "FNiagaraSystemSpawnAttachedPointInfo.hpp"
#include "USceneAction_WeatherSequenceNiagara.hpp"
#include "USceneAction_WeatherSequenceNiagaraAttached.hpp"
USceneAction_WeatherSequenceNiagaraAttached* USceneAction_WeatherSequenceNiagaraAttached::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceNiagaraAttached");
    return (USceneAction_WeatherSequenceNiagaraAttached*)res;
}
