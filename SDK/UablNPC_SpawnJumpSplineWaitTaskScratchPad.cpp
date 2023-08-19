#include "UAblAbilityTaskScratchPad.hpp"
#include "UablNPC_SpawnJumpSplineWaitTaskScratchPad.hpp"
UablNPC_SpawnJumpSplineWaitTaskScratchPad* UablNPC_SpawnJumpSplineWaitTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNPC_SpawnJumpSplineWaitTaskScratchPad");
    return (UablNPC_SpawnJumpSplineWaitTaskScratchPad*)res;
}
