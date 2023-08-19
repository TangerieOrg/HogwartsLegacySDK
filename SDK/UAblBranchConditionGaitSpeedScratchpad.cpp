#include "UAblBranchConditionGaitSpeedScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblBranchConditionGaitSpeedScratchpad* UAblBranchConditionGaitSpeedScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionGaitSpeedScratchpad");
    return (UAblBranchConditionGaitSpeedScratchpad*)res;
}
