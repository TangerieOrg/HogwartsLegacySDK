#include "FAnimationTrack.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblAvaAnimationTaskScratchPad.hpp"
UAblAvaAnimationTaskScratchPad* UAblAvaAnimationTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAvaAnimationTaskScratchPad");
    return (UAblAvaAnimationTaskScratchPad*)res;
}
