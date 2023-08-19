#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSetVsPhysicsCollisionResolutionEnabledScratchpad.hpp"
UAblSetVsPhysicsCollisionResolutionEnabledScratchpad* UAblSetVsPhysicsCollisionResolutionEnabledScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetVsPhysicsCollisionResolutionEnabledScratchpad");
    return (UAblSetVsPhysicsCollisionResolutionEnabledScratchpad*)res;
}
