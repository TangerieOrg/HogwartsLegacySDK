#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionWading.hpp"
UAblBranchConditionWading* UAblBranchConditionWading::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionWading");
    return (UAblBranchConditionWading*)res;
}
