#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarConstantValueSquared.hpp"
UFXAutoTriggerScalarConstantValueSquared* UFXAutoTriggerScalarConstantValueSquared::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarConstantValueSquared");
    return (UFXAutoTriggerScalarConstantValueSquared*)res;
}
