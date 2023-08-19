#include "ELocalStencilBoundsMethod.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideBoundsMethod.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
ULocalStencilEffectDelegatedActorOverrideBoundsMethod* ULocalStencilEffectDelegatedActorOverrideBoundsMethod::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorOverrideBoundsMethod");
    return (ULocalStencilEffectDelegatedActorOverrideBoundsMethod*)res;
}
