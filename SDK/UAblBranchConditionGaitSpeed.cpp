#include "EAblGaitSpeed.hpp"
#include "ESpeedType\Type.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionGaitSpeed.hpp"
UAblBranchConditionGaitSpeed* UAblBranchConditionGaitSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionGaitSpeed");
    return (UAblBranchConditionGaitSpeed*)res;
}
