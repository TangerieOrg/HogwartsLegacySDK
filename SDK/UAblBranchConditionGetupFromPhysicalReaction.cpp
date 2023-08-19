#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionGetupFromPhysicalReaction.hpp"
UAblBranchConditionGetupFromPhysicalReaction* UAblBranchConditionGetupFromPhysicalReaction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionGetupFromPhysicalReaction");
    return (UAblBranchConditionGetupFromPhysicalReaction*)res;
}
