#include "UAblAvaMotionWarpSyncPointUpdaterScratchpad.hpp"
#include "UAblTetherLocPointUpdaterScratchpad.hpp"
UAblTetherLocPointUpdaterScratchpad* UAblTetherLocPointUpdaterScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTetherLocPointUpdaterScratchpad");
    return (UAblTetherLocPointUpdaterScratchpad*)res;
}
