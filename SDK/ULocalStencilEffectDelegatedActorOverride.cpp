#include "ULocalStencilEffectDelegatedActorOverride.hpp"
#include "UObject.hpp"
ULocalStencilEffectDelegatedActorOverride* ULocalStencilEffectDelegatedActorOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorOverride");
    return (ULocalStencilEffectDelegatedActorOverride*)res;
}
