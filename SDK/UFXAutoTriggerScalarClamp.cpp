#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarClamp.hpp"
UFXAutoTriggerScalarClamp* UFXAutoTriggerScalarClamp::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarClamp");
    return (UFXAutoTriggerScalarClamp*)res;
}
