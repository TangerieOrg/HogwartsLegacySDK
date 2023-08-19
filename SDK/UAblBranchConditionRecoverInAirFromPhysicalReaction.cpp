#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionRecoverInAirFromPhysicalReaction.hpp"
UAblBranchConditionRecoverInAirFromPhysicalReaction* UAblBranchConditionRecoverInAirFromPhysicalReaction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionRecoverInAirFromPhysicalReaction");
    return (UAblBranchConditionRecoverInAirFromPhysicalReaction*)res;
}
