#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolStencilEffectSubStringActive.hpp"
UFXAutoTriggerBoolStencilEffectSubStringActive* UFXAutoTriggerBoolStencilEffectSubStringActive::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolStencilEffectSubStringActive");
    return (UFXAutoTriggerBoolStencilEffectSubStringActive*)res;
}
