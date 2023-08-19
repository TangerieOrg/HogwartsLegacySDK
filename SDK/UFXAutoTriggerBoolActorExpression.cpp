#include "FName_GameLogicExpression.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolActorExpression.hpp"
UFXAutoTriggerBoolActorExpression* UFXAutoTriggerBoolActorExpression::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolActorExpression");
    return (UFXAutoTriggerBoolActorExpression*)res;
}
