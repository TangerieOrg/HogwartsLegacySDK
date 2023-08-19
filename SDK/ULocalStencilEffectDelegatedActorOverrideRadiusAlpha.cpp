#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideRadiusAlpha.hpp"
ULocalStencilEffectDelegatedActorOverrideRadiusAlpha* ULocalStencilEffectDelegatedActorOverrideRadiusAlpha::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorOverrideRadiusAlpha");
    return (ULocalStencilEffectDelegatedActorOverrideRadiusAlpha*)res;
}
