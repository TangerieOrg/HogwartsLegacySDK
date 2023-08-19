#include "FLocalStencilEffectActorOverrideParameters.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideEverything.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
ULocalStencilEffectDelegatedActorOverrideEverything* ULocalStencilEffectDelegatedActorOverrideEverything::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorOverrideEverything");
    return (ULocalStencilEffectDelegatedActorOverrideEverything*)res;
}
