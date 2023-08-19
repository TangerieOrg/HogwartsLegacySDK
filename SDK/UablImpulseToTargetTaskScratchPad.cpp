#include "UAblAbilityTaskScratchPad.hpp"
#include "UablImpulseToTargetTaskScratchPad.hpp"
UablImpulseToTargetTaskScratchPad* UablImpulseToTargetTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablImpulseToTargetTaskScratchPad");
    return (UablImpulseToTargetTaskScratchPad*)res;
}
