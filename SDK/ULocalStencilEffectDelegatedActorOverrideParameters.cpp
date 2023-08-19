#include "FLocalStencilEffectParams.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideParameters.hpp"
#include "UMaterialInterface.hpp"
ULocalStencilEffectDelegatedActorOverrideParameters* ULocalStencilEffectDelegatedActorOverrideParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorOverrideParameters");
    return (ULocalStencilEffectDelegatedActorOverrideParameters*)res;
}
