#include "EAnimSpeedType\Type.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionAnimSpeed.hpp"
UAblBranchConditionAnimSpeed* UAblBranchConditionAnimSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionAnimSpeed");
    return (UAblBranchConditionAnimSpeed*)res;
}
