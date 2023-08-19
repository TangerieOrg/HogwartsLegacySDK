#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionStairsAndSlopesOrientation.hpp"
UAblBranchConditionStairsAndSlopesOrientation* UAblBranchConditionStairsAndSlopesOrientation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionStairsAndSlopesOrientation");
    return (UAblBranchConditionStairsAndSlopesOrientation*)res;
}
