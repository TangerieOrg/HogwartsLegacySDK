#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNPC_ParryAnimationFireTaskScratchPad.hpp"
UAblNPC_ParryAnimationFireTaskScratchPad* UAblNPC_ParryAnimationFireTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryAnimationFireTaskScratchPad");
    return (UAblNPC_ParryAnimationFireTaskScratchPad*)res;
}
