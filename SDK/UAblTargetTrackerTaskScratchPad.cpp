#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblTargetTrackerTaskScratchPad.hpp"
#include "UTargetTracker.hpp"
UAblTargetTrackerTaskScratchPad* UAblTargetTrackerTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTargetTrackerTaskScratchPad");
    return (UAblTargetTrackerTaskScratchPad*)res;
}
