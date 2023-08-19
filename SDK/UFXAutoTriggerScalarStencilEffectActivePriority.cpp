#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarStencilEffectActivePriority.hpp"
UFXAutoTriggerScalarStencilEffectActivePriority* UFXAutoTriggerScalarStencilEffectActivePriority::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarStencilEffectActivePriority");
    return (UFXAutoTriggerScalarStencilEffectActivePriority*)res;
}
