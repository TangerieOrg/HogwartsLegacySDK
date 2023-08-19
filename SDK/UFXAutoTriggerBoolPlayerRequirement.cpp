#include "FName_GameLogicVarBool.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolPlayerRequirement.hpp"
UFXAutoTriggerBoolPlayerRequirement* UFXAutoTriggerBoolPlayerRequirement::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolPlayerRequirement");
    return (UFXAutoTriggerBoolPlayerRequirement*)res;
}
