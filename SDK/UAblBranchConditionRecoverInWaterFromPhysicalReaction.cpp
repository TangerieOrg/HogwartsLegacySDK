#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionRecoverInWaterFromPhysicalReaction.hpp"
UAblBranchConditionRecoverInWaterFromPhysicalReaction* UAblBranchConditionRecoverInWaterFromPhysicalReaction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionRecoverInWaterFromPhysicalReaction");
    return (UAblBranchConditionRecoverInWaterFromPhysicalReaction*)res;
}
