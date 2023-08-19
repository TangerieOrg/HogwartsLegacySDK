#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionRagdollBehaviorFound.hpp"
UAblBranchConditionRagdollBehaviorFound* UAblBranchConditionRagdollBehaviorFound::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionRagdollBehaviorFound");
    return (UAblBranchConditionRagdollBehaviorFound*)res;
}
