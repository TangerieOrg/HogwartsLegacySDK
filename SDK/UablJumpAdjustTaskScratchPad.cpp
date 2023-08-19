#include "UAblAbilityTaskScratchPad.hpp"
#include "UablJumpAdjustTaskScratchPad.hpp"
UablJumpAdjustTaskScratchPad* UablJumpAdjustTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablJumpAdjustTaskScratchPad");
    return (UablJumpAdjustTaskScratchPad*)res;
}
