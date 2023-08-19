#include "UAblCustomEventListenerOnceScratchpad.hpp"
#include "UAblCustomEventListenerScratchpad.hpp"
UAblCustomEventListenerOnceScratchpad* UAblCustomEventListenerOnceScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblCustomEventListenerOnceScratchpad");
    return (UAblCustomEventListenerOnceScratchpad*)res;
}
