#include "UAblBranchConditionMovementModeScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
#include "UCharacterMovementComponent.hpp"
UAblBranchConditionMovementModeScratchpad* UAblBranchConditionMovementModeScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBranchConditionMovementModeScratchpad");
    return (UAblBranchConditionMovementModeScratchpad*)res;
}
