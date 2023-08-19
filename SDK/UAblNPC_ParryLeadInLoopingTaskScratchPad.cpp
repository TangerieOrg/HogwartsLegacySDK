#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNPC_ParryLeadInLoopingTaskScratchPad.hpp"
UAblNPC_ParryLeadInLoopingTaskScratchPad* UAblNPC_ParryLeadInLoopingTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryLeadInLoopingTaskScratchPad");
    return (UAblNPC_ParryLeadInLoopingTaskScratchPad*)res;
}
