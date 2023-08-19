#include "FEnvironmentalGlobalsVectorOrColorName.hpp"
#include "UFXAutoTriggerLinearColor.hpp"
#include "UFXAutoTriggerLinearColorEnvironmentalGlobal.hpp"
UFXAutoTriggerLinearColorEnvironmentalGlobal* UFXAutoTriggerLinearColorEnvironmentalGlobal::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerLinearColorEnvironmentalGlobal");
    return (UFXAutoTriggerLinearColorEnvironmentalGlobal*)res;
}
