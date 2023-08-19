#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblHideAndDisableCharacterScratchpad.hpp"
UAblHideAndDisableCharacterScratchpad* UAblHideAndDisableCharacterScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblHideAndDisableCharacterScratchpad");
    return (UAblHideAndDisableCharacterScratchpad*)res;
}
