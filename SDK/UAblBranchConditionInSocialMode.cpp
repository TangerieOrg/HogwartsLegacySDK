#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionInSocialMode.hpp"
UAblBranchConditionInSocialMode* UAblBranchConditionInSocialMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionInSocialMode");
    return (UAblBranchConditionInSocialMode*)res;
}
