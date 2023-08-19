#include "UablCreatureAttackTurnAdjustTaskScratchPad.hpp"
#include "UablTurnAdjustTaskScratchPad.hpp"
UablCreatureAttackTurnAdjustTaskScratchPad* UablCreatureAttackTurnAdjustTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablCreatureAttackTurnAdjustTaskScratchPad");
    return (UablCreatureAttackTurnAdjustTaskScratchPad*)res;
}
