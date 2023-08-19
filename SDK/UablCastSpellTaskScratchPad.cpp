#include "UAblAbilityTaskScratchPad.hpp"
#include "UablCastSpellTaskScratchPad.hpp"
UablCastSpellTaskScratchPad* UablCastSpellTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablCastSpellTaskScratchPad");
    return (UablCastSpellTaskScratchPad*)res;
}
