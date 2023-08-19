#include "UAblAbilityTaskScratchPad.hpp"
#include "UablNamedEventTaskScratchPad.hpp"
UablNamedEventTaskScratchPad* UablNamedEventTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablNamedEventTaskScratchPad");
    return (UablNamedEventTaskScratchPad*)res;
}
