#include "UDuelTechnique.hpp"
#include "UDuelTechnique_SpellEffectMultiple.hpp"
UDuelTechnique_SpellEffectMultiple* UDuelTechnique_SpellEffectMultiple::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_SpellEffectMultiple");
    return (UDuelTechnique_SpellEffectMultiple*)res;
}
