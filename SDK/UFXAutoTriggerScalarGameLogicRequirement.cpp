#include "FName_GameLogicVarFloat.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarGameLogicRequirement.hpp"
UFXAutoTriggerScalarGameLogicRequirement* UFXAutoTriggerScalarGameLogicRequirement::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarGameLogicRequirement");
    return (UFXAutoTriggerScalarGameLogicRequirement*)res;
}
