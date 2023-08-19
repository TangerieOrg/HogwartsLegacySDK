#include "UAblAbilityBaseScratchPad.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
UAblAbilityTaskScratchPad* UAblAbilityTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityTaskScratchPad");
    return (UAblAbilityTaskScratchPad*)res;
}
