#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblHeadTrackingTaskScratchPad.hpp"
UAblHeadTrackingTaskScratchPad* UAblHeadTrackingTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblHeadTrackingTaskScratchPad");
    return (UAblHeadTrackingTaskScratchPad*)res;
}
