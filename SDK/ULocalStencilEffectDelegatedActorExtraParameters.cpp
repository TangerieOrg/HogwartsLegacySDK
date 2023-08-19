#include "FLocalStencilEffectColor.hpp"
#include "FLocalStencilEffectScalar.hpp"
#include "ULocalStencilEffectDelegatedActorExtraParameters.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
ULocalStencilEffectDelegatedActorExtraParameters* ULocalStencilEffectDelegatedActorExtraParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorExtraParameters");
    return (ULocalStencilEffectDelegatedActorExtraParameters*)res;
}
