#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcHeadTrackingScratchpad.hpp"
UAblNpcHeadTrackingScratchpad* UAblNpcHeadTrackingScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcHeadTrackingScratchpad");
    return (UAblNpcHeadTrackingScratchpad*)res;
}
