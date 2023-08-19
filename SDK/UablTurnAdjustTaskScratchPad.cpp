#include "UAblAbilityTaskScratchPad.hpp"
#include "UablTurnAdjustTaskScratchPad.hpp"
UablTurnAdjustTaskScratchPad* UablTurnAdjustTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablTurnAdjustTaskScratchPad");
    return (UablTurnAdjustTaskScratchPad*)res;
}
