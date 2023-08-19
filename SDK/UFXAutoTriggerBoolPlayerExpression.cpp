#include "FName_GameLogicExpression.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolPlayerExpression.hpp"
UFXAutoTriggerBoolPlayerExpression* UFXAutoTriggerBoolPlayerExpression::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolPlayerExpression");
    return (UFXAutoTriggerBoolPlayerExpression*)res;
}
