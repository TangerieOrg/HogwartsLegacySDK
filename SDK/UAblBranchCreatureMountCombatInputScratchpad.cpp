#include "UAblBranchCreatureMountCombatInputScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblBranchCreatureMountCombatInputScratchpad* UAblBranchCreatureMountCombatInputScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchCreatureMountCombatInputScratchpad");
    return (UAblBranchCreatureMountCombatInputScratchpad*)res;
}
