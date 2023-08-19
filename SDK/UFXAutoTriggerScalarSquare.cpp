#include "UFXAutoTriggerScalarSingleParam.hpp"
#include "UFXAutoTriggerScalarSquare.hpp"
UFXAutoTriggerScalarSquare* UFXAutoTriggerScalarSquare::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarSquare");
    return (UFXAutoTriggerScalarSquare*)res;
}
