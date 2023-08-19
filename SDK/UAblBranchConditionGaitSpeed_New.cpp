#include "EAblGaitSpeed.hpp"
#include "ESpeedType\Type.hpp"
#include "UAblBranchConditionGaitSpeed_New.hpp"
#include "UAblTaskCondition.hpp"
UAblBranchConditionGaitSpeed_New* UAblBranchConditionGaitSpeed_New::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionGaitSpeed_New");
    return (UAblBranchConditionGaitSpeed_New*)res;
}
