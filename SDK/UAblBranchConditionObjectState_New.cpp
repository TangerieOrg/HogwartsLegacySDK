#include "EObjectStateBranchCondition.hpp"
#include "UAblBranchConditionObjectState_New.hpp"
#include "UAblTaskCondition.hpp"
UAblBranchConditionObjectState_New* UAblBranchConditionObjectState_New::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionObjectState_New");
    return (UAblBranchConditionObjectState_New*)res;
}
