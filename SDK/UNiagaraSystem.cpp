#include "FBox.hpp"
#include "FNiagaraEmitterHandle.hpp"
#include "FNiagaraSystemCompiledData.hpp"
#include "FNiagaraSystemScalabilityOverride.hpp"
#include "FNiagaraSystemScalabilityOverrides.hpp"
#include "FNiagaraUserRedirectionParameterStore.hpp"
#include "UFXSystemAsset.hpp"
#include "UNiagaraEffectType.hpp"
#include "UNiagaraParameterCollectionInstance.hpp"
#include "UNiagaraScript.hpp"
#include "UNiagaraSystem.hpp"
UNiagaraSystem* UNiagaraSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraSystem");
    return (UNiagaraSystem*)res;
}
