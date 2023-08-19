#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionIsNearDeathKneeling.hpp"
UAblBranchConditionIsNearDeathKneeling* UAblBranchConditionIsNearDeathKneeling::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionIsNearDeathKneeling");
    return (UAblBranchConditionIsNearDeathKneeling*)res;
}
