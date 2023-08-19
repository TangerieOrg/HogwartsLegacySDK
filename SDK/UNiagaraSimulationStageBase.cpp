#include "UNiagaraMergeable.hpp"
#include "UNiagaraScript.hpp"
#include "UNiagaraSimulationStageBase.hpp"
UNiagaraSimulationStageBase* UNiagaraSimulationStageBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraSimulationStageBase");
    return (UNiagaraSimulationStageBase*)res;
}
