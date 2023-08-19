#include "UAblCustomEventListenerStartEndScratchpad.hpp"
#include "UAblRootMotionModifiersEventListenerScratchpad.hpp"
UAblRootMotionModifiersEventListenerScratchpad* UAblRootMotionModifiersEventListenerScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblRootMotionModifiersEventListenerScratchpad");
    return (UAblRootMotionModifiersEventListenerScratchpad*)res;
}
