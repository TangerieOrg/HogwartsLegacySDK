#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPlayAnimationTaskScratchPad.hpp"
UAblPlayAnimationTaskScratchPad* UAblPlayAnimationTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPlayAnimationTaskScratchPad");
    return (UAblPlayAnimationTaskScratchPad*)res;
}
