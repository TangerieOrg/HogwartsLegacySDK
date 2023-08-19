#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideRadius.hpp"
ULocalStencilEffectDelegatedActorOverrideRadius* ULocalStencilEffectDelegatedActorOverrideRadius::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorOverrideRadius");
    return (ULocalStencilEffectDelegatedActorOverrideRadius*)res;
}
