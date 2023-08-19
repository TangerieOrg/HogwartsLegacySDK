#include "UAblBranchAllowSprintOnStairsCondition.hpp"
#include "UAblBranchCondition.hpp"
UAblBranchAllowSprintOnStairsCondition* UAblBranchAllowSprintOnStairsCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchAllowSprintOnStairsCondition");
    return (UAblBranchAllowSprintOnStairsCondition*)res;
}
