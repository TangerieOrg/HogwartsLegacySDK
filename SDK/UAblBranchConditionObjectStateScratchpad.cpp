#include "UAblBranchConditionObjectStateScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
#include "UObjectStateInfo.hpp"
UAblBranchConditionObjectStateScratchpad* UAblBranchConditionObjectStateScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionObjectStateScratchpad");
    return (UAblBranchConditionObjectStateScratchpad*)res;
}
