#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcForceFeedbackScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblNpcForceFeedbackScratchpad* UAblNpcForceFeedbackScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcForceFeedbackScratchpad");
    return (UAblNpcForceFeedbackScratchpad*)res;
}
