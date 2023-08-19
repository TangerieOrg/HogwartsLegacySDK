#include "UAblAbilityTaskScratchPad.hpp"
#include "UablClothOptionsScratchpad.hpp"
UablClothOptionsScratchpad* UablClothOptionsScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablClothOptionsScratchpad");
    return (UablClothOptionsScratchpad*)res;
}
