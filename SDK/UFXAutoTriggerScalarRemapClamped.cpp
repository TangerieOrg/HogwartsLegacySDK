#include "FVector2D.hpp"
#include "UFXAutoTriggerScalarRemapClamped.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarRemapClamped* UFXAutoTriggerScalarRemapClamped::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarRemapClamped");
    return (UFXAutoTriggerScalarRemapClamped*)res;
}
