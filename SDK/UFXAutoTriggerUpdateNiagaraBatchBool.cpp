#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerUpdateNiagaraBatchBool.hpp"
#include "UFXAutoTriggerUpdateNiagaraBatchVar.hpp"
UFXAutoTriggerUpdateNiagaraBatchBool* UFXAutoTriggerUpdateNiagaraBatchBool::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateNiagaraBatchBool");
    return (UFXAutoTriggerUpdateNiagaraBatchBool*)res;
}
