#include "UOverlapEffectsHandlerEffectHermes.hpp"
#include "UOverlapEffectsHandlerEffectHermesVictimName.hpp"
UOverlapEffectsHandlerEffectHermesVictimName* UOverlapEffectsHandlerEffectHermesVictimName::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectHermesVictimName");
    return (UOverlapEffectsHandlerEffectHermesVictimName*)res;
}
