#include "UAblBranchConditionGaitSpeed.hpp"
#include "UAblBranchConditionMountRiderGaitSpeed.hpp"
UAblBranchConditionMountRiderGaitSpeed* UAblBranchConditionMountRiderGaitSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionMountRiderGaitSpeed");
    return (UAblBranchConditionMountRiderGaitSpeed*)res;
}
