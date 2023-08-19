#include "FTransform.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblCollisionQueryTaskScratchPad.hpp"
UAblCollisionQueryTaskScratchPad* UAblCollisionQueryTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCollisionQueryTaskScratchPad");
    return (UAblCollisionQueryTaskScratchPad*)res;
}
