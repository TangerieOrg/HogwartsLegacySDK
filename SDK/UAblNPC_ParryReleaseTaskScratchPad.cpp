#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNPC_ParryReleaseTaskScratchPad.hpp"
UAblNPC_ParryReleaseTaskScratchPad* UAblNPC_ParryReleaseTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_ParryReleaseTaskScratchPad");
    return (UAblNPC_ParryReleaseTaskScratchPad*)res;
}
