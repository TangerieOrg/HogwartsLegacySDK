#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPlayMultiFxScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblPlayMultiFxScratchpad* UAblPlayMultiFxScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayMultiFxScratchpad");
    return (UAblPlayMultiFxScratchpad*)res;
}
