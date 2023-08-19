#include "FVector2D.hpp"
#include "UFXAutoTriggerScalarRemapUnclamped.hpp"
#include "UFXAutoTriggerScalarSingleParam.hpp"
UFXAutoTriggerScalarRemapUnclamped* UFXAutoTriggerScalarRemapUnclamped::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarRemapUnclamped");
    return (UFXAutoTriggerScalarRemapUnclamped*)res;
}
