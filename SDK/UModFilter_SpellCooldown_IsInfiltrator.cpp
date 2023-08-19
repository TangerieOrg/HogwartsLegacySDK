#include "UModFilter_SpellCooldown_Base.hpp"
#include "UModFilter_SpellCooldown_IsInfiltrator.hpp"
UModFilter_SpellCooldown_IsInfiltrator* UModFilter_SpellCooldown_IsInfiltrator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SpellCooldown_IsInfiltrator");
    return (UModFilter_SpellCooldown_IsInfiltrator*)res;
}
