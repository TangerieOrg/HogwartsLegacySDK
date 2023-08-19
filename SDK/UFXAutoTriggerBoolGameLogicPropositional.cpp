#include "FName_GameLogicPropFloat.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolGameLogicPropositional.hpp"
UFXAutoTriggerBoolGameLogicPropositional* UFXAutoTriggerBoolGameLogicPropositional::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolGameLogicPropositional");
    return (UFXAutoTriggerBoolGameLogicPropositional*)res;
}
