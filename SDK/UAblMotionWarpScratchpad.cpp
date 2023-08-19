#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblMotionWarpScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblMotionWarpScratchpad* UAblMotionWarpScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblMotionWarpScratchpad");
    return (UAblMotionWarpScratchpad*)res;
}
