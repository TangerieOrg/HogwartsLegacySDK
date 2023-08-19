#include "UAblBranchConditionVelocityScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblBranchConditionVelocityScratchpad* UAblBranchConditionVelocityScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionVelocityScratchpad");
    return (UAblBranchConditionVelocityScratchpad*)res;
}
