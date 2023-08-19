#include "UModFilter_SpellCooldown_Base.hpp"
#include "UModFilter_SpellCooldown_IsDada.hpp"
UModFilter_SpellCooldown_IsDada* UModFilter_SpellCooldown_IsDada::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SpellCooldown_IsDada");
    return (UModFilter_SpellCooldown_IsDada*)res;
}
