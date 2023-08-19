#include "FGameplayTag.hpp"
#include "UAblBranchConditionRPGTag.hpp"
#include "UAblTaskCondition.hpp"
UAblBranchConditionRPGTag* UAblBranchConditionRPGTag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionRPGTag");
    return (UAblBranchConditionRPGTag*)res;
}
