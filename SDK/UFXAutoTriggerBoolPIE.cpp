#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolPIE.hpp"
UFXAutoTriggerBoolPIE* UFXAutoTriggerBoolPIE::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.FXAutoTriggerBoolPIE");
    return (UFXAutoTriggerBoolPIE*)res;
}
