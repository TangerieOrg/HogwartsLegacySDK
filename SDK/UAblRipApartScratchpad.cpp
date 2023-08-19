#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblRipApartScratchpad.hpp"
UAblRipApartScratchpad* UAblRipApartScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblRipApartScratchpad");
    return (UAblRipApartScratchpad*)res;
}
