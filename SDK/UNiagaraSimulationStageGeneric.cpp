#include "ENiagaraIterationSource.hpp"
#include "FNiagaraVariableDataInterfaceBinding.hpp"
#include "UNiagaraSimulationStageBase.hpp"
#include "UNiagaraSimulationStageGeneric.hpp"
UNiagaraSimulationStageGeneric* UNiagaraSimulationStageGeneric::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraSimulationStageGeneric");
    return (UNiagaraSimulationStageGeneric*)res;
}
