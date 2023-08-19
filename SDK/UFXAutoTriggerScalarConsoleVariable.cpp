#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarConsoleVariable.hpp"
UFXAutoTriggerScalarConsoleVariable* UFXAutoTriggerScalarConsoleVariable::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerScalarConsoleVariable");
    return (UFXAutoTriggerScalarConsoleVariable*)res;
}
