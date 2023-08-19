#include "UAblCustomEventListenerScratchpad.hpp"
#include "UAblCustomEventListenerStartEndScratchpad.hpp"
UAblCustomEventListenerStartEndScratchpad* UAblCustomEventListenerStartEndScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCustomEventListenerStartEndScratchpad");
    return (UAblCustomEventListenerStartEndScratchpad*)res;
}
