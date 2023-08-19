#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPushAwayFromInstigatorScratchpad.hpp"
UAblPushAwayFromInstigatorScratchpad* UAblPushAwayFromInstigatorScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPushAwayFromInstigatorScratchpad");
    return (UAblPushAwayFromInstigatorScratchpad*)res;
}
