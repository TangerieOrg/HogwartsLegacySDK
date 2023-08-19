#include "FNiagaraSystemSpawnInfo.hpp"
#include "USceneAction_WeatherSequenceNiagara.hpp"
#include "USceneAction_WeatherSequenceNiagaraInWorld.hpp"
#include "UTransformProvider.hpp"
USceneAction_WeatherSequenceNiagaraInWorld* USceneAction_WeatherSequenceNiagaraInWorld::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceNiagaraInWorld");
    return (USceneAction_WeatherSequenceNiagaraInWorld*)res;
}
