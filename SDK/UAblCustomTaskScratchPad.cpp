#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblCustomTaskScratchPad.hpp"
UAblCustomTaskScratchPad* UAblCustomTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCustomTaskScratchPad");
    return (UAblCustomTaskScratchPad*)res;
}
