#include "FName_GameLogicVarBool.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarGameLogicRequirementOnOff.hpp"
UFXAutoTriggerScalarGameLogicRequirementOnOff* UFXAutoTriggerScalarGameLogicRequirementOnOff::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarGameLogicRequirementOnOff");
    return (UFXAutoTriggerScalarGameLogicRequirementOnOff*)res;
}
