#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#include "ULocalStencilEffectDelegatedForcePlayerCustomDepth.hpp"
ULocalStencilEffectDelegatedForcePlayerCustomDepth* ULocalStencilEffectDelegatedForcePlayerCustomDepth::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedForcePlayerCustomDepth");
    return (ULocalStencilEffectDelegatedForcePlayerCustomDepth*)res;
}
