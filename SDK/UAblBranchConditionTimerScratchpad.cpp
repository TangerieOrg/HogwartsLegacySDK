#include "UAblBranchConditionTimerScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblBranchConditionTimerScratchpad* UAblBranchConditionTimerScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionTimerScratchpad");
    return (UAblBranchConditionTimerScratchpad*)res;
}
