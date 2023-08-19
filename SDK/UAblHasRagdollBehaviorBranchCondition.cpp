#include "UAblHasRagdollBehaviorBranchCondition.hpp"
#include "UAblTaskCondition.hpp"
UAblHasRagdollBehaviorBranchCondition* UAblHasRagdollBehaviorBranchCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblHasRagdollBehaviorBranchCondition");
    return (UAblHasRagdollBehaviorBranchCondition*)res;
}
