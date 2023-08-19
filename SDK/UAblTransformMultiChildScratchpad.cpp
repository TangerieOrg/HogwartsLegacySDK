#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
#include "UAblTransformMultiChildScratchpad.hpp"
UAblTransformMultiChildScratchpad* UAblTransformMultiChildScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTransformMultiChildScratchpad");
    return (UAblTransformMultiChildScratchpad*)res;
}
