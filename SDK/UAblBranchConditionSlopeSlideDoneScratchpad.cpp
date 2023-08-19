#include "UAblBranchConditionSlopeSlideDoneScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
#include "UAmbulatory_MovementComponent.hpp"
UAblBranchConditionSlopeSlideDoneScratchpad* UAblBranchConditionSlopeSlideDoneScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionSlopeSlideDoneScratchpad");
    return (UAblBranchConditionSlopeSlideDoneScratchpad*)res;
}
