#include "AActor.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblTransformIntoNoDeathScratchpad.hpp"
UAblTransformIntoNoDeathScratchpad* UAblTransformIntoNoDeathScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTransformIntoNoDeathScratchpad");
    return (UAblTransformIntoNoDeathScratchpad*)res;
}
