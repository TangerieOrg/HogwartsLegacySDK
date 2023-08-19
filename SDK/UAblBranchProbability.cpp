#include "UAblBranchCondition.hpp"
#include "UAblBranchProbability.hpp"
UAblBranchProbability* UAblBranchProbability::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchProbability");
    return (UAblBranchProbability*)res;
}
