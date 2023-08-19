#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerUpdateNiagaraBatchFloat.hpp"
#include "UFXAutoTriggerUpdateNiagaraBatchVar.hpp"
UFXAutoTriggerUpdateNiagaraBatchFloat* UFXAutoTriggerUpdateNiagaraBatchFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateNiagaraBatchFloat");
    return (UFXAutoTriggerUpdateNiagaraBatchFloat*)res;
}
