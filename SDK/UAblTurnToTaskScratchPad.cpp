#include "FAlphaBlend.hpp"
#include "FTurnToTaskEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblTurnToTaskScratchPad.hpp"
UAblTurnToTaskScratchPad* UAblTurnToTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTurnToTaskScratchPad");
    return (UAblTurnToTaskScratchPad*)res;
}
