#include "UAblAbilityTaskScratchPad.hpp"
#include "UablFacialAnimationScratchpad.hpp"
UablFacialAnimationScratchpad* UablFacialAnimationScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablFacialAnimationScratchpad");
    return (UablFacialAnimationScratchpad*)res;
}
