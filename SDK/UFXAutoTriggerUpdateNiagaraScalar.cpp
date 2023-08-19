#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerUpdateBase.hpp"
#include "UFXAutoTriggerUpdateNiagaraScalar.hpp"
UFXAutoTriggerUpdateNiagaraScalar* UFXAutoTriggerUpdateNiagaraScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateNiagaraScalar");
    return (UFXAutoTriggerUpdateNiagaraScalar*)res;
}
