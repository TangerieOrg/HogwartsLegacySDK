#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPossessionTaskScratchPad.hpp"
UAblPossessionTaskScratchPad* UAblPossessionTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPossessionTaskScratchPad");
    return (UAblPossessionTaskScratchPad*)res;
}
