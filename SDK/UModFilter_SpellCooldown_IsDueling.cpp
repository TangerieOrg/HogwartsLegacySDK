#include "UModFilter_SpellCooldown_Base.hpp"
#include "UModFilter_SpellCooldown_IsDueling.hpp"
UModFilter_SpellCooldown_IsDueling* UModFilter_SpellCooldown_IsDueling::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SpellCooldown_IsDueling");
    return (UModFilter_SpellCooldown_IsDueling*)res;
}
