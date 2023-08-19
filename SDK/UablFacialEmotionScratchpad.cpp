#include "UAblAbilityTaskScratchPad.hpp"
#include "UablFacialEmotionScratchpad.hpp"
UablFacialEmotionScratchpad* UablFacialEmotionScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablFacialEmotionScratchpad");
    return (UablFacialEmotionScratchpad*)res;
}
