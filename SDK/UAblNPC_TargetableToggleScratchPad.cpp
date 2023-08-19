#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNPC_TargetableToggleScratchPad.hpp"
UAblNPC_TargetableToggleScratchPad* UAblNPC_TargetableToggleScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_TargetableToggleScratchPad");
    return (UAblNPC_TargetableToggleScratchPad*)res;
}
