#include "EMultiFXSpell.hpp"
#include "UFXFilter.hpp"
#include "UFXFilter_Spell.hpp"
UFXFilter_Spell* UFXFilter_Spell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_Spell");
    return (UFXFilter_Spell*)res;
}
