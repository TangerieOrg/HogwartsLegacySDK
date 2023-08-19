#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolStencilEffectAnyActive.hpp"
UFXAutoTriggerBoolStencilEffectAnyActive* UFXAutoTriggerBoolStencilEffectAnyActive::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolStencilEffectAnyActive");
    return (UFXAutoTriggerBoolStencilEffectAnyActive*)res;
}
