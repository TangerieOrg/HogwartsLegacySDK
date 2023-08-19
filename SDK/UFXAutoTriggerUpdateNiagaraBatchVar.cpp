#include "UFXAutoTriggerUpdateLocalVar.hpp"
#include "UFXAutoTriggerUpdateNiagaraBatchVar.hpp"
UFXAutoTriggerUpdateNiagaraBatchVar* UFXAutoTriggerUpdateNiagaraBatchVar::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateNiagaraBatchVar");
    return (UFXAutoTriggerUpdateNiagaraBatchVar*)res;
}
