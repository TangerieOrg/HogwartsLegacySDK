#include "EOverlapEffectsAttachment.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UOverlapEffectsHandlerEffectNiagara.hpp"
#include "UOverlapEffectsHandlerEffectNiagaraAttached.hpp"
UOverlapEffectsHandlerEffectNiagaraAttached* UOverlapEffectsHandlerEffectNiagaraAttached::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectNiagaraAttached");
    return (UOverlapEffectsHandlerEffectNiagaraAttached*)res;
}
