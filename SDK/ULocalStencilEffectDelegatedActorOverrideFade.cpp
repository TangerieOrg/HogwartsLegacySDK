#include "ULocalStencilEffectDelegatedActorOverrideFade.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
ULocalStencilEffectDelegatedActorOverrideFade* ULocalStencilEffectDelegatedActorOverrideFade::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorOverrideFade");
    return (ULocalStencilEffectDelegatedActorOverrideFade*)res;
}
