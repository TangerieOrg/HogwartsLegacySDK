#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNPC_ParryExternalLeadInTaskScratchPad.hpp"
UAblNPC_ParryExternalLeadInTaskScratchPad* UAblNPC_ParryExternalLeadInTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryExternalLeadInTaskScratchPad");
    return (UAblNPC_ParryExternalLeadInTaskScratchPad*)res;
}
