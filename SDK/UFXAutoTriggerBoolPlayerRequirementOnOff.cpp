#include "FName_GameLogicVarBool.hpp"
#include "UFXAutoTriggerBoolPlayerRequirementOnOff.hpp"
#include "UFXAutoTriggerScalar.hpp"
UFXAutoTriggerBoolPlayerRequirementOnOff* UFXAutoTriggerBoolPlayerRequirementOnOff::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolPlayerRequirementOnOff");
    return (UFXAutoTriggerBoolPlayerRequirementOnOff*)res;
}
