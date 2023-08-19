#include "UFXAutoTriggerUpdateBase.hpp"
#include "UFXAutoTriggerUpdateNiagaraBatch.hpp"
#include "UFXAutoTriggerUpdateNiagaraBatchVar.hpp"
UFXAutoTriggerUpdateNiagaraBatch* UFXAutoTriggerUpdateNiagaraBatch::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateNiagaraBatch");
    return (UFXAutoTriggerUpdateNiagaraBatch*)res;
}
