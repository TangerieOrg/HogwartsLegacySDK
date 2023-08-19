#include "EAblGaitSpeed.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionDiscreteSpeedChanged.hpp"
UAblBranchConditionDiscreteSpeedChanged* UAblBranchConditionDiscreteSpeedChanged::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionDiscreteSpeedChanged");
    return (UAblBranchConditionDiscreteSpeedChanged*)res;
}
