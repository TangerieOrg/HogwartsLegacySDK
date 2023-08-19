#include "UFXAutoTriggerScalarSingleParam.hpp"
#include "UFXAutoTriggerScalarSqrRoot.hpp"
UFXAutoTriggerScalarSqrRoot* UFXAutoTriggerScalarSqrRoot::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarSqrRoot");
    return (UFXAutoTriggerScalarSqrRoot*)res;
}
