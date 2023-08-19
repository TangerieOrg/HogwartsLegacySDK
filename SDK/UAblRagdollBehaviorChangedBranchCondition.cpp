#include "UAblRagdollBehaviorChangedBranchCondition.hpp"
#include "UAblTaskCondition.hpp"
UAblRagdollBehaviorChangedBranchCondition* UAblRagdollBehaviorChangedBranchCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblRagdollBehaviorChangedBranchCondition");
    return (UAblRagdollBehaviorChangedBranchCondition*)res;
}
