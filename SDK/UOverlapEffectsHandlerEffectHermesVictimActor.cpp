#include "UOverlapEffectsHandlerEffectHermes.hpp"
#include "UOverlapEffectsHandlerEffectHermesVictimActor.hpp"
UOverlapEffectsHandlerEffectHermesVictimActor* UOverlapEffectsHandlerEffectHermesVictimActor::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectHermesVictimActor");
    return (UOverlapEffectsHandlerEffectHermesVictimActor*)res;
}
