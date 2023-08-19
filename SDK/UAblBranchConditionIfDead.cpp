#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionIfDead.hpp"
UAblBranchConditionIfDead* UAblBranchConditionIfDead::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionIfDead");
    return (UAblBranchConditionIfDead*)res;
}
