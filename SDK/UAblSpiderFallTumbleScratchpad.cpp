#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSpiderFallTumbleScratchpad.hpp"
#include "UAmbulatory_MovementComponent.hpp"
UAblSpiderFallTumbleScratchpad* UAblSpiderFallTumbleScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSpiderFallTumbleScratchpad");
    return (UAblSpiderFallTumbleScratchpad*)res;
}
