#include "UAblAbilityTaskScratchPad.hpp"
#include "UablMotionAdjustTaskScratchPad.hpp"
UablMotionAdjustTaskScratchPad* UablMotionAdjustTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablMotionAdjustTaskScratchPad");
    return (UablMotionAdjustTaskScratchPad*)res;
}
