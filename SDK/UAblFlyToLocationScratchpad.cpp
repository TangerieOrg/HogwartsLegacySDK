#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblFlyToLocationScratchpad.hpp"
UAblFlyToLocationScratchpad* UAblFlyToLocationScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblFlyToLocationScratchpad");
    return (UAblFlyToLocationScratchpad*)res;
}
