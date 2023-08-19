#include "EMovementMode.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblMovementModeTaskScratchPad.hpp"
UAblMovementModeTaskScratchPad* UAblMovementModeTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblMovementModeTaskScratchPad");
    return (UAblMovementModeTaskScratchPad*)res;
}
