#include "UAblAbilityBaseScratchPad.hpp"
#include "UAblReactionAbilityScratchPad.hpp"
#include "UAblReactionData.hpp"
UAblReactionAbilityScratchPad* UAblReactionAbilityScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblReactionAbilityScratchPad");
    return (UAblReactionAbilityScratchPad*)res;
}
