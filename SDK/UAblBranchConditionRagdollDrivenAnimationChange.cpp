#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionRagdollDrivenAnimationChange.hpp"
UAblBranchConditionRagdollDrivenAnimationChange* UAblBranchConditionRagdollDrivenAnimationChange::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionRagdollDrivenAnimationChange");
    return (UAblBranchConditionRagdollDrivenAnimationChange*)res;
}
