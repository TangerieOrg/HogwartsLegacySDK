#include "UModFilter_SpellCooldown_Base.hpp"
#include "UModFilter_SpellCooldown_IsScholar.hpp"
UModFilter_SpellCooldown_IsScholar* UModFilter_SpellCooldown_IsScholar::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SpellCooldown_IsScholar");
    return (UModFilter_SpellCooldown_IsScholar*)res;
}
