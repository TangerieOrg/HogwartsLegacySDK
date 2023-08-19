#include "EStairsDirectionState\Type.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionStairsAndSlopesDirection.hpp"
UAblBranchConditionStairsAndSlopesDirection* UAblBranchConditionStairsAndSlopesDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionStairsAndSlopesDirection");
    return (UAblBranchConditionStairsAndSlopesDirection*)res;
}
