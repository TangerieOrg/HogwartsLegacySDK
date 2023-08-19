#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSetPheonixCharacterMovementModeScratchpad.hpp"
UAblSetPheonixCharacterMovementModeScratchpad* UAblSetPheonixCharacterMovementModeScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetPheonixCharacterMovementModeScratchpad");
    return (UAblSetPheonixCharacterMovementModeScratchpad*)res;
}
