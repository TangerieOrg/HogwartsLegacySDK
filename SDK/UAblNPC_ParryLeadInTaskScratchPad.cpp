#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNPC_ParryLeadInTaskScratchPad.hpp"
UAblNPC_ParryLeadInTaskScratchPad* UAblNPC_ParryLeadInTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryLeadInTaskScratchPad");
    return (UAblNPC_ParryLeadInTaskScratchPad*)res;
}
