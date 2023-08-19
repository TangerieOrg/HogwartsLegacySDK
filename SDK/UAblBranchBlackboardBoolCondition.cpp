#include "UAblBranchBlackboardBoolCondition.hpp"
#include "UAblBranchCondition.hpp"
UAblBranchBlackboardBoolCondition* UAblBranchBlackboardBoolCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchBlackboardBoolCondition");
    return (UAblBranchBlackboardBoolCondition*)res;
}
