#include "EStencilManagerEffectPriority.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarStencilEffectConstPriority.hpp"
UFXAutoTriggerScalarStencilEffectConstPriority* UFXAutoTriggerScalarStencilEffectConstPriority::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarStencilEffectConstPriority");
    return (UFXAutoTriggerScalarStencilEffectConstPriority*)res;
}
