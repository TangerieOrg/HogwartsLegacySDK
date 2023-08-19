#include "FStencilManagerGroupName.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolStencilEffectGroupActive.hpp"
UFXAutoTriggerBoolStencilEffectGroupActive* UFXAutoTriggerBoolStencilEffectGroupActive::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolStencilEffectGroupActive");
    return (UFXAutoTriggerBoolStencilEffectGroupActive*)res;
}
