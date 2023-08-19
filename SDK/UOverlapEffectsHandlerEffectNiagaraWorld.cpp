#include "EOverlapEffectsHitPoint.hpp"
#include "UOverlapEffectsHandlerEffectNiagara.hpp"
#include "UOverlapEffectsHandlerEffectNiagaraWorld.hpp"
UOverlapEffectsHandlerEffectNiagaraWorld* UOverlapEffectsHandlerEffectNiagaraWorld::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectNiagaraWorld");
    return (UOverlapEffectsHandlerEffectNiagaraWorld*)res;
}
