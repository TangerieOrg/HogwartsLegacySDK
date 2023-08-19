#include "UAblAbilityTaskScratchPad.hpp"
#include "UablExecuteTaskScratchPad.hpp"
#include "UablExecuteTaskSubScratchPad.hpp"
UablExecuteTaskScratchPad* UablExecuteTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablExecuteTaskScratchPad");
    return (UablExecuteTaskScratchPad*)res;
}
