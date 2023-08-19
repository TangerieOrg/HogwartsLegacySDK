#include "UAblCustomEventListenerOnceScratchpad.hpp"
#include "UAblDisarmEventListenerScratchpad.hpp"
UAblDisarmEventListenerScratchpad* UAblDisarmEventListenerScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblDisarmEventListenerScratchpad");
    return (UAblDisarmEventListenerScratchpad*)res;
}
