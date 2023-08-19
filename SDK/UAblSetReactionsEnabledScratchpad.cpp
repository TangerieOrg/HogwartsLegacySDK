#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSetReactionsEnabledScratchpad.hpp"
UAblSetReactionsEnabledScratchpad* UAblSetReactionsEnabledScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetReactionsEnabledScratchpad");
    return (UAblSetReactionsEnabledScratchpad*)res;
}
