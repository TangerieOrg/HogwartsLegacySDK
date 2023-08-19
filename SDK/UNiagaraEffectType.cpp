#include "ENiagaraCullReaction.hpp"
#include "ENiagaraScalabilityUpdateFrequency.hpp"
#include "FGuid.hpp"
#include "FNiagaraEmitterScalabilitySettingsArray.hpp"
#include "FNiagaraPerfBaselineStats.hpp"
#include "FNiagaraSystemScalabilitySettings.hpp"
#include "FNiagaraSystemScalabilitySettingsArray.hpp"
#include "UNiagaraBaselineController.hpp"
#include "UNiagaraEffectType.hpp"
#include "UNiagaraSignificanceHandler.hpp"
#include "UObject.hpp"
UNiagaraEffectType* UNiagaraEffectType::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraEffectType");
    return (UNiagaraEffectType*)res;
}
