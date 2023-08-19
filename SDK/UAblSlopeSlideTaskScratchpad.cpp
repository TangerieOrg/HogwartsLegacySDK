#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSlopeSlideTaskScratchpad.hpp"
UAblSlopeSlideTaskScratchpad* UAblSlopeSlideTaskScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSlopeSlideTaskScratchpad");
    return (UAblSlopeSlideTaskScratchpad*)res;
}
