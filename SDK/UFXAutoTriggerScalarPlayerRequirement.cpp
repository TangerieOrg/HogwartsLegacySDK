#include "FName_GameLogicVarFloat.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarPlayerRequirement.hpp"
UFXAutoTriggerScalarPlayerRequirement* UFXAutoTriggerScalarPlayerRequirement::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarPlayerRequirement");
    return (UFXAutoTriggerScalarPlayerRequirement*)res;
}
