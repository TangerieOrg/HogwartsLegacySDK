#include "UAblBranchTaskScratchPad.hpp"
#include "UablAbilityDoneTaskScratchPad.hpp"
UablAbilityDoneTaskScratchPad* UablAbilityDoneTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAbilityDoneTaskScratchPad");
    return (UablAbilityDoneTaskScratchPad*)res;
}
