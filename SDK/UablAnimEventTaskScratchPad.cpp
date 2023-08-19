#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
#include "UablAnimEventTaskScratchPad.hpp"
UablAnimEventTaskScratchPad* UablAnimEventTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAnimEventTaskScratchPad");
    return (UablAnimEventTaskScratchPad*)res;
}
