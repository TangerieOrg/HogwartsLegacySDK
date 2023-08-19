#include "FTransform.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblCollisionSweepTaskScratchPad.hpp"
UAblCollisionSweepTaskScratchPad* UAblCollisionSweepTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionSweepTaskScratchPad");
    return (UAblCollisionSweepTaskScratchPad*)res;
}
