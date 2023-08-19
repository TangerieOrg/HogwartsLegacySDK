#include "FName_GameLogicPropFloat.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarGameLogicPropositional.hpp"
UFXAutoTriggerScalarGameLogicPropositional* UFXAutoTriggerScalarGameLogicPropositional::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarGameLogicPropositional");
    return (UFXAutoTriggerScalarGameLogicPropositional*)res;
}
