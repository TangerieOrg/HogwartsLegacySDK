#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolConsoleVariable.hpp"
UFXAutoTriggerBoolConsoleVariable* UFXAutoTriggerBoolConsoleVariable::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolConsoleVariable");
    return (UFXAutoTriggerBoolConsoleVariable*)res;
}
