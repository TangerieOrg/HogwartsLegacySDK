#include "ESpellUpgrades.hpp"
#include "UFXFilter.hpp"
#include "UFXFilter_SpellUpgrade.hpp"
UFXFilter_SpellUpgrade* UFXFilter_SpellUpgrade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_SpellUpgrade");
    return (UFXFilter_SpellUpgrade*)res;
}
