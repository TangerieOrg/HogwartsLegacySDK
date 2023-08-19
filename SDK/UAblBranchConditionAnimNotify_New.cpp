#include "UAblBranchConditionAnimNotify_New.hpp"
#include "UAblTaskCondition.hpp"
UAblBranchConditionAnimNotify_New* UAblBranchConditionAnimNotify_New::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBranchConditionAnimNotify_New");
    return (UAblBranchConditionAnimNotify_New*)res;
}
