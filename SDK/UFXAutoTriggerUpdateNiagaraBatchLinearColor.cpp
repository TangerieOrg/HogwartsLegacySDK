#include "UFXAutoTriggerLinearColor.hpp"
#include "UFXAutoTriggerUpdateNiagaraBatchLinearColor.hpp"
#include "UFXAutoTriggerUpdateNiagaraBatchVar.hpp"
UFXAutoTriggerUpdateNiagaraBatchLinearColor* UFXAutoTriggerUpdateNiagaraBatchLinearColor::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerUpdateNiagaraBatchLinearColor");
    return (UFXAutoTriggerUpdateNiagaraBatchLinearColor*)res;
}
