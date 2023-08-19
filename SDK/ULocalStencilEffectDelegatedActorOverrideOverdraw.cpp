#include "ELocalStencilBoundsMethod.hpp"
#include "FVector.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideOverdraw.hpp"
ULocalStencilEffectDelegatedActorOverrideOverdraw* ULocalStencilEffectDelegatedActorOverrideOverdraw::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorOverrideOverdraw");
    return (ULocalStencilEffectDelegatedActorOverrideOverdraw*)res;
}
