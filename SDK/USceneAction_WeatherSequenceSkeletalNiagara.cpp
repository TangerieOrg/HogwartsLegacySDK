#include "FNiagaraHelpersPrimFilter.hpp"
#include "FNiagaraSystemSpawnMultiSkeletalInfo.hpp"
#include "UActorProvider.hpp"
#include "USceneAction_WeatherSequenceNiagara.hpp"
#include "USceneAction_WeatherSequenceSkeletalNiagara.hpp"
USceneAction_WeatherSequenceSkeletalNiagara* USceneAction_WeatherSequenceSkeletalNiagara::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceSkeletalNiagara");
    return (USceneAction_WeatherSequenceSkeletalNiagara*)res;
}
