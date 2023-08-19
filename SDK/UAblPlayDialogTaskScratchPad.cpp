#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPlayDialogTaskScratchPad.hpp"
UAblPlayDialogTaskScratchPad* UAblPlayDialogTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayDialogTaskScratchPad");
    return (UAblPlayDialogTaskScratchPad*)res;
}
