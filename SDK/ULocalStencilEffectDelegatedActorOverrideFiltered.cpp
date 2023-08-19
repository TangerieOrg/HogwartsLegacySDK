#include "FStencilManagerEffectName.hpp"
#include "ULocalStencilEffectDelegatedActorOverride.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
ULocalStencilEffectDelegatedActorOverrideFiltered* ULocalStencilEffectDelegatedActorOverrideFiltered::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorOverrideFiltered");
    return (ULocalStencilEffectDelegatedActorOverrideFiltered*)res;
}
