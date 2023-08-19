#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "USceneActionState_WeatherSequence.hpp"
#include "USceneActionState_WeatherSequenceNiagara.hpp"
USceneActionState_WeatherSequenceNiagara* USceneActionState_WeatherSequenceNiagara::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneActionState_WeatherSequenceNiagara");
    return (USceneActionState_WeatherSequenceNiagara*)res;
}
