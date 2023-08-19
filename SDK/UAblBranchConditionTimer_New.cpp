#include "UAblBranchConditionTimer_New.hpp"
#include "UAblTaskCondition.hpp"
UAblBranchConditionTimer_New* UAblBranchConditionTimer_New::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionTimer_New");
    return (UAblBranchConditionTimer_New*)res;
}
