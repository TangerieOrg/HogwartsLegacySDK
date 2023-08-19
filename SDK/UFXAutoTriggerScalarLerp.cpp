#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarLerp.hpp"
UFXAutoTriggerScalarLerp* UFXAutoTriggerScalarLerp::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarLerp");
    return (UFXAutoTriggerScalarLerp*)res;
}
