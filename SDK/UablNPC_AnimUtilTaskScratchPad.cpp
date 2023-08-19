#include "UAblAbilityTaskScratchPad.hpp"
#include "UablNPC_AnimUtilTaskScratchPad.hpp"
UablNPC_AnimUtilTaskScratchPad* UablNPC_AnimUtilTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNPC_AnimUtilTaskScratchPad");
    return (UablNPC_AnimUtilTaskScratchPad*)res;
}
