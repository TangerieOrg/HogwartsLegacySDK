#include "UAblAbilityTaskScratchPad.hpp"
#include "UablAnimDoneTaskScratchPad.hpp"
UablAnimDoneTaskScratchPad* UablAnimDoneTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAnimDoneTaskScratchPad");
    return (UablAnimDoneTaskScratchPad*)res;
}
