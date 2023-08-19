#include "UModFilter.hpp"
#include "UModFilter_SpellCooldown_Base.hpp"
UModFilter_SpellCooldown_Base* UModFilter_SpellCooldown_Base::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SpellCooldown_Base");
    return (UModFilter_SpellCooldown_Base*)res;
}
