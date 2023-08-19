#include "FStencilManagerEffectName.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarStencilEffectPriority.hpp"
UFXAutoTriggerScalarStencilEffectPriority* UFXAutoTriggerScalarStencilEffectPriority::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarStencilEffectPriority");
    return (UFXAutoTriggerScalarStencilEffectPriority*)res;
}
