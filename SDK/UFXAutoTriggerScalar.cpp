#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerValue.hpp"
UFXAutoTriggerScalar* UFXAutoTriggerScalar::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalar");
    return (UFXAutoTriggerScalar*)res;
}
