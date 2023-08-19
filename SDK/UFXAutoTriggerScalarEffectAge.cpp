#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarEffectAge.hpp"
UFXAutoTriggerScalarEffectAge* UFXAutoTriggerScalarEffectAge::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarEffectAge");
    return (UFXAutoTriggerScalarEffectAge*)res;
}
