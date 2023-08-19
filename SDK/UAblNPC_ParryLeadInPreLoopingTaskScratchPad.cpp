#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNPC_ParryLeadInPreLoopingTaskScratchPad.hpp"
UAblNPC_ParryLeadInPreLoopingTaskScratchPad* UAblNPC_ParryLeadInPreLoopingTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryLeadInPreLoopingTaskScratchPad");
    return (UAblNPC_ParryLeadInPreLoopingTaskScratchPad*)res;
}
