#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblDamageEventTaskScratchPad.hpp"
UAblDamageEventTaskScratchPad* UAblDamageEventTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblDamageEventTaskScratchPad");
    return (UAblDamageEventTaskScratchPad*)res;
}
