#include "FName_GameLogicVarBool.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolGameLogicRequirement.hpp"
UFXAutoTriggerBoolGameLogicRequirement* UFXAutoTriggerBoolGameLogicRequirement::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolGameLogicRequirement");
    return (UFXAutoTriggerBoolGameLogicRequirement*)res;
}
