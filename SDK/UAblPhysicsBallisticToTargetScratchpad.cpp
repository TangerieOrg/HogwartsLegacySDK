#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPhysicsBallisticToTargetScratchpad.hpp"
UAblPhysicsBallisticToTargetScratchpad* UAblPhysicsBallisticToTargetScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPhysicsBallisticToTargetScratchpad");
    return (UAblPhysicsBallisticToTargetScratchpad*)res;
}
