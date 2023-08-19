#include "FEnvironmentalGlobalsScalarName.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarEnvironmentalGlobal.hpp"
UFXAutoTriggerScalarEnvironmentalGlobal* UFXAutoTriggerScalarEnvironmentalGlobal::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarEnvironmentalGlobal");
    return (UFXAutoTriggerScalarEnvironmentalGlobal*)res;
}
