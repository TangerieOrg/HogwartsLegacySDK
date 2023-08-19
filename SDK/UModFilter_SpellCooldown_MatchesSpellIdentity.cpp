#include "FSelectableName.hpp"
#include "UModFilter_SpellCooldown_Base.hpp"
#include "UModFilter_SpellCooldown_MatchesSpellIdentity.hpp"
UModFilter_SpellCooldown_MatchesSpellIdentity* UModFilter_SpellCooldown_MatchesSpellIdentity::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SpellCooldown_MatchesSpellIdentity");
    return (UModFilter_SpellCooldown_MatchesSpellIdentity*)res;
}
