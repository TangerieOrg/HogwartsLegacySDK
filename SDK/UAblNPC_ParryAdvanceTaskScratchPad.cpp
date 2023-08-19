#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNPC_ParryAdvanceTaskScratchPad.hpp"
UAblNPC_ParryAdvanceTaskScratchPad* UAblNPC_ParryAdvanceTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryAdvanceTaskScratchPad");
    return (UAblNPC_ParryAdvanceTaskScratchPad*)res;
}
