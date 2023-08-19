#include "UDuelTechnique.hpp"
#include "UDuelTechnique_SpellEffect.hpp"
UDuelTechnique_SpellEffect* UDuelTechnique_SpellEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_SpellEffect");
    return (UDuelTechnique_SpellEffect*)res;
}
