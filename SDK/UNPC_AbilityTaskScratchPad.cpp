#include "FNPC_AbilityTaskMovementEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UNPC_AbilityTaskScratchPad.hpp"
UNPC_AbilityTaskScratchPad* UNPC_AbilityTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.NPC_AbilityTaskScratchPad");
    return (UNPC_AbilityTaskScratchPad*)res;
}
