#include "FStencilManagerEffectName.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolStencilEffectActive.hpp"
UFXAutoTriggerBoolStencilEffectActive* UFXAutoTriggerBoolStencilEffectActive::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolStencilEffectActive");
    return (UFXAutoTriggerBoolStencilEffectActive*)res;
}
