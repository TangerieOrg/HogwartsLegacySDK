#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionStairsAndSlopes.hpp"
UAblBranchConditionStairsAndSlopes* UAblBranchConditionStairsAndSlopes::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionStairsAndSlopes");
    return (UAblBranchConditionStairsAndSlopes*)res;
}
