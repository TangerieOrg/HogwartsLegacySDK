#include "UNiagaraComponent.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
#include "UOverlapEffectsHandlerEffectNiagara.hpp"
UOverlapEffectsHandlerEffectNiagara* UOverlapEffectsHandlerEffectNiagara::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectNiagara");
    return (UOverlapEffectsHandlerEffectNiagara*)res;
}
