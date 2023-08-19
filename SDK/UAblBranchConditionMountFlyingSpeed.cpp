#include "EMountFlyingGait.hpp"
#include "ESpeedType\Type.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchConditionMountFlyingSpeed.hpp"
UAblBranchConditionMountFlyingSpeed* UAblBranchConditionMountFlyingSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionMountFlyingSpeed");
    return (UAblBranchConditionMountFlyingSpeed*)res;
}
