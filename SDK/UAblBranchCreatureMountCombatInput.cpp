#include "UAblBranchCreatureMountCombatInput.hpp"
#include "UAblTaskCondition.hpp"
UAblBranchCreatureMountCombatInput* UAblBranchCreatureMountCombatInput::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchCreatureMountCombatInput");
    return (UAblBranchCreatureMountCombatInput*)res;
}
