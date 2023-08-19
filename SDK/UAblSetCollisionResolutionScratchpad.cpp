#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSetCollisionResolutionScratchpad.hpp"
UAblSetCollisionResolutionScratchpad* UAblSetCollisionResolutionScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetCollisionResolutionScratchpad");
    return (UAblSetCollisionResolutionScratchpad*)res;
}
